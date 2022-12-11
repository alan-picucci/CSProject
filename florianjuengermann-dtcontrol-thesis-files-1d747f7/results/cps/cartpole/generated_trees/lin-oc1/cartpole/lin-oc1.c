#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {3.12f,-0.9f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (-0.231845081*x[0]-0.208729565*x[1]+0.615503728 <= 0) {
		if (0.1037938*x[0]+0.093925409*x[1]-0.373412788 <= 0) {
			if (x[1] <= 0.75) {
				if (x[1] <= -0.75) {
					if (x[0] <= 3.64) {
						if (x[0] <= 3.56) {
							if (x[0] <= 3.48) {
								return 0.0f;
							}
							else {
								if (x[1] <= -0.85) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}

						}
						else {
							if (x[1] <= -0.85) {
								return 0.0f;
							}
							else {
								return 0.0f;
							}

						}

					}
					else {
						if (x[1] <= -0.85) {
							if (x[0] <= 3.72) {
								return 0.0f;
							}
							else {
								if (x[0] <= 3.8) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}

						}
						else {
							if (x[0] <= 3.72) {
								return 0.0f;
							}
							else {
								if (x[0] <= 3.8) {
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
					if (0.118002564*x[0]+0.0568087325*x[1]-0.427415639 <= 0) {
						return 0.0f;
					}
					else {
						if (x[0] <= 3.72) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}

				}

			}
			else {
				if (x[0] <= 2.6) {
					if (x[1] <= 0.85) {
						if (x[0] <= 2.44) {
							return 0.0f;
						}
						else {
							if (x[0] <= 2.52) {
								return 0.0f;
							}
							else {
								return 0.0f;
							}

						}

					}
					else {
						if (x[0] <= 2.44) {
							return 0.0f;
						}
						else {
							if (x[0] <= 2.52) {
								return 0.0f;
							}
							else {
								return 0.0f;
							}

						}

					}

				}
				else {
					if (x[0] <= 2.68) {
						if (x[1] <= 0.85) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[0] <= 2.76) {
							if (x[1] <= 0.85) {
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
			if (-0.101208143*x[0]-0.254407883*x[1]+0.463214874 <= 0) {
				if (0.137499198*x[0]+0.0340989456*x[1]-0.454458088 <= 0) {
					if (x[0] <= 3.0) {
						if (-0.334857225*x[0]+0.753837943*x[1]+0.299329102 <= 0) {
							if (x[0] <= 2.92) {
								return 0.0f;
							}
							else {
								if (x[1] <= 0.85) {
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
						if (-0.242163509*x[0]-0.10303992*x[1]+0.817999482 <= 0) {
							if (x[1] <= 0.85) {
								return 0.0f;
							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[0] <= 3.08) {
								return 0.0f;
							}
							else {
								return 0.0f;
							}

						}

					}

				}
				else {
					if (-0.151204914*x[0]-0.217672408*x[1]+0.637532651 <= 0) {
						if (0.0877277628*x[0]+0.75505352*x[1]-0.8812626 <= 0) {
							if (x[0] <= 3.2) {
								return -0.1f;
							}
							else {
								if (x[0] <= 3.32) {
									return -2.4f;
								}
								else {
									return -2.5f;
								}

							}

						}
						else {
							return -2.2f;
						}

					}
					else {
						if (-0.181508183*x[0]-0.497259587*x[1]+0.886442304 <= 0) {
							return -0.2f;
						}
						else {
							if (x[0] <= 3.28) {
								return 0.0f;
							}
							else {
								if (x[0] <= 3.4) {
									return -0.3f;
								}
								else {
									return -2.6f;
								}

							}

						}

					}

				}

			}
			else {
				if (1.07724428*x[0]+1.07994473*x[1]-4.03961945 <= 0) {
					if (0.991956472*x[0]+0.474858046*x[1]-3.54502821 <= 0) {
						if (x[0] <= 3.32) {
							return 0.0f;
						}
						else {
							if (x[0] <= 3.48) {
								return 0.0f;
							}
							else {
								return 0.0f;
							}

						}

					}
					else {
						if (0.0912778229*x[0]+0.102154933*x[1]-0.33152613 <= 0) {
							if (x[0] <= 3.72) {
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
					if (x[1] <= 0.25) {
						if (x[0] <= 3.72) {
							if (x[0] <= 3.64) {
								return -0.6f;
							}
							else {
								if (x[1] <= 0.15) {
									return -0.7f;
								}
								else {
									return -3.2f;
								}

							}

						}
						else {
							if (x[0] <= 3.8) {
								if (x[1] <= 0.05) {
									return -0.9f;
								}
								else {
									return -3.4f;
								}

							}
							else {
								return -3.7f;
							}

						}

					}
					else {
						if (x[0] <= 3.48) {
							if (x[0] <= 3.4) {
								return 0.0f;
							}
							else {
								return -0.4f;
							}

						}
						else {
							if (x[0] <= 3.56) {
								if (x[1] <= 0.35) {
									return -0.5f;
								}
								else {
									return -2.8f;
								}

							}
							else {
								return -3.0f;
							}

						}

					}

				}

			}

		}

	}
	else {
		if (-0.185968369*x[0]-0.215927079*x[1]+0.443198264 <= 0) {
			if (0.991802514*x[0]+0.604520261*x[1]-2.61593151 <= 0) {
				if (0.0792228952*x[0]+0.629180849*x[1]-0.262559623 <= 0) {
					if (0.799132466*x[0]+0.665305793*x[1]-1.98300409 <= 0) {
						if (x[0] <= 2.52) {
							if (x[0] <= 2.44) {
								return 3.9f;
							}
							else {
								return 0.9f;
							}

						}
						else {
							if (x[0] <= 2.6) {
								return 0.8f;
							}
							else {
								return 0.7f;
							}

						}

					}
					else {
						return 0.0f;
					}

				}
				else {
					if (x[0] <= 2.48) {
						return 0.0f;
					}
					else {
						return 0.0f;
					}

				}

			}
			else {
				if (x[0] <= 3.16) {
					if (x[0] <= 2.76) {
						return 0.0f;
					}
					else {
						if (x[0] <= 3.0) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}

				}
				else {
					if (x[0] <= 3.32) {
						if (x[0] <= 3.24) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[0] <= 3.4) {
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
			if (x[1] <= -0.65) {
				if (x[0] <= 3.16) {
					if (x[0] <= 3.08) {
						if (x[0] <= 3.0) {
							return 2.4f;
						}
						else {
							if (x[1] <= -0.75) {
								return 2.3f;
							}
							else {
								return 0.2f;
							}

						}

					}
					else {
						if (x[1] <= -0.85) {
							return 2.2f;
						}
						else {
							if (x[1] <= -0.75) {
								return 0.1f;
							}
							else {
								return 0.0f;
							}

						}

					}

				}
				else {
					if (-0.242109984*x[0]-0.488027722*x[1]+0.364463538 <= 0) {
						if (x[0] <= 3.24) {
							return 0.0f;
						}
						else {
							if (x[0] <= 3.32) {
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
				if (x[1] <= -0.45) {
					if (x[0] <= 2.92) {
						if (x[0] <= 2.84) {
							return 2.7f;
						}
						else {
							if (x[1] <= -0.55) {
								return 2.5f;
							}
							else {
								return 0.4f;
							}

						}

					}
					else {
						if (x[0] <= 3.0) {
							if (x[1] <= -0.55) {
								return 0.3f;
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
					if (x[0] <= 2.68) {
						if (x[0] <= 2.52) {
							return 3.6f;
						}
						else {
							if (x[0] <= 2.6) {
								return 3.3f;
							}
							else {
								return 3.1f;
							}

						}

					}
					else {
						if (x[0] <= 2.76) {
							if (x[1] <= -0.35) {
								return 2.9f;
							}
							else {
								return 0.6f;
							}

						}
						else {
							return 0.5f;
						}

					}

				}

			}

		}

	}

}