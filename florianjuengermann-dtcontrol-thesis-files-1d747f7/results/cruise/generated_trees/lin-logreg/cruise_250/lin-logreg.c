#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,10.f,-2.f,-2.f,-2.f,-2.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[3] <= -5.0) {
		if (42.27562527758133*x[2]+22.343858011379325*x[3]+31.49361862917913*x[5]-3.7239763352299073 <= 0) {
			return 0.0f;
		}
		else {
			return 0.0f;
		}

	}
	else {
		if (0.05214219067920801*x[2]-0.6877117316722622*x[3]+0.30938152464696084*x[5]+1.9921296145249905 <= 0) {
			if (0.03986789553994071*x[2]-0.39454718751709716*x[3]+0.22465542377088107*x[5]+0.3836054174238057 <= 0) {
				if (-0.09635332162293694*x[2]+1.02702842059138*x[3]-0.5824810144413934*x[5]-3.1057186581440623 <= 0) {
					if (x[5] <= 13.0) {
						if (0.827408220993909*x[2]-8.747204015834468*x[3]+1.7706431538571226*x[5]+7.427172096736873 <= 0) {
							if (-0.3254165138971532*x[2]+3.4420025408571755*x[3]-1.784217461853079*x[5]-8.886492885871851 <= 0) {
								if (x[5] <= -1.0) {
									if (x[2] <= 49.5) {
										return -2.0f;
									}
									else {
										if (-0.8630030975550977*x[2]+9.106061824955917*x[3]-1.4996484680263173*x[5]-6.700127118215697 <= 0) {
											if (x[2] <= 73.5) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[2] <= 128.5) {
												if (-15.216129799897823*x[2]+152.62902285979652*x[3]-23.452861469522542*x[5]-52.05079302779894 <= 0) {
													if (x[2] <= 91.5) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (-76.58160836070708*x[2]+778.6052549422617*x[3]+73.11356247914418*x[5]+381.83927957749495 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (29.07014730415153*x[2]-847.5052710679314*x[3]-5053.670012080109*x[5]+1130.3983229382488 <= 0) {
													return -2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}
								else {
									if (x[3] <= 9.0) {
										if (0.7978003477746306*x[2]-0.09239135573868731*x[3]+3.304934812025103*x[5]-47.36199526055807 <= 0) {
											if (x[2] <= 59.5) {
												if (x[2] <= 10.5) {
													return 0.0f;
												}
												else {
													return -2.0f;
												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[3] <= 17.0) {
											if (0.870098081590109*x[2]-9.130225073313442*x[3]+4.874811543483143*x[5]+21.930169635010568 <= 0) {
												if (x[5] <= 3.0) {
													if (x[5] <= 1.0) {
														return 0.0f;
													}
													else {
														if (x[2] <= 78.5) {
															return -2.0f;
														}
														else {
															if (x[2] <= 120.5) {
																return 0.0f;
															}
															else {
																return -2.0f;
															}

														}

													}

												}
												else {
													return -2.0f;
												}

											}
											else {
												if (x[5] <= 9.0) {
													if (1.0881735562091468*x[2]-11.419211922198242*x[3]+5.834629717474586*x[5]+27.727215465524537 <= 0) {
														if (x[5] <= 7.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 46.0) {
																return -2.0f;
															}
															else {
																if (x[2] <= 88.5) {
																	return 0.0f;
																}
																else {
																	return -2.0f;
																}

															}

														}

													}
													else {
														if (1.3500636987619985*x[2]-14.207265953433247*x[3]+7.16292844321769*x[5]+34.9415920192997 <= 0) {
															if (x[5] <= 6.0) {
																return -2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[3] <= 15.0) {
																if (x[2] <= 69.5) {
																	if (16.427304924928563*x[2]-137.01165730059932*x[3]+98.56389051487307*x[5]-25.511576543693906 <= 0) {
																		return -2.0f;
																	}
																	else {
																		if (x[2] <= 49.5) {
																			if (x[2] <= 46.5) {
																				return 0.0f;
																			}
																			else {
																				return -2.0f;
																			}

																		}
																		else {
																			return 0.0f;
																		}

																	}

																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (x[2] <= 132.5) {
																	if (60.66614917034557*x[2]-554.1745769854858*x[3]+348.6502870981375*x[5]-34.635911061594065 <= 0) {
																		return -2.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	return 0.0f;
																}

															}

														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[2] <= 115.5) {
												if (30.5646882585569*x[2]-524.6012461415804*x[3]+612.4929084767198*x[5]-29.144513674523935 <= 0) {
													return -2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[5] <= 1.0) {
													if (21.969894338748198*x[2]-264.61636091993745*x[3]+1149.0003527224908 <= 0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (29.077201499564964*x[2]-497.95823663988483*x[3]+543.5508582546488*x[5]-38.288635949143995 <= 0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}

									}

								}

							}
							else {
								if (x[5] <= 11.0) {
									if (x[5] <= 1.0) {
										if (x[2] <= 55.5) {
											return -2.0f;
										}
										else {
											if (x[5] <= -1.0) {
												if (-4.899628559850561*x[2]+35.047683821966054*x[3]-102.01963218290335*x[5]+32.13755398302103 <= 0) {
													return -2.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[2] <= 150.5) {
													if (x[2] <= 76.5) {
														return -2.0f;
													}
													else {
														if (25.90803706853893*x[2]-328.36300928297584*x[3]+1639.6498860369313 <= 0) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return -2.0f;
												}

											}

										}

									}
									else {
										if (1.2205914267218854*x[2]-13.403907873680154*x[3]+11.566964459925957*x[5]-5.466192994956775 <= 0) {
											if (2.1598459418087765*x[2]-23.882347776960742*x[3]+20.9891542549406*x[5]-11.30004681141216 <= 0) {
												if (x[5] <= 9.0) {
													return -2.0f;
												}
												else {
													if (x[2] <= 70.0) {
														if (x[2] <= 61.5) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return -2.0f;
													}

												}

											}
											else {
												if (x[2] <= 30.0) {
													return -2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[2] <= 21.5) {
												return -2.0f;
											}
											else {
												if (x[2] <= 97.5) {
													return 0.0f;
												}
												else {
													return -2.0f;
												}

											}

										}

									}

								}
								else {
									if (51.7143243940433*x[2]-658.5709342147479*x[3]+584.0325816141578*x[5]+48.66938180118069 <= 0) {
										return -2.0f;
									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[2] <= 66.0) {
								return 0.0f;
							}
							else {
								if (-98.45641283240688*x[2]+1267.6502327780124*x[3]-91.0068270912151*x[5]-3738.592407049789 <= 0) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}

						}

					}
					else {
						if (-0.2526793102736518*x[2]+3.487843516061629*x[3]-2.880789973519739*x[5]+3.8605034604990043 <= 0) {
							if (x[3] <= 19.0) {
								if (-25.214499415465337*x[2]+269.59723746563213*x[3]-262.21108362769326*x[5]+1053.4700136108884 <= 0) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								return 0.0f;
							}

						}
						else {
							if (-25.484446236273957*x[2]+501.42387423042516*x[3]-532.0460682721945*x[5]-18.636232222517567 <= 0) {
								if (x[2] <= 58.5) {
									if (-106.95952554750421*x[2]+1354.3486074453417*x[3]-1158.4910876936535*x[5]+2375.770270676465 <= 0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									return 0.0f;
								}

							}
							else {
								return -2.0f;
							}

						}

					}

				}
				else {
					if (x[5] <= -3.0) {
						if (-0.37371510144177844*x[2]+3.6345102868014765*x[3]-0.28840869688584686*x[5]-4.264115787510054 <= 0) {
							if (x[2] <= 40.5) {
								return -2.0f;
							}
							else {
								if (0.6103234466383904*x[2]-6.351836666347805*x[3]-6.651575741788943*x[5]-41.74062604159895 <= 0) {
									if (x[3] <= 17.0) {
										if (-29.731859675762966*x[2]+240.0234358098481*x[3]-16.151165711039727*x[5]+54.99039687441956 <= 0) {
											if (-1.0278495681672692*x[2]+10.612702427957936*x[3]-0.10605165346391329*x[5]+2.0867330845948135 <= 0) {
												if (x[2] <= 75.5) {
													return 0.0f;
												}
												else {
													if (x[2] <= 158.0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[5] <= -5.0) {
													if (x[2] <= 128.0) {
														if (-15.112002260823498*x[2]+150.83669825415666*x[3]-10.41001259878858*x[5]+1.7350020997928546 <= 0) {
															return 0.0f;
														}
														else {
															if (x[2] <= 103.5) {
																return 0.0f;
															}
															else {
																if (x[2] <= 107.0) {
																	return 0.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											return -2.0f;
										}

									}
									else {
										if (26.452981609669*x[2]-357.7052261007799*x[3]+12.887041495454946*x[5]+1927.089115436546 <= 0) {
											return -2.0f;
										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (x[2] <= 77.0) {
										return 0.0f;
									}
									else {
										if (-30.657745154779583*x[2]+956.7779191955232*x[3]+1624.8815684893266*x[5]-270.81359474820056 <= 0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}

								}

							}

						}
						else {
							if (x[3] <= 15.0) {
								if (1.4511624598128066*x[2]-13.265790381378746*x[3]+0.7702096171746792*x[5]+10.687163487008988 <= 0) {
									if (3.045154458630096*x[2]-27.594763759937504*x[3]+1.6373781936662977*x[5]+21.90293469878761 <= 0) {
										if (x[2] <= 84.5) {
											return -2.0f;
										}
										else {
											if (28.69090760072437*x[2]-344.3119819531287*x[3]+38.27994541835926*x[5]+1219.8761219731246 <= 0) {
												return -2.0f;
											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[2] <= 113.5) {
											return 0.0f;
										}
										else {
											return -2.0f;
										}

									}

								}
								else {
									if (x[2] <= 59.5) {
										return -2.0f;
									}
									else {
										if (61.19602276127859*x[2]-596.1141644072209*x[3]+31.47117443288*x[5]+869.1183033942699 <= 0) {
											return -2.0f;
										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								return -2.0f;
							}

						}

					}
					else {
						if (-0.1287836198708069*x[2]+1.4186710048630677*x[3]-1.0651829164852022*x[5]-1.4094645352540602 <= 0) {
							if (31.50614717876231*x[2]-488.460359451034*x[3]+456.3821610337701*x[5]-1297.5018633916784 <= 0) {
								if (2.0886632274864816*x[2]-24.51430162232145*x[3]+20.15310200775861*x[5]+4.636030845639037 <= 0) {
									if (x[2] <= 61.0) {
										if (x[2] <= 36.0) {
											return -2.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										return -2.0f;
									}

								}
								else {
									if (x[5] <= 13.0) {
										return -2.0f;
									}
									else {
										if (36.2237101982957*x[2]-456.0092666312324*x[3]+352.71396548465776*x[5]+602.5096304225829 <= 0) {
											return -2.0f;
										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[5] <= 17.0) {
								if (x[5] <= -1.0) {
									if (0.5403797896883631*x[2]-5.6810455400182285*x[3]-4.728873137258376*x[5]+2.364436568629203 <= 0) {
										if (0.8319543909147465*x[2]-8.7086937219205*x[3]-7.424916746902123*x[5]+3.712458373451055 <= 0) {
											if (1.0709943913666362*x[2]-11.224591585674142*x[3]-9.832592741185193*x[5]+4.916296370592693 <= 0) {
												if (x[3] <= 15.0) {
													if (14.271072733038858*x[2]-142.7107291375572*x[3]-108.18290361281386*x[5]+54.09145180640694 <= 0) {
														if (x[2] <= 100.5) {
															return -2.0f;
														}
														else {
															if (x[2] <= 101.5) {
																return 0.0f;
															}
															else {
																return -2.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return -2.0f;
												}

											}
											else {
												if (x[2] <= 71.5) {
													return -2.0f;
												}
												else {
													if (x[2] <= 155.5) {
														return 0.0f;
													}
													else {
														return -2.0f;
													}

												}

											}

										}
										else {
											if (x[2] <= 72.5) {
												return -2.0f;
											}
											else {
												if (x[2] <= 156.5) {
													return 0.0f;
												}
												else {
													return -2.0f;
												}

											}

										}

									}
									else {
										if (x[2] <= 64.5) {
											return -2.0f;
										}
										else {
											if (35.24310364001877*x[2]-421.0307884783772*x[3]-641.2556195498822*x[5]+320.627809774931 <= 0) {
												return -2.0f;
											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (3.5124011919424105*x[2]-43.12126273953843*x[3]+37.78444086962051*x[5]-12.526556562602503 <= 0) {
										if (2240.6377054236204*x[2]-26954.183598274998*x[3]+23578.143017042952*x[5]-8603.008483352589 <= 0) {
											return -2.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (33.89661412560051*x[2]-425.8466678105792*x[3]+397.90007473080925*x[5]-474.7891766655253 <= 0) {
											return -2.0f;
										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								if (36.79427044434383*x[2]-496.3673562662491*x[3]+455.5273721002468*x[5]-347.47035678827484 <= 0) {
									return -2.0f;
								}
								else {
									return 0.0f;
								}

							}

						}

					}

				}

			}
			else {
				if (x[3] <= 19.0) {
					if (x[5] <= 13.0) {
						if (-0.1622820014223567*x[2]+1.9941156226223395*x[3]-0.692327194837316*x[5]-5.658914373486143 <= 0) {
							if (-0.9023132386562346*x[2]+10.966307703914676*x[3]-3.0126372789994553*x[5]-27.789574639470807 <= 0) {
								if (x[2] <= 97.0) {
									return 0.0f;
								}
								else {
									if (-1.5925648114292377*x[2]+30.216019795450386*x[3]-5.4662779255615055*x[5]-241.94361135870582 <= 0) {
										if (-66.03214394614801*x[2]+895.1437517928865*x[3]-214.71284062034186*x[5]-3550.5371255999203 <= 0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[2] <= 178.5) {
											return 0.0f;
										}
										else {
											if (x[2] <= 195.5) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[2] <= 151.5) {
									if (-1.0314025654523367*x[2]+10.906448553170183*x[3]-3.4907919339582696*x[5]-9.679766080974607 <= 0) {
										if (-32.37997115316077*x[2]+167.1395870393322*x[3]+527.2248387011348*x[5]-7.337977894652701 <= 0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[5] <= 5.0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									return 0.0f;
								}

							}

						}
						else {
							if (x[5] <= 11.0) {
								if (x[5] <= -3.0) {
									if (-22.99314083462156*x[2]+457.1564298112061*x[3]+894.3473901077584*x[5]-87.27500633952077 <= 0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[5] <= 9.0) {
										if (-1.7478705408164728*x[2]+26.397009710001488*x[3]-9.291315784809402*x[5]-180.85321187324598 <= 0) {
											if (x[5] <= -1.0) {
												if (-80.88725947324991*x[2]+1026.546279112579*x[3]+1108.229877492674*x[5]-554.1149387463239 <= 0) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (20.210013946325518*x[2]-262.365171839554*x[3]+219.85704198417935*x[5]-68.01264926790405 <= 0) {
													if (x[3] <= 17.0) {
														if (-31.005986863352742*x[2]+337.6084160694416*x[3]-208.52239199587012*x[5]+95.44590500138419 <= 0) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[2] <= 148.5) {
															if (26.625977198601717*x[2]-295.44797633662085*x[3]+278.8988752318127*x[5]-16.41377646314585 <= 0) {
																return -2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (30.38788280626775*x[2]-517.4827465092318*x[3]+695.0284980159286*x[5]-28.749041472758147 <= 0) {
												return -2.0f;
											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (-1.8856833530409547*x[2]+23.45326560702341*x[3]-16.7078359894481*x[5]-1.6707835989448776 <= 0) {
											if (x[2] <= 72.5) {
												return 0.0f;
											}
											else {
												if (-31.11074053952467*x[2]+690.6880636042531*x[3]-813.5316783425374*x[5]-81.35316783425306 <= 0) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[2] <= 111.0) {
												if (-63.65855752203321*x[2]+781.0930175020802*x[3]-554.7406105249624*x[5]-55.47406105249502 <= 0) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (-1.0597153347497965*x[2]+13.008187333056885*x[3]-9.113315160531602*x[5]-0.7594429300443 <= 0) {
									if (x[2] <= 33.0) {
										return 0.0f;
									}
									else {
										if (-32.04502018653395*x[2]+825.9209238355124*x[3]-916.0787082350209*x[5]-76.33989235291611 <= 0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (x[2] <= 96.5) {
										if (x[2] <= 91.5) {
											if (x[2] <= 74.5) {
												if (x[2] <= 66.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}

					}
					else {
						if (-45.374402957145456*x[2]+619.7872225461316*x[3]-475.3570662501876*x[5]+19.53092613915534 <= 0) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}

				}
				else {
					if (0.4292603226265798*x[2]-4.20102598932096*x[3]+2.647479032703381*x[5]-0.21005129946604179 <= 0) {
						if (x[2] <= 191.5) {
							if (x[2] <= 127.0) {
								return 0.0f;
							}
							else {
								return -2.0f;
							}

						}
						else {
							return 0.0f;
						}

					}
					else {
						if (0.6893734058558472*x[2]-6.83076481011847*x[3]+4.354860996601873*x[5]-0.3415382405059225 <= 0) {
							if (x[2] <= 184.5) {
								if (x[2] <= 122.5) {
									return 0.0f;
								}
								else {
									return -2.0f;
								}

							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[5] <= 11.0) {
								if (1.3299688613141476*x[2]-13.210618862116686*x[3]+8.083933536119144*x[5]-0.6605309431058376 <= 0) {
									if (x[2] <= 180.5) {
										if (31.03451923154762*x[2]-542.2714360137526*x[3]+663.6048620116162*x[5]-27.113571800683395 <= 0) {
											return -2.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}
								else {
									if (3.320089295071307*x[2]-33.076097610419986*x[3]+20.101775112978498*x[5]-1.653804880521012 <= 0) {
										if (x[2] <= 145.0) {
											return 0.0f;
										}
										else {
											return -2.0f;
										}

									}
									else {
										if (x[2] <= 164.5) {
											if (x[5] <= 7.0) {
												return -2.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								return 0.0f;
							}

						}

					}

				}

			}

		}
		else {
			if (x[3] <= 19.0) {
				if (0.24471044319610077*x[2]-1.7143197492282063*x[3]+1.0838993384412032*x[5]-3.272393361737606 <= 0) {
					if (0.09689094486866996*x[2]-0.5779276821651136*x[3]+0.39654121320210123*x[5]-0.8345407154427643 <= 0) {
						if (1.5776089676941378*x[2]-8.29355226662373*x[3]-6.849198358577282*x[5]-88.24766237396499 <= 0) {
							if (x[5] <= 7.0) {
								if (0.3913992440460661*x[2]-1.7437836892210823*x[3]+0.5663473728543*x[5]-5.817681490636191 <= 0) {
									if (x[5] <= -5.0) {
										if (14.221143644443007*x[2]-56.884613157329504*x[3]+48.54115595509023*x[5]-8.0901926591816 <= 0) {
											if (x[2] <= 20.5) {
												return -2.0f;
											}
											else {
												if (x[2] <= 22.5) {
													return 0.0f;
												}
												else {
													return -2.0f;
												}

											}

										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[2] <= 15.5) {
											if (-4.144673153531388*x[2]-14.677973293543303*x[3]+16.889836414716214*x[5]-1.0935631216165282 <= 0) {
												return -2.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[5] <= 5.0) {
												if (x[3] <= 5.0) {
													if (x[5] <= 3.0) {
														if (120.2424263905928*x[2]-570.825179333953*x[3]+195.34760516921574*x[5]-1549.3252729538776 <= 0) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														return 0.0f;
													}

												}
												else {
													return -2.0f;
												}

											}
											else {
												if (x[2] <= 17.5) {
													return -2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}
								else {
									if (-0.9253115107306875*x[2]+3.9049650845172406*x[3]-0.5270863720833909*x[5]+16.96467281812713 <= 0) {
										if (x[2] <= 10.5) {
											return -2.0f;
										}
										else {
											if (-28.451498278934068*x[2]+242.5474005195205*x[3]-45.1030043048211*x[5]-26.97284856862938 <= 0) {
												if (-18.59271898630407*x[2]+92.9635929751928*x[3]-1.7674388808213335*x[5]+529.2773650798025 <= 0) {
													return 0.0f;
												}
												else {
													if (x[5] <= -5.0) {
														if (x[2] <= 28.5) {
															return 0.0f;
														}
														else {
															if (x[2] <= 31.0) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												return -2.0f;
											}

										}

									}
									else {
										if (x[2] <= 31.5) {
											if (x[2] <= 19.5) {
												return -2.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											return -2.0f;
										}

									}

								}

							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[2] <= 14.5) {
								return 0.0f;
							}
							else {
								if (-29.21751122762847*x[2]+432.18789945024974*x[3]+31.542742981671623*x[5]-5.257123830278738 <= 0) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}

						}

					}
					else {
						if (x[5] <= -3.0) {
							if (-1.046849975062229*x[2]+6.100798892035706*x[3]-2.335644905531274*x[5]+20.423915999822068 <= 0) {
								if (x[2] <= 19.5) {
									return 0.0f;
								}
								else {
									if (-25.12767240104315*x[2]+728.084635833279*x[3]+651.5199769517213*x[5]-91.42947881665744 <= 0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}

							}
							else {
								if (-3.643334448608209*x[2]+21.123333213762987*x[3]-23.76281032628518*x[5]+5.940702581570521 <= 0) {
									if (x[2] <= 45.5) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									if (-79.89191038511504*x[2]+452.6113829902585*x[3]-517.0752806552529*x[5]+129.2688201638114 <= 0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (-0.17364644423640965*x[2]+1.627647511920227*x[3]-1.2702945303442255*x[5]+3.418767750825673 <= 0) {
								if (-31.455089299942937*x[2]+243.83916158966838*x[3]-207.93775327820316*x[5]+782.9808213083193 <= 0) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								if (x[2] <= 13.5) {
									if (-24.899220306284434*x[2]+388.94699107989663*x[3]-351.4165687552708*x[5]+286.54440909098645 <= 0) {
										if (x[3] <= 8.0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										return -2.0f;
									}

								}
								else {
									if (x[5] <= 11.0) {
										if (-2.617749369302398*x[2]+16.834021884787337*x[3]-10.981453784353162*x[5]+15.160332492082105 <= 0) {
											if (x[5] <= -1.0) {
												if (-3.749344239239394*x[2]+25.480259112569524*x[3]-33.179868766834076*x[5]+16.58993438341704 <= 0) {
													if (-29.939870846698653*x[2]+412.2125701563825*x[3]+228.9147208310719*x[5]-114.457360415536 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (-109.74644297485489*x[2]+728.0461659580769*x[3]-980.2621350853882*x[5]+490.1310675426928 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (26.563309970925115*x[2]-255.55342692669393*x[3]+326.39722230565246*x[5]-1763.9742230980435 <= 0) {
													if (x[2] <= 36.5) {
														return 0.0f;
													}
													else {
														if (66.07880458081182*x[2]-468.7349666434111*x[3]+251.16966651960166*x[5]-147.7371940143988 <= 0) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											return -2.0f;
										}

									}
									else {
										return 0.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[2] <= 88.5) {
						if (x[5] <= 9.0) {
							if (0.35400321252868844*x[2]-2.580222079937918*x[3]+1.4187281464649244*x[5]-5.153226314855946 <= 0) {
								if (-0.36852343037604557*x[2]+2.854006875643016*x[3]-1.7825388051286906*x[5]+5.875006572699714 <= 0) {
									if (x[3] <= 3.0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[5] <= -1.0) {
										if (x[3] <= 7.0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (-1.6702669304828974*x[2]+14.644509768369835*x[3]-12.188095409385838*x[5]+40.636659993324486 <= 0) {
											if (-30.393726835371464*x[2]+298.7326645530627*x[3]-293.8994008631312*x[5]+1070.2544220601721 <= 0) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											if (-3.110066264777389*x[2]+26.6794746227048*x[3]-21.6435874478839*x[5]+70.94020543786466 <= 0) {
												if (x[2] <= 44.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[2] <= 32.5) {
													if (x[2] <= 31.5) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}

							}
							else {
								if (x[2] <= 12.5) {
									if (2.578521402174224*x[2]-7.28651991400789*x[3]+5.072681935238437*x[5]-40.36312209972974 <= 0) {
										if (-56.71415121286078*x[2]+167.92090079651746*x[3]-119.36958247738175*x[5]+622.3793130213726 <= 0) {
											if (-3.6850644796515173*x[2]+7.526784298611521*x[3]-5.490204993686017*x[5]+52.00640682399748 <= 0) {
												return 0.0f;
											}
											else {
												if (x[3] <= 1.0) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											return -2.0f;
										}

									}
									else {
										if (8.334717402361195*x[2]+54.93478744006355*x[3]-41.0363276698917*x[5]-4.833442822388073 <= 0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (x[3] <= 7.0) {
										if (-0.9398677854752155*x[2]+5.6542324464557545*x[3]-3.3077799166532573*x[5]+16.10103854450328 <= 0) {
											if (x[2] <= 23.5) {
												if (x[5] <= 3.0) {
													if (-2.2379595030636175*x[2]+11.950097222713342*x[3]-6.394746311630083*x[5]+42.81306253081631 <= 0) {
														if (x[2] <= 15.5) {
															if (x[5] <= -1.0) {
																if (x[3] <= -3.0) {
																	return 0.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}
													else {
														if (2.257171465147546*x[2]+0.7065914854632082*x[3]-19.106313251557875*x[5]-2.829502972099455 <= 0) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[2] <= 51.5) {
													if (x[3] <= 1.0) {
														return 0.0f;
													}
													else {
														if (x[5] <= 3.0) {
															if (-18.96862257813767*x[2]+132.7803643682173*x[3]-66.39016784020998*x[5]+303.49790489548866 <= 0) {
																if (-35.7515180100046*x[2]+225.96606266396932*x[3]-120.89890085772515*x[5]+634.2362533717101 <= 0) {
																	return 0.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																return 0.0f;
															}

														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (-3.7306993262103902*x[2]+24.5632959467867*x[3]-14.151621228093346*x[5]+61.83772701165609 <= 0) {
												if (x[2] <= 16.0) {
													return 0.0f;
												}
												else {
													if (x[2] <= 18.0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[3] <= 3.0) {
													if (x[2] <= 25.0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (-0.7020686250069811*x[2]+7.019025100938021*x[3]-3.294304101824778*x[5]-3.2794006005577185 <= 0) {
											if (-1.3166305071372844*x[2]+12.832867890010503*x[3]-6.172136991188198*x[5]-2.01188411730459 <= 0) {
												if (x[5] <= 5.0) {
													if (-74.16820379775659*x[2]+709.9836247438391*x[3]-318.87840206243686*x[5]+16.00491640210103 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (0.7874207640039309*x[2]+15.395181994621232*x[3]-39.10322226386411*x[5]-4.188654504667155 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[5] <= 1.0) {
													return 0.0f;
												}
												else {
													if (x[5] <= 6.0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[5] <= -1.0) {
												return 0.0f;
											}
											else {
												if (-30.664966834099122*x[2]+563.8914763732531*x[3]-575.2737988313928*x[5]+150.6761058278299 <= 0) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}

										}

									}

								}

							}

						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[2] <= 111.5) {
							if (x[3] <= 9.0) {
								return 0.0f;
							}
							else {
								if (x[5] <= 7.0) {
									if (-40.620934365362245*x[2]+499.4881216481521*x[3]-203.10467150555797*x[5]-1160.6594233675949 <= 0) {
										if (x[3] <= 11.0) {
											return 0.0f;
										}
										else {
											if (x[2] <= 99.5) {
												if (x[5] <= 5.0) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										return 0.0f;
									}

								}
								else {
									return 0.0f;
								}

							}

						}
						else {
							return 0.0f;
						}

					}

				}

			}
			else {
				return 0.0f;
			}

		}

	}

}