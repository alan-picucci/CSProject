#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.38f,5.4505f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 1.18675) {
		if (-0.520530283*x[0]+0.0114469416*x[1]+0.550222993 <= 0) {
			if (0.781162977*x[0]-0.0484081507*x[1]-0.648412228 <= 0) {
				if (3.97458148*x[0]-0.706982374*x[1]-0.624514461 <= 0) {
					return 1.0f;
				}
				else {
					if (1.0*x[0]-4.34203612e-05*x[1]-1.18525004 <= 0) {
						if (1.0*x[0]-4.36516129e-05*x[1]-1.18425 <= 0) {
							return 1.0f;
						}
						else {
							if (x[1] <= 5.74175) {
								return 1.0f;
							}
							else {
								return 1.0f;
							}

						}

					}
					else {
						if (1.61318135*x[0]-0.16640231*x[1]-0.952704489 <= 0) {
							if (x[0] <= 1.18625) {
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
				if (0.00021072122*x[0]+1.0*x[1]-5.50874996 <= 0) {
					return 1.0f;
				}
				else {
					if (-2.21087909*x[0]+0.354529828*x[1]+0.622282386 <= 0) {
						return 1.0f;
					}
					else {
						if (1.00076222*x[0]-0.000151423155*x[1]-1.18304133 <= 0) {
							if (-1.15242147*x[0]+0.0722433552*x[1]+0.953355014 <= 0) {
								if (1.00042272*x[0]-4.4230881e-05*x[1]-1.18175006 <= 0) {
									if (0.925813079*x[0]-0.0490370207*x[1]-0.817712843 <= 0) {
										return 1.0f;
									}
									else {
										if (x[0] <= 1.18075) {
											return 1.0f;
										}
										else {
											return 1.0f;
										}

									}

								}
								else {
									if (0.501160264*x[0]-0.0497684665*x[1]-0.311080933 <= 0) {
										if (x[0] <= 1.18225) {
											return 1.0f;
										}
										else {
											return 1.0f;
										}

									}
									else {
										if (1.31065118*x[0]-0.106930025*x[1]-0.945776641 <= 0) {
											if (x[0] <= 1.18175) {
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
						else {
							if (x[0] <= 1.18375) {
								if (x[1] <= 5.69675) {
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
			if (-1.97091866*x[0]+0.242561519*x[1]+0.9721753 <= 0) {
				if (1.0*x[0]-4.53173598e-05*x[1]-1.17725003 <= 0) {
					return 1.0f;
				}
				else {
					if (-4.24001026*x[0]+0.847169518*x[1]+0.298027515 <= 0) {
						if (x[1] <= 5.50875) {
							return 1.0f;
						}
						else {
							if (-1.88071477*x[0]+0.235857159*x[1]+0.910895526 <= 0) {
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
						if (1.0*x[0]-4.49506624e-05*x[1]-1.17875004 <= 0) {
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
							if (0.000204651151*x[0]+1.0*x[1]-5.49625015 <= 0) {
								return 1.0f;
							}
							else {
								if (1.0*x[0]+4.54915353e-05*x[1]-1.21775007 <= 0) {
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
							if (x[0] <= 1.23075) {
								if (x[0] <= 1.23025) {
									return 1.0f;
								}
								else {
									if (x[1] <= 5.49225) {
										return 1.0f;
									}
									else {
										return 1.0f;
									}

								}

							}
							else {
								if (x[1] <= 5.49125) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}

						}
						else {
							if (1.0*x[0]+0.000227495082*x[1]-1.22525001 <= 0) {
								return 1.0f;
							}
							else {
								if (0.000203927921*x[0]+1.0*x[1]-5.49324989 <= 0) {
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
						if (1.0*x[0]+4.54409237e-05*x[1]-1.20375001 <= 0) {
							if (-0.177296162*x[0]-0.125381604*x[1]+0.902344406 <= 0) {
								if (0.000207742822*x[0]+1.0*x[1]-5.50224972 <= 0) {
									return 1.0f;
								}
								else {
									if (1.0*x[0]+4.54037836e-05*x[1]-1.19674993 <= 0) {
										return 1.0f;
									}
									else {
										if (0.000208436017*x[0]+1.0*x[1]-5.50274992 <= 0) {
											if (x[0] <= 1.20075) {
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
								if (x[0] <= 1.19725) {
									return 1.0f;
								}
								else {
									if (x[1] <= 5.50275) {
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
						if (1.17995715*x[0]-0.0834642872*x[1]-0.916310489 <= 0) {
							if (1.0*x[0]-4.28619969e-05*x[1]-1.18774998 <= 0) {
								if (1.54701018*x[0]-0.292258263*x[1]-0.136986971 <= 0) {
									return 1.0f;
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
							if (0.0432029665*x[0]+0.0216691066*x[1]-0.170775756 <= 0) {
								if (x[1] <= 5.50825) {
									if (x[0] <= 1.19075) {
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
								return 1.0f;
							}

						}

					}

				}

			}
			else {
				if (x[1] <= 5.84225) {
					if (1.0*x[0]+4.28179483e-05*x[1]-1.39524996 <= 0) {
						if (x[1] <= 5.48925) {
							return 2.0f;
						}
						else {
							if (x[1] <= 5.83975) {
								return 1.0f;
							}
							else {
								if (x[0] <= 1.39125) {
									return 1.0f;
								}
								else {
									if (0.450650305*x[0]+0.0413315557*x[1]-0.868712485 <= 0) {
										if (x[1] <= 5.84125) {
											return 1.0f;
										}
										else {
											return 2.0f;
										}

									}
									else {
										return 2.0f;
									}

								}

							}

						}

					}
					else {
						return 2.0f;
					}

				}
				else {
					if (x[0] <= 1.38575) {
						return 1.0f;
					}
					else {
						return 1.0f;
					}

				}

			}

		}
		else {
			if (x[0] <= 1.27325) {
				if (0.000198421825*x[0]+0.999915004*x[1]-5.84724998 <= 0) {
					if (1.0*x[0]-4.27520426e-05*x[1]-1.18825006 <= 0) {
						return 1.0f;
					}
					else {
						if (x[0] <= 1.25925) {
							if (3.16996848e-05*x[0]+0.999958396*x[1]-5.84729576 <= 0) {
								return 1.0f;
							}
							else {
								if (x[0] <= 1.24525) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}

						}
						else {
							if (x[1] <= 5.84675) {
								return 1.0f;
							}
							else {
								return 1.0f;
							}

						}

					}

				}
				else {
					if (x[0] <= 1.21675) {
						if (8.5781634e-05*x[0]+0.999944091*x[1]-5.84877586 <= 0) {
							if (x[0] <= 1.18875) {
								return 1.0f;
							}
							else {
								return 1.0f;
							}

						}
						else {
							if (0.000207742822*x[0]+1.0*x[1]-5.84924984 <= 0) {
								return 1.0f;
							}
							else {
								return 1.0f;
							}

						}

					}
					else {
						if (1.0*x[0]+4.27651175e-05*x[1]-1.23125005 <= 0) {
							if (x[1] <= 5.84825) {
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
				if (0.00019201744*x[0]+1.0*x[1]-5.84574986 <= 0) {
					if (x[0] <= 1.35775) {
						if (x[0] <= 1.32975) {
							if (x[0] <= 1.31525) {
								return 1.0f;
							}
							else {
								if (x[1] <= 5.84475) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}

						}
						else {
							if (x[1] <= 5.84375) {
								return 1.0f;
							}
							else {
								if (0.000185944315*x[0]+1.0*x[1]-5.84424973 <= 0) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}

						}

					}
					else {
						if (0.000182496471*x[0]+1.0*x[1]-5.84325027 <= 0) {
							return 1.0f;
						}
						else {
							return 1.0f;
						}

					}

				}
				else {
					if (1.0*x[0]+4.27797422e-05*x[1]-1.28725004 <= 0) {
						if (x[1] <= 5.84625) {
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