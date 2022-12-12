#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.38f,5.4505f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 1.39525) {
		if (x[0] <= 1.18425) {
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
				if (x[1] <= 5.66675) {
					if (x[0] <= 1.18075) {
						if (x[1] <= 5.59125) {
							if (x[0] <= 1.17925) {
								if (x[1] <= 5.56125) {
									if (1.68e+06(+0.434*x[0]+0.0702*x[1]-0.898)^2-2.26e+05(+0.877*x[0]-0.261*x[1]+0.404)^2 <= 0) {
										if (x[1] <= 5.5205) {
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
									else {
										if (x[0] <= 1.17825) {
											if (x[1] <= 5.53125) {
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
									return 1.0f;
								}

							}
							else {
								if (x[1] <= 5.50875) {
									return 1.0f;
								}
								else {
									if (x[1] <= 5.57625) {
										return 1.0f;
									}
									else {
										if (x[0] <= 1.17975) {
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
							if (x[0] <= 1.18025) {
								return 1.0f;
							}
							else {
								if (x[1] <= 5.60625) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}

						}

					}
					else {
						if (x[1] <= 5.50875) {
							return 1.0f;
						}
						else {
							if (x[1] <= 5.62175) {
								return 1.0f;
							}
							else {
								if (x[0] <= 1.18225) {
									if (x[0] <= 1.18125) {
										return 1.0f;
									}
									else {
										if (x[1] <= 5.63675) {
											return 1.0f;
										}
										else {
											if (x[0] <= 1.18175) {
												return 1.0f;
											}
											else {
												if (x[1] <= 5.65175) {
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
									return 1.0f;
								}

							}

						}

					}

				}
				else {
					if (x[0] <= 1.18275) {
						return 1.0f;
					}
					else {
						if (x[1] <= 5.71175) {
							if (x[0] <= 1.18375) {
								if (x[1] <= 5.68175) {
									return 1.0f;
								}
								else {
									if (x[0] <= 1.18325) {
										return 1.0f;
									}
									else {
										if (x[1] <= 5.69675) {
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

			}

		}
		else {
			if (x[1] <= 5.48925) {
				return 2.0f;
			}
			else {
				if (x[1] <= 5.84325) {
					if (x[0] <= 1.18775) {
						if (x[1] <= 5.75725) {
							if (x[1] <= 5.50825) {
								return 1.0f;
							}
							else {
								if (x[1] <= 5.72675) {
									if (x[1] <= 5.50875) {
										if (x[0] <= 1.18575) {
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
									if (x[0] <= 1.18525) {
										if (x[1] <= 5.74175) {
											if (x[0] <= 1.18475) {
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
						else {
							if (x[0] <= 1.18575) {
								return 1.0f;
							}
							else {
								if (x[1] <= 5.80225) {
									if (x[0] <= 1.18675) {
										if (x[1] <= 5.77225) {
											return 1.0f;
										}
										else {
											if (x[0] <= 1.18625) {
												return 1.0f;
											}
											else {
												if (x[1] <= 5.78725) {
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
									if (x[0] <= 1.18725) {
										return 1.0f;
									}
									else {
										if (x[1] <= 5.81725) {
											return 1.0f;
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
						if (x[1] <= 5.50825) {
							if (x[0] <= 1.23125) {
								if (x[1] <= 5.49875) {
									if (x[0] <= 1.21725) {
										return 1.0f;
									}
									else {
										if (x[1] <= 5.49275) {
											if (2.23e+04(+0.0553*x[0]+0.0371*x[1]-0.998)^2-1.25e+03(-0.962*x[0]-0.265*x[1]-0.0632)^2-105(+0.267*x[0]-0.963*x[1]-0.021)^2 <= 0) {
												return 1.0f;
											}
											else {
												return 1.0f;
											}

										}
										else {
											if (x[0] <= 1.22425) {
												if (x[1] <= 5.49625) {
													if (2.23e+04(+0.0558*x[0]+0.0372*x[1]-0.998)^2-1.25e+03(-0.962*x[0]-0.265*x[1]-0.0637)^2-105(+0.267*x[0]-0.963*x[1]-0.021)^2 <= 0) {
														return 1.0f;
													}
													else {
														return 1.0f;
													}

												}
												else {
													if (-2.51e+04(-0.0745*x[0]-0.029*x[1]+0.997)^2+1.88e+03(+0.968*x[0]+0.239*x[1]+0.0793)^2+60.8(+0.241*x[0]-0.97*x[1]-0.0102)^2 <= 0) {
														return 1.0f;
													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												if (-3.57e+04(+0.0158*x[0]+0.0527*x[1]-0.998)^2+645(-0.729*x[0]-0.683*x[1]-0.0476)^2+272(+0.684*x[0]-0.729*x[1]-0.0277)^2 <= 0) {
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
									if (x[0] <= 1.20375) {
										if (x[1] <= 5.50225) {
											if (1.94e+04(-0.0323*x[0]-0.0471*x[1]+0.998)^2-635(+0.939*x[0]+0.341*x[1]+0.0465)^2-156(+0.343*x[0]-0.939*x[1]-0.0332)^2 <= 0) {
												return 1.0f;
											}
											else {
												return 1.0f;
											}

										}
										else {
											if (x[0] <= 1.19725) {
												if (x[1] <= 5.50625) {
													if (2.5e+04(+0.0733*x[0]+0.0299*x[1]-0.997)^2-1.94e+03(-0.97*x[0]-0.23*x[1]-0.0783)^2-66.2(+0.231*x[0]-0.973*x[1]-0.0122)^2 <= 0) {
														return 1.0f;
													}
													else {
														return 1.0f;
													}

												}
												else {
													if (-2.5e+04(-0.0746*x[0]-0.0296*x[1]+0.997)^2+1.92e+03(+0.969*x[0]+0.233*x[1]+0.0794)^2+65.4(+0.234*x[0]-0.972*x[1]-0.0113)^2 <= 0) {
														return 1.0f;
													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												if (x[1] <= 5.50275) {
													if (x[0] <= 1.19875) {
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
										if (x[1] <= 5.49925) {
											if (x[0] <= 1.21225) {
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
							if (x[1] <= 5.83825) {
								if (-5.54e+03(-0.329*x[0]+0.0837*x[1]+0.941)^2+1.61e+03(+0.936*x[0]+0.159*x[1]+0.313)^2-98.3(+0.124*x[0]-0.984*x[1]+0.131)^2 <= 0) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}
							else {
								if (x[0] <= 1.37175) {
									if (x[0] <= 1.18825) {
										return 1.0f;
									}
									else {
										return 1.0f;
									}

								}
								else {
									if (x[1] <= 5.84225) {
										if (x[0] <= 1.39125) {
											return 1.0f;
										}
										else {
											if (x[1] <= 5.83975) {
												if (x[0] <= 1.39475) {
													return 1.0f;
												}
												else {
													return 2.0f;
												}

											}
											else {
												if (-4.48e+04(-0.0421*x[0]-0.0384*x[1]+0.998)^2+1.63e+03(+0.946*x[0]+0.32*x[1]+0.0522)^2+222(+0.321*x[0]-0.947*x[1]-0.0228)^2 <= 0) {
													return 1.0f;
												}
												else {
													return 2.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 5.84275) {
											if (x[0] <= 1.38575) {
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
				else {
					if (x[0] <= 1.30125) {
						if (x[1] <= 5.84675) {
							if (x[0] <= 1.18825) {
								return 1.0f;
							}
							else {
								if (x[0] <= 1.27325) {
									return 1.0f;
								}
								else {
									if (x[1] <= 5.84575) {
										return 1.0f;
									}
									else {
										if (x[0] <= 1.28725) {
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
						else {
							if (x[0] <= 1.24525) {
								if (x[1] <= 5.84825) {
									if (x[0] <= 1.18875) {
										if (-1.49e+04(-0.0463*x[0]+0.0703*x[1]-0.996)^2-571(-0.981*x[0]-0.19*x[1]+0.0322)^2+288(+0.187*x[0]-0.979*x[1]-0.0778)^2 <= 0) {
											return 1.0f;
										}
										else {
											return 1.0f;
										}

									}
									else {
										if (x[0] <= 1.23125) {
											return 1.0f;
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
								if (x[1] <= 5.84725) {
									if (x[0] <= 1.25925) {
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
						if (x[1] <= 5.84525) {
							if (x[0] <= 1.34375) {
								if (x[1] <= 5.84425) {
									return 1.0f;
								}
								else {
									if (x[0] <= 1.31525) {
										return 1.0f;
									}
									else {
										if (x[1] <= 5.84475) {
											if (x[0] <= 1.32975) {
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
								if (x[1] <= 5.84375) {
									if (x[0] <= 1.35775) {
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
							return 1.0f;
						}

					}

				}

			}

		}

	}
	else {
		return 2.0f;
	}

}