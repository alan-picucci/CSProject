#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,10.f,-10.f,-2.f,-10.f,-2.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[3] <= -9.0) {
		if (x[2] <= 7.5) {
			if (x[5] <= -9.0) {
				return 0.0f;
			}
			else {
				if (x[2] <= 6.5) {
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
		if (x[3] <= 11.0) {
			if (x[2] <= 124.5) {
				if (x[5] <= 9.0) {
					if (x[3] <= 3.0) {
						if (x[2] <= 52.5) {
							if (x[5] <= 3.0) {
								if (x[3] <= -1.0) {
									if (x[2] <= 28.5) {
										if (x[5] <= -1.0) {
											if (x[3] <= -5.0) {
												if (x[2] <= 13.5) {
													if (x[5] <= -5.0) {
														if (x[3] <= -7.0) {
															if (x[2] <= 8.5) {
																if (x[5] <= -7.0) {
																	if (5.77(+0.0542*x[2]+0*x[3]+0.0287*x[5]-0.998)^2-0.0879(+0.882*x[2]-0.436*x[3]+0.17*x[5]+0.0526)^2+0.0321(+0.215*x[2]+0.703*x[3]+0.678*x[5]+0.0315)^2 <= 0) {
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
																if (39.1(-0.0201*x[2]+0*x[3]+0.0412*x[5]+0.999)^2+0.317(-0.553*x[2]-0.56*x[3]+0.617*x[5]-0.0367)^2-0.174(-0.0773*x[2]+0.772*x[3]+0.63*x[5]-0.0273)^2+0.0453(+0.83*x[2]-0.301*x[3]+0.47*x[5]+0)^2 <= 0) {
																	return 0.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (1.15(-0.252*x[2]-0.0456*x[3]-0.426*x[5]+0.868)^2-0.367(-0.548*x[2]+0.244*x[3]-0.651*x[5]-0.466)^2+0.0246(-0.183*x[2]+0.896*x[3]+0.366*x[5]+0.174)^2 <= 0) {
																return 0.0f;
															}
															else {
																return -2.0f;
															}

														}

													}
													else {
														if (-17.1(-0.0204*x[2]+0.038*x[3]-0.045*x[5]+0.998)^2-0.227(-0.0558*x[2]-0.15*x[3]-0.986*x[5]-0.0399)^2+0.141(-0.368*x[2]+0.921*x[3]-0.117*x[5]-0.0479)^2+0.0299(+0.928*x[2]+0.357*x[3]-0.107*x[5]+0)^2 <= 0) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (-29.5(-0.0137*x[2]+0.0965*x[3]-0.127*x[5]+0.987)^2+1.38(+0.0131*x[2]-0.651*x[3]+0.742*x[5]+0.159)^2+0.202(+0.146*x[2]-0.744*x[3]-0.652*x[5]+0)^2+0.0212(+0.989*x[2]+0.12*x[3]+0.085*x[5]+0.0129)^2 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[5] <= -5.0) {
													if (x[3] <= -3.0) {
														if (x[2] <= 20.5) {
															if (11.9(-0.0264*x[2]+0*x[3]-0.0436*x[5]+0.999)^2-0.161(-0.511*x[2]+0.678*x[3]-0.528*x[5]-0.0361)^2+0.152(+0.215*x[2]+0.697*x[3]+0.683*x[5]+0.036)^2 <= 0) {
																return 0.0f;
															}
															else {
																return -2.0f;
															}

														}
														else {
															if (27(+0.0126*x[2]+0*x[3]+0.0168*x[5]-1)^2-0.148(-0.531*x[2]+0.686*x[3]-0.497*x[5]-0.015)^2+0.142(-0.29*x[2]-0.698*x[3]-0.654*x[5]-0.0147)^2+0.0149(-0.796*x[2]-0.204*x[3]+0.57*x[5]+0)^2 <= 0) {
																return 0.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[2] <= 25.5) {
															return -2.0f;
														}
														else {
															if (x[5] <= -7.0) {
																return -2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (x[2] <= 20.5) {
														if (x[3] <= -3.0) {
															if (x[2] <= 11.5) {
																if (x[5] <= -3.0) {
																	return -2.0f;
																}
																else {
																	return 0.0f;
																}

															}
															else {
																if (11.8(+0.0327*x[2]+0*x[3]+0.0912*x[5]-0.995)^2+0.418(-0.011*x[2]+0.529*x[3]+0.845*x[5]+0.0783)^2-0.233(+0.509*x[2]-0.728*x[3]+0.457*x[5]+0.0569)^2+0.0343(+0.86*x[2]+0.437*x[3]-0.263*x[5]+0)^2 <= 0) {
																	return 0.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[2] <= 13.5) {
																return -2.0f;
															}
															else {
																if (x[5] <= -3.0) {
																	return -2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}

													}
													else {
														if (-39.4(-0.0148*x[2]+0.0255*x[3]-0.0208*x[5]+0.999)^2+0.446(-0.0512*x[2]+0.945*x[3]+0.321*x[5]-0.0182)^2-0.351(-0.199*x[2]-0.324*x[3]+0.924*x[5]+0.0245)^2+0.0428(+0.979*x[2]-0.0161*x[3]+0.205*x[5]+0.0192)^2 <= 0) {
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
											if (x[2] <= 14.5) {
												if (x[3] <= -3.0) {
													return 0.0f;
												}
												else {
													if (x[5] <= 1.0) {
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
										if (-22.1(-0.0195*x[2]+0.126*x[3]-0.236*x[5]+0.963)^2+1.89(+0.0704*x[2]-0.0423*x[3]+0.966*x[5]+0.244)^2-0.121(-0.0626*x[2]-0.99*x[3]-0.067*x[5]+0.112)^2+0.0225(+0.995*x[2]-0.0568*x[3]-0.0772*x[5]+0)^2 <= 0) {
											if (x[2] <= 29.5) {
												if (x[5] <= -9.0) {
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
											return 0.0f;
										}

									}

								}
								else {
									if (x[5] <= -1.0) {
										if (x[2] <= 36.5) {
											if (28.1(-0.0202*x[2]+0.0672*x[3]-0.0752*x[5]+0.995)^2+1.66(-0.0693*x[2]-0.993*x[3]+0.0662*x[5]+0.0706)^2-0.106(-0.741*x[2]+0*x[3]-0.668*x[5]-0.0657)^2+0.0421(-0.667*x[2]+0.0982*x[3]+0.738*x[5]+0.0356)^2 <= 0) {
												return 0.0f;
											}
											else {
												return -2.0f;
											}

										}
										else {
											if (x[3] <= 1.0) {
												if (x[5] <= -5.0) {
													if (x[2] <= 40.5) {
														if (42.7(-0.0121*x[2]+0*x[3]-0.0136*x[5]+1)^2+0.0575(-0.245*x[2]+0*x[3]+0.969*x[5]+0.0102)^2-0.0261(+0.969*x[2]+0*x[3]+0.245*x[5]+0.015)^2 <= 0) {
															return 0.0f;
														}
														else {
															return -2.0f;
														}

													}
													else {
														if (x[2] <= 48.5) {
															return 0.0f;
														}
														else {
															if (x[5] <= -7.0) {
																if (x[2] <= 51.5) {
																	return 0.0f;
																}
																else {
																	if (x[5] <= -9.0) {
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

												}
												else {
													if (-42.4(-0.0117*x[2]+0*x[3]-0.0421*x[5]+0.999)^2-0.514(-0.0322*x[2]+0*x[3]+0.999*x[5]+0.0418)^2+0.0176(+0.999*x[2]+0*x[3]+0.0317*x[5]+0.0131)^2 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[5] <= -5.0) {
													if (x[2] <= 49.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= -7.0) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[2] <= 44.5) {
														if (x[5] <= -3.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 37.5) {
																return -2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[2] <= 51.5) {
															return 0.0f;
														}
														else {
															if (x[5] <= -3.0) {
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
										if (x[2] <= 28.5) {
											if (x[3] <= 1.0) {
												if (x[2] <= 15.5) {
													if (x[5] <= 1.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (42(+0.0112*x[2]+0*x[3]+0.0415*x[5]-0.999)^2-1.9(+0.0585*x[2]+0*x[3]+0.997*x[5]+0.0421)^2-0.0197(-0.998*x[2]+0*x[3]+0.059*x[5]+0)^2 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[2] <= 17.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 1.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[3] <= 1.0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 42.5) {
													if (x[5] <= 1.0) {
														return 0.0f;
													}
													else {
														if (x[2] <= 31.5) {
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

									}

								}

							}
							else {
								if (x[2] <= 18.5) {
									if (-2.18(+0*x[2]-0.107*x[3]+0.123*x[5]-0.987)^2-0.141(-0.0627*x[2]-0.977*x[3]-0.184*x[5]+0.0832)^2+0.0806(-0.103*x[2]+0.177*x[3]-0.969*x[5]-0.139)^2 <= 0) {
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
							if (x[3] <= 1.0) {
								return 0.0f;
							}
							else {
								if (x[2] <= 67.5) {
									if (x[5] <= -3.0) {
										if (x[2] <= 58.5) {
											if (x[2] <= 53.5) {
												if (x[5] <= -9.0) {
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
											if (x[5] <= -5.0) {
												if (x[2] <= 63.5) {
													return 0.0f;
												}
												else {
													if (x[5] <= -7.0) {
														if (x[2] <= 66.5) {
															return 0.0f;
														}
														else {
															if (x[5] <= -9.0) {
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

					}
					else {
						if (x[2] <= 79.5) {
							if (x[5] <= 3.0) {
								if (x[3] <= 5.0) {
									if (x[2] <= 67.5) {
										if (x[5] <= -1.0) {
											if (x[2] <= 52.5) {
												return -2.0f;
											}
											else {
												if (x[5] <= -5.0) {
													if (x[2] <= 64.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= -7.0) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[2] <= 59.5) {
														if (x[5] <= -3.0) {
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
											if (x[2] <= 43.5) {
												if (x[2] <= 32.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 1.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[2] <= 59.5) {
													if (x[5] <= 1.0) {
														return 0.0f;
													}
													else {
														if (x[2] <= 48.5) {
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

									}
									else {
										if (x[5] <= -3.0) {
											if (x[5] <= -5.0) {
												if (x[2] <= 68.5) {
													if (x[5] <= -9.0) {
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
												if (x[2] <= 75.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[2] <= 68.5) {
												if (x[5] <= -1.0) {
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
									if (x[5] <= -3.0) {
										if (x[2] <= 76.5) {
											return -2.0f;
										}
										else {
											if (x[5] <= -5.0) {
												return -2.0f;
											}
											else {
												if (x[3] <= 7.0) {
													return 0.0f;
												}
												else {
													return -2.0f;
												}

											}

										}

									}
									else {
										if (x[3] <= 7.0) {
											if (x[2] <= 67.5) {
												if (x[2] <= 49.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 1.0) {
														if (x[2] <= 60.5) {
															return -2.0f;
														}
														else {
															if (x[5] <= -1.0) {
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
												if (x[5] <= 1.0) {
													if (x[2] <= 69.5) {
														if (x[5] <= -1.0) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[2] <= 78.5) {
															return 0.0f;
														}
														else {
															if (x[5] <= -1.0) {
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

										}
										else {
											if (x[5] <= 1.0) {
												return -2.0f;
											}
											else {
												if (x[2] <= 68.5) {
													return -2.0f;
												}
												else {
													if (x[3] <= 9.0) {
														return 0.0f;
													}
													else {
														return -2.0f;
													}

												}

											}

										}

									}

								}

							}
							else {
								if (x[3] <= 7.0) {
									if (x[2] <= 36.5) {
										if (x[5] <= 7.0) {
											if (x[3] <= 5.0) {
												if (x[2] <= 19.5) {
													if (x[5] <= 5.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[5] <= 5.0) {
														if (x[2] <= 35.5) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[2] <= 20.5) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[2] <= 21.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 5.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[2] <= 22.5) {
												if (x[3] <= 5.0) {
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
										if (x[2] <= 54.5) {
											if (-39.1(-0.0184*x[2]+0.114*x[3]-0.0296*x[5]+0.993)^2-0.418(-0.209*x[2]-0.932*x[3]+0.274*x[5]+0.111)^2+0.118(+0.657*x[2]+0.0761*x[3]+0.749*x[5]+0.0258)^2-0.0545(+0.724*x[2]-0.336*x[3]-0.602*x[5]+0.034)^2 <= 0) {
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
									if (x[2] <= 43.5) {
										if (x[3] <= 9.0) {
											if (x[2] <= 23.5) {
												return -2.0f;
											}
											else {
												if (x[5] <= 7.0) {
													if (x[2] <= 40.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= 5.0) {
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
										if (x[5] <= 7.0) {
											if (x[3] <= 9.0) {
												if (x[2] <= 60.5) {
													if (x[5] <= 5.0) {
														if (x[2] <= 55.5) {
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
													if (x[5] <= 5.0) {
														if (x[2] <= 75.5) {
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
												if (x[2] <= 61.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 5.0) {
														if (x[2] <= 76.5) {
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
											if (x[3] <= 9.0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 66.5) {
													if (x[2] <= 44.5) {
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

							}

						}
						else {
							if (x[3] <= 7.0) {
								if (x[5] <= -1.0) {
									if (x[2] <= 102.5) {
										if (x[3] <= 5.0) {
											if (x[2] <= 84.5) {
												if (x[5] <= -7.0) {
													if (x[2] <= 83.5) {
														return 0.0f;
													}
													else {
														if (x[5] <= -9.0) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[2] <= 80.5) {
														if (x[5] <= -5.0) {
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
											if (x[2] <= 87.5) {
												if (x[5] <= -5.0) {
													if (x[2] <= 84.5) {
														if (x[5] <= -7.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 81.5) {
																return -2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[5] <= -9.0) {
															if (x[2] <= 85.5) {
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
											else {
												if (x[5] <= -5.0) {
													if (x[2] <= 99.5) {
														return 0.0f;
													}
													else {
														if (x[5] <= -7.0) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[2] <= 94.5) {
														if (x[5] <= -3.0) {
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
										if (x[2] <= 103.5) {
											if (8.19(+0*x[2]+0.0105*x[3]+0*x[5]-1)^2-0.0582(+0*x[2]-0.512*x[3]+0.859*x[5]+0)^2 <= 0) {
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
								if (x[5] <= 1.0) {
									if (x[2] <= 99.5) {
										if (x[5] <= -5.0) {
											return -2.0f;
										}
										else {
											if (x[3] <= 9.0) {
												if (x[5] <= -1.0) {
													if (x[2] <= 88.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= -3.0) {
															if (x[2] <= 95.5) {
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
											else {
												return -2.0f;
											}

										}

									}
									else {
										if (x[3] <= 9.0) {
											if (x[5] <= -3.0) {
												if (x[2] <= 115.5) {
													if (x[2] <= 104.5) {
														if (x[5] <= -7.0) {
															if (x[2] <= 103.5) {
																return -2.0f;
															}
															else {
																if (x[5] <= -9.0) {
																	return -2.0f;
																}
																else {
																	return 0.0f;
																}

															}

														}
														else {
															if (x[2] <= 100.5) {
																if (x[5] <= -5.0) {
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
												else {
													if (x[5] <= -5.0) {
														if (x[2] <= 120.5) {
															return 0.0f;
														}
														else {
															if (x[5] <= -7.0) {
																if (x[2] <= 123.5) {
																	return 0.0f;
																}
																else {
																	if (x[5] <= -9.0) {
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
														return 0.0f;
													}

												}

											}
											else {
												if (x[2] <= 108.5) {
													if (x[5] <= -1.0) {
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
											if (x[5] <= -3.0) {
												if (x[2] <= 116.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= -5.0) {
														if (x[2] <= 121.5) {
															return -2.0f;
														}
														else {
															if (x[5] <= -7.0) {
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
												if (x[2] <= 109.5) {
													if (x[5] <= -1.0) {
														return -2.0f;
													}
													else {
														if (x[2] <= 100.5) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[2] <= 122.5) {
														return 0.0f;
													}
													else {
														if (x[5] <= -1.0) {
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
									if (x[5] <= 5.0) {
										if (x[2] <= 98.5) {
											if (x[3] <= 9.0) {
												if (x[2] <= 88.5) {
													if (x[5] <= 3.0) {
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
												if (x[5] <= 3.0) {
													if (x[2] <= 89.5) {
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
											if (x[2] <= 111.5) {
												if (x[3] <= 9.0) {
													return 0.0f;
												}
												else {
													if (x[5] <= 3.0) {
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
										if (x[2] <= 83.5) {
											if (x[3] <= 9.0) {
												return 0.0f;
											}
											else {
												if (x[5] <= 7.0) {
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

							}

						}

					}

				}
				else {
					if (x[2] <= 26.5) {
						if (x[3] <= 7.0) {
							return 0.0f;
						}
						else {
							if (x[5] <= 13.0) {
								if (x[3] <= 9.0) {
									if (x[5] <= 11.0) {
										if (x[2] <= 24.5) {
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
									if (127(+0*x[2]+0*x[3]-0.0163*x[5]+1)^2-0.347(+0*x[2]+0.514*x[3]+0.858*x[5]+0.014)^2+0.124(+0*x[2]-0.858*x[3]+0.513*x[5]+0)^2-0.0398(-1*x[2]+0*x[3]+0*x[5]+0)^2 <= 0) {
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

					}
					else {
						if (x[2] <= 47.5) {
							if (-1.98(+0*x[2]+0.0309*x[3]-0.124*x[5]+0.992)^2-0.0573(+0.0237*x[2]+0.997*x[3]-0.0581*x[5]-0.0385)^2+0.0358(-0.0377*x[2]-0.0615*x[3]-0.99*x[5]-0.122)^2 <= 0) {
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
				if (x[3] <= 9.0) {
					return 0.0f;
				}
				else {
					if (x[2] <= 147.5) {
						if (x[5] <= -1.0) {
							if (x[5] <= -5.0) {
								if (x[2] <= 143.5) {
									if (x[2] <= 125.5) {
										if (x[5] <= -9.0) {
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
									if (x[5] <= -7.0) {
										if (x[2] <= 146.5) {
											return 0.0f;
										}
										else {
											if (x[5] <= -9.0) {
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
								if (x[2] <= 138.5) {
									if (x[2] <= 131.5) {
										return 0.0f;
									}
									else {
										if (x[5] <= -3.0) {
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
			if (x[3] <= 19.0) {
				if (x[2] <= 224.5) {
					if (x[5] <= 9.0) {
						if (x[2] <= 164.5) {
							if (x[5] <= 1.0) {
								if (x[3] <= 13.0) {
									if (x[2] <= 147.5) {
										if (x[2] <= 123.5) {
											return -2.0f;
										}
										else {
											if (x[5] <= -3.0) {
												if (x[2] <= 139.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= -5.0) {
														if (x[2] <= 144.5) {
															return -2.0f;
														}
														else {
															if (x[5] <= -7.0) {
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
												if (x[2] <= 132.5) {
													if (x[5] <= -1.0) {
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
										if (x[5] <= -3.0) {
											if (x[2] <= 163.5) {
												if (x[2] <= 148.5) {
													if (x[5] <= -9.0) {
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
												if (x[5] <= -5.0) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[5] <= -1.0) {
												if (x[2] <= 156.5) {
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
									if (x[5] <= -3.0) {
										return -2.0f;
									}
									else {
										if (x[2] <= 148.5) {
											return -2.0f;
										}
										else {
											if (x[3] <= 15.0) {
												if (x[5] <= -1.0) {
													if (x[2] <= 157.5) {
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

									}

								}

							}
							else {
								if (x[3] <= 15.0) {
									if (x[2] <= 123.5) {
										if (x[2] <= 91.5) {
											if (x[3] <= 13.0) {
												if (x[2] <= 67.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 7.0) {
														if (x[2] <= 84.5) {
															return -2.0f;
														}
														else {
															if (x[5] <= 5.0) {
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
											if (x[5] <= 5.0) {
												if (x[3] <= 13.0) {
													if (x[2] <= 112.5) {
														if (x[5] <= 3.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 99.5) {
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
												else {
													return -2.0f;
												}

											}
											else {
												if (x[3] <= 13.0) {
													if (x[5] <= 7.0) {
														if (x[2] <= 108.5) {
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
													if (x[2] <= 109.5) {
														if (x[5] <= 7.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 92.5) {
																return -2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[2] <= 118.5) {
															return 0.0f;
														}
														else {
															if (x[5] <= 7.0) {
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
										if (x[5] <= 5.0) {
											if (x[3] <= 13.0) {
												if (x[2] <= 136.5) {
													if (x[5] <= 3.0) {
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
												if (x[2] <= 137.5) {
													if (x[5] <= 3.0) {
														return -2.0f;
													}
													else {
														if (x[2] <= 124.5) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[2] <= 150.5) {
														return 0.0f;
													}
													else {
														if (x[5] <= 3.0) {
															if (x[2] <= 163.5) {
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
											if (x[2] <= 135.5) {
												if (x[3] <= 13.0) {
													return 0.0f;
												}
												else {
													if (x[5] <= 7.0) {
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

								}
								else {
									if (x[2] <= 147.5) {
										if (x[3] <= 17.0) {
											if (x[2] <= 119.5) {
												return -2.0f;
											}
											else {
												if (x[5] <= 7.0) {
													if (x[5] <= 5.0) {
														return -2.0f;
													}
													else {
														if (x[2] <= 136.5) {
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
										if (x[5] <= 7.0) {
											if (x[3] <= 17.0) {
												if (x[5] <= 3.0) {
													return -2.0f;
												}
												else {
													if (x[2] <= 151.5) {
														if (x[5] <= 5.0) {
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
												return -2.0f;
											}

										}
										else {
											if (x[3] <= 17.0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 148.5) {
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
							if (x[3] <= 15.0) {
								if (x[2] <= 198.5) {
									if (x[5] <= 1.0) {
										if (x[3] <= 13.0) {
											if (x[2] <= 172.5) {
												if (x[5] <= -5.0) {
													if (x[2] <= 168.5) {
														return 0.0f;
													}
													else {
														if (x[5] <= -7.0) {
															if (x[2] <= 171.5) {
																return 0.0f;
															}
															else {
																if (x[5] <= -9.0) {
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
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[2] <= 174.5) {
												if (x[5] <= -5.0) {
													if (x[2] <= 169.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= -7.0) {
															if (x[2] <= 172.5) {
																return -2.0f;
															}
															else {
																if (x[5] <= -9.0) {
																	if (x[2] <= 173.5) {
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
													return 0.0f;
												}

											}
											else {
												if (x[5] <= -3.0) {
													if (x[2] <= 190.5) {
														return 0.0f;
													}
													else {
														if (x[5] <= -5.0) {
															if (x[2] <= 195.5) {
																return 0.0f;
															}
															else {
																if (x[5] <= -7.0) {
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
													if (x[2] <= 183.5) {
														if (x[5] <= -1.0) {
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
										return 0.0f;
									}

								}
								else {
									if (x[2] <= 199.5) {
										if (x[5] <= -9.0) {
											if (x[3] <= 13.0) {
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
								if (x[5] <= 3.0) {
									if (x[2] <= 192.5) {
										if (x[5] <= -3.0) {
											if (x[2] <= 191.5) {
												return -2.0f;
											}
											else {
												if (x[5] <= -5.0) {
													return -2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[3] <= 17.0) {
												if (x[5] <= 1.0) {
													if (x[2] <= 175.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= -1.0) {
															if (x[2] <= 184.5) {
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
											else {
												return -2.0f;
											}

										}

									}
									else {
										if (x[3] <= 17.0) {
											if (x[5] <= -3.0) {
												if (x[2] <= 200.5) {
													if (x[5] <= -5.0) {
														if (x[2] <= 196.5) {
															return -2.0f;
														}
														else {
															if (x[5] <= -7.0) {
																if (x[2] <= 199.5) {
																	return -2.0f;
																}
																else {
																	if (x[5] <= -9.0) {
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
														return 0.0f;
													}

												}
												else {
													if (x[2] <= 219.5) {
														return 0.0f;
													}
													else {
														if (x[5] <= -5.0) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[2] <= 212.5) {
													if (x[5] <= 1.0) {
														if (x[2] <= 203.5) {
															return 0.0f;
														}
														else {
															if (x[5] <= -1.0) {
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
													return 0.0f;
												}

											}

										}
										else {
											if (x[5] <= -1.0) {
												if (x[2] <= 213.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= -3.0) {
														if (x[5] <= -5.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 220.5) {
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
												if (x[2] <= 204.5) {
													if (x[5] <= 1.0) {
														return -2.0f;
													}
													else {
														if (x[2] <= 193.5) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[2] <= 223.5) {
														return 0.0f;
													}
													else {
														if (x[5] <= 1.0) {
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
									if (x[2] <= 180.5) {
										if (x[3] <= 17.0) {
											if (x[5] <= 5.0) {
												if (x[2] <= 179.5) {
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
											if (x[5] <= 5.0) {
												return -2.0f;
											}
											else {
												if (x[2] <= 178.5) {
													if (x[2] <= 165.5) {
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
												else {
													if (x[5] <= 7.0) {
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
										if (x[3] <= 17.0) {
											return 0.0f;
										}
										else {
											if (x[5] <= 7.0) {
												if (x[2] <= 195.5) {
													return 0.0f;
												}
												else {
													if (x[5] <= 5.0) {
														if (x[2] <= 210.5) {
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

									}

								}

							}

						}

					}
					else {
						if (x[2] <= 129.5) {
							if (x[5] <= 15.0) {
								if (x[2] <= 78.5) {
									if (x[3] <= 13.0) {
										if (x[2] <= 48.5) {
											if (x[5] <= 13.0) {
												if (x[2] <= 27.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 11.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[2] <= 28.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[5] <= 11.0) {
												if (x[2] <= 72.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[2] <= 51.5) {
													if (x[5] <= 13.0) {
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
										if (x[3] <= 15.0) {
											if (x[2] <= 55.5) {
												if (x[2] <= 29.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 13.0) {
														if (x[2] <= 52.5) {
															return -2.0f;
														}
														else {
															if (x[5] <= 11.0) {
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
												if (x[5] <= 13.0) {
													if (x[5] <= 11.0) {
														if (x[2] <= 73.5) {
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
													return 0.0f;
												}

											}

										}
										else {
											if (x[2] <= 56.5) {
												return -2.0f;
											}
											else {
												if (-2.75(+0*x[2]-0.0848*x[3]+0.0673*x[5]+0.994)^2+0.0412(+0.0385*x[2]+0.922*x[3]-0.371*x[5]+0.104)^2-0.0103(-0.0971*x[2]-0.371*x[3]-0.923*x[5]+0.0309)^2 <= 0) {
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
									if (x[3] <= 15.0) {
										if (x[5] <= 11.0) {
											if (x[2] <= 99.5) {
												if (x[3] <= 13.0) {
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
										if (x[5] <= 13.0) {
											if (x[3] <= 17.0) {
												if (x[2] <= 100.5) {
													if (x[5] <= 11.0) {
														return -2.0f;
													}
													else {
														if (x[2] <= 79.5) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[5] <= 11.0) {
														if (x[2] <= 128.5) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[2] <= 107.5) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[2] <= 108.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 11.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[3] <= 17.0) {
												if (x[2] <= 84.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[2] <= 115.5) {
													if (x[2] <= 85.5) {
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

							}
							else {
								if (x[2] <= 60.5) {
									if (x[3] <= 15.0) {
										if (x[2] <= 30.5) {
											if (-1.26(+0*x[2]+0.223*x[3]-0.173*x[5]+0.959)^2+0.0964(-0.0146*x[2]+0.645*x[3]-0.711*x[5]-0.279)^2 <= 0) {
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
										if (x[5] <= 19.0) {
											if (x[3] <= 17.0) {
												if (x[2] <= 31.5) {
													if (x[5] <= 17.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[5] <= 17.0) {
														if (x[2] <= 59.5) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[2] <= 32.5) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[2] <= 33.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 17.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[2] <= 34.5) {
												if (x[3] <= 17.0) {
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
									if (x[3] <= 17.0) {
										return 0.0f;
									}
									else {
										if (x[2] <= 90.5) {
											if (x[5] <= 17.0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 63.5) {
													if (x[5] <= 19.0) {
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

								}

							}

						}
						else {
							if (x[3] <= 17.0) {
								return 0.0f;
							}
							else {
								if (x[2] <= 159.5) {
									if (x[5] <= 11.0) {
										return 0.0f;
									}
									else {
										if (x[5] <= 13.0) {
											if (x[2] <= 138.5) {
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

						}

					}

				}
				else {
					if (x[5] <= 1.0) {
						if (x[3] <= 17.0) {
							if (x[2] <= 228.5) {
								if (x[5] <= -7.0) {
									if (x[3] <= 15.0) {
										return 0.0f;
									}
									else {
										if (x[2] <= 227.5) {
											return 0.0f;
										}
										else {
											if (x[5] <= -9.0) {
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
						else {
							if (x[2] <= 234.5) {
								if (x[5] <= -7.0) {
									if (x[2] <= 228.5) {
										return -2.0f;
									}
									else {
										if (x[5] <= -9.0) {
											if (x[2] <= 229.5) {
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
									if (x[2] <= 225.5) {
										if (x[5] <= -5.0) {
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
								if (x[5] <= -1.0) {
									if (x[2] <= 254.5) {
										if (x[2] <= 243.5) {
											return 0.0f;
										}
										else {
											if (x[5] <= -5.0) {
												return 0.0f;
											}
											else {
												if (x[5] <= -3.0) {
													if (x[2] <= 250.5) {
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
										if (x[2] <= 256.5) {
											if (x[5] <= -5.0) {
												if (x[2] <= 255.5) {
													return 0.0f;
												}
												else {
													if (x[5] <= -7.0) {
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
			else {
				if (x[5] <= 3.0) {
					if (x[2] <= 235.5) {
						if (x[5] <= 1.0) {
							return -2.0f;
						}
						else {
							if (x[2] <= 224.5) {
								return -2.0f;
							}
							else {
								return 0.0f;
							}

						}

					}
					else {
						if (x[5] <= -1.0) {
							if (x[2] <= 253.5) {
								if (x[2] <= 244.5) {
									return -2.0f;
								}
								else {
									if (x[5] <= -3.0) {
										if (x[2] <= 251.5) {
											return -2.0f;
										}
										else {
											if (x[5] <= -5.0) {
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
								if (x[2] <= 256.5) {
									if (x[5] <= -5.0) {
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
					if (x[2] <= 211.5) {
						if (x[5] <= 9.0) {
							if (x[2] <= 179.5) {
								return -2.0f;
							}
							else {
								if (x[5] <= 7.0) {
									if (x[2] <= 196.5) {
										return -2.0f;
									}
									else {
										if (x[5] <= 5.0) {
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
							if (x[2] <= 160.5) {
								if (x[5] <= 11.0) {
									return -2.0f;
								}
								else {
									if (x[2] <= 139.5) {
										if (x[5] <= 13.0) {
											return -2.0f;
										}
										else {
											if (x[2] <= 116.5) {
												if (x[5] <= 15.0) {
													return -2.0f;
												}
												else {
													if (x[2] <= 91.5) {
														if (x[5] <= 17.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 64.5) {
																if (x[5] <= 19.0) {
																	return -2.0f;
																}
																else {
																	if (x[2] <= 35.5) {
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
						return 0.0f;
					}

				}

			}

		}

	}

}