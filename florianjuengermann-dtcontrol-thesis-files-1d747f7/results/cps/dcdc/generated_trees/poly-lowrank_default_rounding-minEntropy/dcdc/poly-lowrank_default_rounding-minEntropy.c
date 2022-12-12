#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.38f,5.4505f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 1.18675) {
		if (x[0] <= 1.18125) {
			if (x[0] <= 1.17875) {
				if (x[0] <= 1.17775) {
					if (x[0] <= 1.17725) {
						return 1.0f;
					}
					else {
						if (x[1] <= 5.51625) {
							if (x[1] <= 5.50875) {
								return 1.0f;
							}
							else {
								return 1.0f;
							}

						}
						else {
							return 1.0f;
						}

					}

				}
				else {
					if (x[1] <= 5.54625) {
						if (x[1] <= 5.50875) {
							return 1.0f;
						}
						else {
							if (x[1] <= 5.53125) {
								return 1.0f;
							}
							else {
								if (x[0] <= 1.17825) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}

						}

					}
					else {
						return 1.0f;
					}

				}

			}
			else {
				if (x[1] <= 5.62175) {
					if (x[1] <= 5.59125) {
						if (x[1] <= 5.50875) {
							return 1.0f;
						}
						else {
							if (x[1] <= 5.56125) {
								return 1.0f;
							}
							else {
								if (x[0] <= 1.17975) {
									if (x[0] <= 1.17925) {
										return 1.0f;
									}
									else {
										if (x[1] <= 5.57625) {
											return 1.0f;
										}
										else {
											return 1.0f;
										}

									}

								}
								else {
									return 1.0f;
								}

							}

						}

					}
					else {
						if (x[0] <= 1.18025) {
							return 1.0f;
						}
						else {
							if (x[0] <= 1.18075) {
								if (x[1] <= 5.60625) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}
							else {
								return 1.0f;
							}

						}

					}

				}
				else {
					return 1.0f;
				}

			}

		}
		else {
			if (x[1] <= 5.74175) {
				if (1.79e+05(+0.376*x[0]+0.0872*x[1]-0.923)^2-3.53e+04(+0.904*x[0]-0.256*x[1]+0.344)^2 <= 0) {
					return 1.0f;
				}
				else {
					if (x[1] <= 5.50875) {
						if (3.59e+04(-0.0177*x[0]-0.053*x[1]+0.998)^2-680(+0.819*x[0]+0.571*x[1]+0.0448)^2-341(+0.573*x[0]-0.819*x[1]-0.0333)^2 <= 0) {
							return 1.0f;
						}
						else {
							return 1.0f;
						}

					}
					else {
						if (x[1] <= 5.63675) {
							return 1.0f;
						}
						else {
							if (-9.31e+04(-0.235*x[0]+0.0137*x[1]+0.972)^2+3.53e+04(-0.972*x[0]+0.023*x[1]-0.235)^2+1.08(+0.0256*x[0]+1*x[1]+0)^2 <= 0) {
								return 1.0f;
							}
							else {
								return 1.0f;
							}

						}

					}

				}

			}
			else {
				if (x[0] <= 1.18575) {
					if (x[0] <= 1.18525) {
						return 1.0f;
					}
					else {
						if (x[1] <= 5.75725) {
							return 1.0f;
						}
						else {
							return 1.0f;
						}

					}

				}
				else {
					if (x[1] <= 5.78725) {
						if (x[1] <= 5.77225) {
							return 1.0f;
						}
						else {
							if (x[0] <= 1.18625) {
								return 1.0f;
							}
							else {
								return 1.0f;
							}

						}

					}
					else {
						return 1.0f;
					}

				}

			}

		}

	}
	else {
		if (x[1] <= 5.84275) {
			if (x[0] <= 1.23125) {
				if (x[1] <= 5.49925) {
					if (x[0] <= 1.22375) {
						if (x[0] <= 1.21725) {
							if (x[1] <= 5.49875) {
								return 1.0f;
							}
							else {
								if (x[0] <= 1.21225) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}

						}
						else {
							if (x[1] <= 5.49625) {
								if (1.92e+04(-0.03*x[0]-0.0467*x[1]+0.998)^2-596(+0.914*x[0]+0.402*x[1]+0.0463)^2-134(+0.404*x[0]-0.914*x[1]-0.0306)^2 <= 0) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}
							else {
								if (-2.51e+04(-0.0743*x[0]-0.0292*x[1]+0.997)^2+1.88e+03(+0.968*x[0]+0.24*x[1]+0.0792)^2+59.7(+0.241*x[0]-0.97*x[1]-0.0104)^2 <= 0) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}

						}

					}
					else {
						if (x[1] <= 5.49275) {
							if (2.23e+04(+0.0557*x[0]+0.0371*x[1]-0.998)^2-1.24e+03(-0.962*x[0]-0.267*x[1]-0.0636)^2-105(+0.269*x[0]-0.963*x[1]-0.0208)^2 <= 0) {
								return 1.0f;
							}
							else {
								return 1.0f;
							}

						}
						else {
							if (x[0] <= 1.22425) {
								if (x[1] <= 5.49475) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}
							else {
								if (-3.57e+04(+0.0154*x[0]+0.0527*x[1]-0.998)^2+642(-0.717*x[0]-0.695*x[1]-0.0477)^2+261(+0.696*x[0]-0.717*x[1]-0.0271)^2 <= 0) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}

						}

					}

				}
				else {
					if (x[1] <= 5.50625) {
						if (x[0] <= 1.19675) {
							if (1.92e+04(-0.0308*x[0]-0.0469*x[1]+0.998)^2-618(+0.927*x[0]+0.372*x[1]+0.0461)^2-144(+0.374*x[0]-0.927*x[1]-0.032)^2 <= 0) {
								return 1.0f;
							}
							else {
								return 1.0f;
							}

						}
						else {
							if (x[0] <= 1.20375) {
								if (x[1] <= 5.50225) {
									if (1.94e+04(+0.0324*x[0]+0.0471*x[1]-0.998)^2-630(-0.937*x[0]-0.346*x[1]-0.0468)^2-155(+0.348*x[0]-0.937*x[1]-0.0329)^2 <= 0) {
										return 1.0f;
									}
									else {
										return 1.0f;
									}

								}
								else {
									if (x[0] <= 1.19725) {
										if (x[1] <= 5.50425) {
											return 1.0f;
										}
										else {
											return 1.0f;
										}

									}
									else {
										if (-5.23e+04(+0.0111*x[0]+0.055*x[1]-0.998)^2+798(-0.516*x[0]-0.855*x[1]-0.0528)^2+390(-0.856*x[0]+0.516*x[1]+0.0189)^2 <= 0) {
											return 1.0f;
										}
										else {
											return 1.0f;
										}

									}

								}

							}
							else {
								return 1.0f;
							}

						}

					}
					else {
						if (x[0] <= 1.18775) {
							if (x[1] <= 5.81725) {
								if (x[1] <= 5.80225) {
									if (x[1] <= 5.50825) {
										return 1.0f;
									}
									else {
										return 1.0f;
									}

								}
								else {
									if (x[0] <= 1.18725) {
										return 1.0f;
									}
									else {
										return 1.0f;
									}

								}

							}
							else {
								return 1.0f;
							}

						}
						else {
							if (x[1] <= 5.50825) {
								if (x[0] <= 1.19075) {
									if (1.93e+04(-0.0319*x[0]-0.0471*x[1]+0.998)^2-624(+0.932*x[0]+0.359*x[1]+0.0468)^2-150(+0.361*x[0]-0.932*x[1]-0.0324)^2 <= 0) {
										return 1.0f;
									}
									else {
										return 1.0f;
									}

								}
								else {
									return 1.0f;
								}

							}
							else {
								if (x[0] <= 1.18825) {
									if (x[1] <= 5.83225) {
										return 1.0f;
									}
									else {
										return 1.0f;
									}

								}
								else {
									return 1.0f;
								}

							}

						}

					}

				}

			}
			else {
				if (-4.08e+04(-0.0178*x[0]-0.0476*x[1]+0.999)^2-1.49e+03(+0.99*x[0]-0.141*x[1]+0.0109)^2+558(-0.141*x[0]-0.989*x[1]-0.0497)^2 <= 0) {
					if (x[0] <= 1.39525) {
						if (x[1] <= 5.48925) {
							return 2.0f;
						}
						else {
							if (x[1] <= 5.83975) {
								if (x[0] <= 1.39475) {
									return 1.0f;
								}
								else {
									if (x[1] <= 5.83825) {
										return 1.0f;
									}
									else {
										return 2.0f;
									}

								}

							}
							else {
								if (1.36e+04(+0.039*x[0]+0.0382*x[1]-0.999)^2-668(-0.978*x[0]-0.204*x[1]-0.0459)^2-86.2(+0.205*x[0]-0.978*x[1]-0.0294)^2 <= 0) {
									return 2.0f;
								}
								else {
									return 1.0f;
								}

							}

						}

					}
					else {
						return 2.0f;
					}

				}
				else {
					return 1.0f;
				}

			}

		}
		else {
			if (x[0] <= 1.27325) {
				if (x[1] <= 5.84825) {
					if (x[0] <= 1.18825) {
						return 1.0f;
					}
					else {
						if (x[1] <= 5.84725) {
							if (x[1] <= 5.84675) {
								return 1.0f;
							}
							else {
								if (x[0] <= 1.25925) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}

						}
						else {
							if (x[0] <= 1.24525) {
								if (x[0] <= 1.23125) {
									if (x[0] <= 1.18875) {
										return 1.0f;
									}
									else {
										return 1.0f;
									}

								}
								else {
									if (x[1] <= 5.84775) {
										return 1.0f;
									}
									else {
										return 1.0f;
									}

								}

							}
							else {
								return 1.0f;
							}

						}

					}

				}
				else {
					if (x[0] <= 1.21675) {
						if (x[1] <= 5.84925) {
							if (x[0] <= 1.18875) {
								return 1.0f;
							}
							else {
								if (x[0] <= 1.20275) {
									return 1.0f;
								}
								else {
									if (x[1] <= 5.84875) {
										return 1.0f;
									}
									else {
										return 1.0f;
									}

								}

							}

						}
						else {
							return 1.0f;
						}

					}
					else {
						return 1.0f;
					}

				}

			}
			else {
				if (x[1] <= 5.84475) {
					if (x[0] <= 1.32975) {
						return 1.0f;
					}
					else {
						if (x[0] <= 1.35775) {
							if (x[1] <= 5.84375) {
								return 1.0f;
							}
							else {
								if (x[0] <= 1.34375) {
									if (x[1] <= 5.84425) {
										return 1.0f;
									}
									else {
										return 1.0f;
									}

								}
								else {
									return 1.0f;
								}

							}

						}
						else {
							if (x[1] <= 5.84325) {
								if (x[0] <= 1.37175) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}
							else {
								return 1.0f;
							}

						}

					}

				}
				else {
					if (x[1] <= 5.84575) {
						if (x[0] <= 1.31525) {
							if (x[0] <= 1.30125) {
								return 1.0f;
							}
							else {
								if (x[1] <= 5.84525) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}

						}
						else {
							return 1.0f;
						}

					}
					else {
						if (x[1] <= 5.84625) {
							if (x[0] <= 1.28725) {
								return 1.0f;
							}
							else {
								return 1.0f;
							}

						}
						else {
							return 1.0f;
						}

					}

				}

			}

		}

	}

}