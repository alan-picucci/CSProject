from sklearn.linear_model import LogisticRegression
from sklearn.svm import LinearSVC

from dtcontrol.benchmark_suite import BenchmarkSuite
from dtcontrol.decision_tree.decision_tree import DecisionTree
from dtcontrol.decision_tree.determinization.label_powerset_determinizer import LabelPowersetDeterminizer

from dtcontrol.decision_tree.impurity.entropy import Entropy
from dtcontrol.decision_tree.impurity.min_label_entropy import MinLabelEntropy

from dtcontrol.decision_tree.splitting.axis_aligned import AxisAlignedSplittingStrategy
from dtcontrol.decision_tree.splitting.polynomial import PolynomialClassifierSplittingStrategy
from dtcontrol.decision_tree.splitting.polynomial_lowrank import LowRankPolynomialClassifierSplittingStrategy
from dtcontrol.decision_tree.splitting.linear_classifier import LinearClassifierSplittingStrategy
from dtcontrol.decision_tree.splitting.oc1 import OC1SplittingStrategy


benchmarkName = "cruise"

suite = BenchmarkSuite(timeout=None,
                       save_folder=f"results/{benchmarkName}/saved_classifiers",
                       output_folder=f"results/{benchmarkName}/generated_trees",
                       benchmark_file=f"results/{benchmarkName}",
                       rerun=True)

suite.add_datasets(['controllers_cps'], include=[
    'cruise_250',
    'cruise_300',
])

aa = AxisAlignedSplittingStrategy()
lin_logreg = LinearClassifierSplittingStrategy(LogisticRegression, solver='lbfgs', penalty='none')
lin_svm = LinearClassifierSplittingStrategy(LinearSVC, max_iter=5000, dual=False)
lin_oc1 = OC1SplittingStrategy()

poly = PolynomialClassifierSplittingStrategy(prettify=False)
poly.priority = 0.1
poly_lowrank= LowRankPolynomialClassifierSplittingStrategy(prettify=False) #(Alan+Giacomo): Here we have added our new splitting strategy 
poly_lowrank.priority=1 #(Alan+Giacomo): Here we can choose the "priority" variable for our splitting strategy. This variable is used when we compare the impurity measure of the polynomial split with the axis aligned split, since we compare: polynomialsplit_impurity/priority with axisaligned_impurity. Therefore, with a priority of 1, the impurities are compared directly.
polyPrio1 = PolynomialClassifierSplittingStrategy(prettify=False)
polyPrio1.priority = 1.0

entropy = Entropy(determinizer=LabelPowersetDeterminizer())
minEntropy = MinLabelEntropy(determinizer=LabelPowersetDeterminizer())

classifiers = [
    #DecisionTree([aa],              entropy,    'axis-aligned'),
    #DecisionTree([aa, lin_logreg],  entropy,    'lin-logreg'),
    #DecisionTree([aa, lin_svm],     entropy,    'lin-svm'),
    #DecisionTree([aa, lin_oc1],     entropy,    'lin-oc1'),
    #DecisionTree([aa, poly],        entropy,    'poly'),
    DecisionTree([aa, poly_lowrank], entropy, 'poly-lowrank'),
    #DecisionTree([aa, polyPrio1],   entropy,    'polyPrio1'),

    #DecisionTree([aa],              minEntropy, 'axis-aligned-minEntropy'),
    #DecisionTree([aa, lin_logreg],  minEntropy, 'lin-logreg-minEntropy'),
    #DecisionTree([aa, lin_svm],     minEntropy, 'lin-svm-minEntropy'),
    #DecisionTree([aa, lin_oc1],     minEntropy, 'lin-oc1-minEntropy'),
    #DecisionTree([aa, poly],        minEntropy, 'poly-minEntropy'),
    DecisionTree([aa, poly_lowrank],minEntropy, 'poly-lowrank-minEntropy'),
    #DecisionTree([aa, polyPrio1],   minEntropy, 'polyPrio1-minEntropy'),
]
suite.benchmark(classifiers) #(Alan+Giacomo):: This function is found in "benchmark_suite.py". It produces a decision tree for each combination of splitting strategy (right now we just test our low_rank splitting strategy with the axis-aligned) and dataset (right now these are just cruise250 and cruise300)
suite.display_html()
