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
		if (x[3] <= 19.0) {
			if (x[3] <= 11.0) {
				if (x[2] <= 66.5) {
					if (x[2] <= 15.5) {
						if (x[2] <= 8.5) {
							if (-6.45(-0.242*x[2]-0.0723*x[3]+0.172*x[5]+0.952)^2+0.619(+0.674*x[2]+0.379*x[3]-0.557*x[5]+0.301)^2-0.293(-0.678*x[2]+0.576*x[3]-0.454*x[5]-0.0468)^2 <= 0) {
								if (4.34(+0.0124*x[2]-0.0478*x[3]+0.0474*x[5]-0.998)^2-0.0883(+0.49*x[2]-0.61*x[3]+0.619*x[5]+0.0647)^2 <= 0) {
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
							if (x[3] <= -7.0) {
								if (x[2] <= 11.5) {
									if (x[5] <= -7.0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[5] <= -9.0) {
										if (x[2] <= 12.5) {
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
								if (-17.7(+0.0285*x[2]+0.0648*x[3]-0.101*x[5]+0.992)^2+0.518(+0.263*x[2]-0.718*x[3]+0.636*x[5]+0.104)^2+0.142(+0.655*x[2]-0.357*x[3]-0.663*x[5]-0.0627)^2 <= 0) {
									if (3.65(-0.234*x[2]-0.373*x[3]+0.491*x[5]-0.752)^2-3.63(-0.157*x[2]-0.403*x[3]+0.621*x[5]+0.654)^2-0.294(-0.919*x[2]+0.387*x[3]-0.0476*x[5]+0.0634)^2 <= 0) {
										if (1.53(+0*x[2]-0.0704*x[3]+0.0188*x[5]+0.997)^2-0.0579(-0.0725*x[2]-0.994*x[3]+0.0405*x[5]-0.0716)^2+0.0371(+0.148*x[2]+0.0305*x[3]+0.988*x[5]-0.0151)^2 <= 0) {
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
									if (x[2] <= 9.5) {
										if (x[3] <= 9.0) {
											return 0.0f;
										}
										else {
											if (x[5] <= 13.0) {
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
					else {
						if (x[3] <= -1.0) {
							if (x[2] <= 29.5) {
								if (-8.78(+0.0165*x[2]+0.252*x[3]-0.547*x[5]-0.798)^2+4.93(-0.0275*x[2]-0.436*x[3]+0.671*x[5]-0.599)^2-0.11(-0.682*x[2]+0.642*x[3]+0.346*x[5]-0.0487)^2 <= 0) {
									if (x[5] <= -3.0) {
										if (x[3] <= -5.0) {
											if (x[2] <= 18.5) {
												if (-3.21(+0*x[2]-0.108*x[3]+0.0593*x[5]-0.992)^2+0.0948(-0.189*x[2]+0.962*x[3]-0.159*x[5]-0.113)^2-0.0185(-0.445*x[2]+0.0657*x[3]+0.892*x[5]+0.048)^2 <= 0) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[2] <= 19.5) {
													if (-0.236(+0*x[2]-0.259*x[3]-0.312*x[5]-0.914)^2-0.0853(-0.0129*x[2]+0.401*x[3]-0.896*x[5]+0.192)^2+0.0533(-0.0866*x[2]+0.875*x[3]+0.316*x[5]-0.355)^2 <= 0) {
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
											if (x[3] <= -3.0) {
												if (x[2] <= 27.5) {
													if (x[5] <= -5.0) {
														if (x[2] <= 24.5) {
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
														if (x[2] <= 19.5) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[5] <= -9.0) {
														if (x[2] <= 28.5) {
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
									else {
										if (x[5] <= -1.0) {
											if (x[3] <= -3.0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 23.5) {
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
							else {
								if (x[2] <= 38.5) {
									if (x[3] <= -3.0) {
										return 0.0f;
									}
									else {
										if (x[5] <= -7.0) {
											return 0.0f;
										}
										else {
											if (x[5] <= -5.0) {
												if (x[2] <= 35.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[2] <= 30.5) {
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
									if (-50.6(-0.0132*x[2]+0.0142*x[3]-0.011*x[5]+1)^2-0.0596(-0.0609*x[2]+0.69*x[3]-0.721*x[5]-0.0185)^2+0.0113(+0.99*x[2]+0.131*x[3]+0.0412*x[5]+0.0117)^2 <= 0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[5] <= 3.0) {
								if (x[3] <= 3.0) {
									if (x[2] <= 52.5) {
										if (x[5] <= -1.0) {
											if (x[2] <= 36.5) {
												if (x[5] <= -5.0) {
													return -2.0f;
												}
												else {
													if (x[3] <= 1.0) {
														if (27.4(+0.0188*x[2]+0*x[3]+0.067*x[5]-0.998)^2+0.481(-0.0729*x[2]+0*x[3]+0.995*x[5]+0.0655)^2-0.0321(-0.997*x[2]+0*x[3]-0.0715*x[5]-0.0236)^2 <= 0) {
															return 0.0f;
														}
														else {
															return -2.0f;
														}

													}
													else {
														return -2.0f;
													}

												}

											}
											else {
												if (x[3] <= 1.0) {
													if (-6.46(-0.0327*x[2]+0*x[3]+0.514*x[5]-0.857)^2+2.91(-0.0388*x[2]+0*x[3]+0.856*x[5]+0.515)^2+0.032(-0.999*x[2]+0*x[3]-0.0501*x[5]+0)^2 <= 0) {
														if (-13.6(-0.0312*x[2]+0*x[3]-0.314*x[5]+0.949)^2+2.06(+0.0738*x[2]+0*x[3]+0.946*x[5]+0.315)^2+0.0179(+0.997*x[2]+0*x[3]-0.0798*x[5]+0)^2 <= 0) {
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
													if (x[2] <= 51.5) {
														if (x[5] <= -3.0) {
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
																	return -2.0f;
																}
																else {
																	return 0.0f;
																}

															}

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
														if (x[5] <= -7.0) {
															return -2.0f;
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
										else {
											if (x[2] <= 28.5) {
												if (x[3] <= 1.0) {
													if (42(+0.0112*x[2]+0*x[3]+0.0415*x[5]-0.999)^2-1.9(+0.0585*x[2]+0*x[3]+0.997*x[5]+0.0421)^2-0.0197(-0.998*x[2]+0*x[3]+0.059*x[5]+0)^2 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[5] <= 1.0) {
														return -2.0f;
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
									else {
										if (x[2] <= 53.5) {
											if (4.7(+0*x[2]-0.0288*x[3]+0.0177*x[5]+0.999)^2-0.252(-0.0125*x[2]-0.838*x[3]+0.545*x[5]-0.0338)^2+0.102(+0*x[2]+0.546*x[3]+0.838*x[5]+0)^2 <= 0) {
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
											if (x[3] <= 1.0) {
												return 0.0f;
											}
											else {
												if (x[5] <= -3.0) {
													if (x[5] <= -5.0) {
														if (x[2] <= 63.5) {
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
														if (x[2] <= 58.5) {
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
								else {
									if (x[5] <= -1.0) {
										if (x[5] <= -5.0) {
											if (x[2] <= 64.5) {
												return -2.0f;
											}
											else {
												if (x[5] <= -7.0) {
													return -2.0f;
												}
												else {
													if (x[3] <= 5.0) {
														return 0.0f;
													}
													else {
														return -2.0f;
													}

												}

											}

										}
										else {
											if (x[2] <= 52.5) {
												return -2.0f;
											}
											else {
												if (x[3] <= 5.0) {
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
												else {
													return -2.0f;
												}

											}

										}

									}
									else {
										if (x[3] <= 5.0) {
											if (-324(-0.01*x[2]+0*x[3]-0.0315*x[5]+0.999)^2+11.5(+0.0339*x[2]-0.221*x[3]-0.974*x[5]-0.0303)^2-1.3(+0.607*x[2]-0.77*x[3]+0.196*x[5]+0.0125)^2+0.592(-0.794*x[2]-0.598*x[3]+0.108*x[5]+0)^2 <= 0) {
												if (x[2] <= 46.0) {
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
											if (x[2] <= 49.5) {
												return -2.0f;
											}
											else {
												if (x[3] <= 7.0) {
													if (x[5] <= 1.0) {
														if (x[2] <= 60.5) {
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

							}
							else {
								if (x[5] <= 9.0) {
									if (x[3] <= 7.0) {
										if (x[2] <= 36.5) {
											if (x[3] <= 5.0) {
												if (x[2] <= 19.5) {
													if (0.481(+0.0326*x[2]+0.293*x[3]-0.354*x[5]+0.888)^2+0.146(+0*x[2]-0.955*x[3]-0.0605*x[5]+0.291)^2-0.0702(-0.0523*x[2]-0.0485*x[3]-0.933*x[5]-0.354)^2 <= 0) {
														if (x[3] <= 1.0) {
															return 0.0f;
														}
														else {
															if (x[5] <= 7.0) {
																if (x[3] <= 3.0) {
																	if (x[5] <= 5.0) {
																		if (x[2] <= 18.5) {
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
													else {
														return -2.0f;
													}

												}
												else {
													if (x[3] <= 3.0) {
														return 0.0f;
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
																if (x[5] <= 7.0) {
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
												if (x[5] <= 7.0) {
													if (x[5] <= 5.0) {
														return -2.0f;
													}
													else {
														if (x[2] <= 21.5) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[2] <= 22.5) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[3] <= 5.0) {
												return 0.0f;
											}
											else {
												if (x[5] <= 5.0) {
													if (x[2] <= 54.5) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[2] <= 39.5) {
														if (x[5] <= 7.0) {
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
										if (-19(-0.0246*x[2]+0.283*x[3]-0.0458*x[5]-0.958)^2+2.44(-0.0561*x[2]+0.948*x[3]-0.127*x[5]+0.288)^2-0.703(-0.0471*x[2]-0.137*x[3]-0.989*x[5]+0)^2 <= 0) {
											if (8.93(+0.0254*x[2]-0.579*x[3]+0.212*x[5]-0.787)^2-4.68(+0.0442*x[2]-0.696*x[3]+0.371*x[5]+0.613)^2-0.277(+0.097*x[2]+0.425*x[3]+0.897*x[5]-0.0676)^2 <= 0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 60.5) {
													return 0.0f;
												}
												else {
													if (-8.22(+0*x[2]+0.0463*x[3]-0.0244*x[5]-0.999)^2+0.0629(+0.0805*x[2]+0.982*x[3]-0.164*x[5]+0.0496)^2-0.0149(+0.151*x[2]+0.152*x[3]+0.977*x[5]-0.0169)^2 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[2] <= 55.5) {
												return -2.0f;
											}
											else {
												if (x[3] <= 9.0) {
													return 0.0f;
												}
												else {
													if (x[2] <= 61.5) {
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

										}

									}

								}
								else {
									if (x[2] <= 25.5) {
										if (-6.86(-0.216*x[2]+0.446*x[3]-0.152*x[5]+0.855)^2-2.22(+0.271*x[2]+0.502*x[3]-0.753*x[5]-0.328)^2+0.76(+0.65*x[2]-0.563*x[3]-0.316*x[5]+0.401)^2 <= 0) {
											if (0.254(-0.173*x[2]+0.228*x[3]-0.351*x[5]-0.892)^2-0.0748(-0.165*x[2]+0.69*x[3]-0.56*x[5]+0.429)^2-0.0165(+0.636*x[2]+0.609*x[3]+0.452*x[5]-0.146)^2+0.00432(+0.734*x[2]-0.319*x[3]-0.6*x[5]+0.0125)^2 <= 0) {
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
										if (x[3] <= 9.0) {
											return 0.0f;
										}
										else {
											if (x[5] <= 11.0) {
												if (x[2] <= 47.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[2] <= 26.5) {
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

								}

							}

						}

					}

				}
				else {
					if (x[2] <= 122.5) {
						if (x[3] <= 5.0) {
							if (x[2] <= 68.5) {
								if (x[5] <= -7.0) {
									if (x[3] <= 3.0) {
										if (x[3] <= 1.0) {
											return 0.0f;
										}
										else {
											if (x[5] <= -9.0) {
												if (x[2] <= 67.5) {
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
										if (x[2] <= 67.5) {
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

								}
								else {
									if (7.09(+0*x[2]+0.0345*x[3]-0.0235*x[5]-0.999)^2-0.267(+0.0137*x[2]+0.983*x[3]-0.178*x[5]+0.0381)^2+0.00544(+0.291*x[2]+0.167*x[3]+0.942*x[5]-0.0168)^2 <= 0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}

							}
							else {
								if (x[3] <= 3.0) {
									return 0.0f;
								}
								else {
									if (x[5] <= -3.0) {
										if (x[2] <= 84.5) {
											if (x[2] <= 80.5) {
												if (x[5] <= -5.0) {
													return 0.0f;
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
							if (x[5] <= 3.0) {
								if (x[3] <= 7.0) {
									if (x[2] <= 85.5) {
										if (x[5] <= -1.0) {
											if (x[5] <= -3.0) {
												if (x[2] <= 81.5) {
													if (x[5] <= -5.0) {
														return -2.0f;
													}
													else {
														if (x[2] <= 76.5) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[5] <= -7.0) {
														if (x[2] <= 84.5) {
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
												if (x[2] <= 69.5) {
													return -2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[5] <= 1.0) {
												if (x[2] <= 78.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[2] <= 67.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}

										}

									}
									else {
										if (x[2] <= 99.5) {
											if (x[5] <= -5.0) {
												return 0.0f;
											}
											else {
												if (x[5] <= -3.0) {
													if (x[2] <= 94.5) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[2] <= 87.5) {
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
											if (x[2] <= 102.5) {
												if (x[5] <= -7.0) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[2] <= 103.5) {
													if (x[5] <= -9.0) {
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
									if (x[5] <= -3.0) {
										if (x[2] <= 115.5) {
											if (x[2] <= 100.5) {
												if (x[2] <= 95.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= -5.0) {
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
											else {
												if (x[3] <= 9.0) {
													if (x[2] <= 103.5) {
														if (x[5] <= -7.0) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[2] <= 104.5) {
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

												}
												else {
													return -2.0f;
												}

											}

										}
										else {
											if (x[3] <= 9.0) {
												if (x[5] <= -5.0) {
													if (x[2] <= 120.5) {
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
													if (x[2] <= 116.5) {
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
										if (x[2] <= 88.5) {
											if (x[3] <= 9.0) {
												if (x[5] <= -1.0) {
													return -2.0f;
												}
												else {
													if (x[2] <= 79.5) {
														if (x[5] <= 1.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 68.5) {
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
											if (x[3] <= 9.0) {
												if (x[2] <= 99.5) {
													if (x[5] <= 1.0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[5] <= -1.0) {
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

											}
											else {
												if (x[2] <= 111.5) {
													if (x[5] <= 1.0) {
														if (x[2] <= 100.5) {
															return -2.0f;
														}
														else {
															if (x[5] <= -1.0) {
																if (x[2] <= 109.5) {
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
														if (x[2] <= 89.5) {
															return -2.0f;
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
									if (x[2] <= 76.5) {
										if (x[3] <= 9.0) {
											if (x[3] <= 7.0) {
												return 0.0f;
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
											return -2.0f;
										}

									}
									else {
										if (x[3] <= 9.0) {
											return 0.0f;
										}
										else {
											if (x[2] <= 98.5) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[5] <= 7.0) {
										if (x[2] <= 83.5) {
											if (x[3] <= 9.0) {
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

						}

					}
					else {
						if (x[2] <= 125.5) {
							if (x[3] <= 9.0) {
								if (x[5] <= -7.0) {
									if (x[3] <= 7.0) {
										return 0.0f;
									}
									else {
										if (x[2] <= 123.5) {
											return 0.0f;
										}
										else {
											if (x[5] <= -9.0) {
												if (x[2] <= 124.5) {
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
									return 0.0f;
								}

							}
							else {
								if (x[5] <= -1.0) {
									if (x[5] <= -7.0) {
										if (x[2] <= 124.5) {
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
								else {
									return 0.0f;
								}

							}

						}
						else {
							if (x[3] <= 9.0) {
								return 0.0f;
							}
							else {
								if (x[2] <= 143.5) {
									if (x[5] <= -1.0) {
										if (x[5] <= -3.0) {
											if (x[5] <= -5.0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 138.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[2] <= 131.5) {
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
									if (x[2] <= 146.5) {
										if (x[5] <= -7.0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[2] <= 147.5) {
											if (x[5] <= -9.0) {
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

				}

			}
			else {
				if (x[2] <= 195.5) {
					if (x[5] <= 7.0) {
						if (x[3] <= 15.0) {
							if (x[2] <= 172.5) {
								if (x[5] <= 1.0) {
									if (x[2] <= 147.5) {
										if (x[2] <= 132.5) {
											if (x[5] <= -1.0) {
												return -2.0f;
											}
											else {
												if (x[2] <= 123.5) {
													return -2.0f;
												}
												else {
													if (x[3] <= 13.0) {
														return 0.0f;
													}
													else {
														return -2.0f;
													}

												}

											}

										}
										else {
											if (x[3] <= 13.0) {
												if (x[5] <= -3.0) {
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
														if (x[2] <= 139.5) {
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

									}
									else {
										if (x[3] <= 13.0) {
											if (x[2] <= 148.5) {
												if (x[5] <= -9.0) {
													return -2.0f;
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
												if (x[5] <= -1.0) {
													if (x[5] <= -3.0) {
														if (x[2] <= 168.5) {
															if (x[2] <= 163.5) {
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
														if (x[2] <= 156.5) {
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
											if (x[5] <= -1.0) {
												if (x[5] <= -3.0) {
													if (x[2] <= 164.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= -5.0) {
															if (x[2] <= 169.5) {
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
													if (x[2] <= 157.5) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}

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
								else {
									if (x[2] <= 137.5) {
										if (x[2] <= 108.5) {
											if (x[3] <= 13.0) {
												if (x[2] <= 84.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 5.0) {
														if (x[2] <= 99.5) {
															return -2.0f;
														}
														else {
															if (x[5] <= 3.0) {
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
											if (x[3] <= 13.0) {
												if (x[2] <= 112.5) {
													if (x[5] <= 3.0) {
														return -2.0f;
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
													if (x[5] <= 5.0) {
														if (x[2] <= 123.5) {
															return 0.0f;
														}
														else {
															if (x[5] <= 3.0) {
																if (x[2] <= 136.5) {
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
											else {
												if (x[2] <= 135.5) {
													if (x[5] <= 5.0) {
														if (x[2] <= 124.5) {
															return -2.0f;
														}
														else {
															if (x[5] <= 3.0) {
																return -2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[2] <= 109.5) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[5] <= 3.0) {
														return -2.0f;
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

											}

										}

									}
									else {
										if (x[3] <= 13.0) {
											return 0.0f;
										}
										else {
											if (x[5] <= 5.0) {
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
											else {
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[2] <= 173.5) {
									if (x[5] <= -9.0) {
										if (x[3] <= 13.0) {
											return 0.0f;
										}
										else {
											return -2.0f;
										}

									}
									else {
										if (x[3] <= 13.0) {
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
								else {
									if (x[3] <= 13.0) {
										return 0.0f;
									}
									else {
										if (x[5] <= -1.0) {
											if (x[5] <= -3.0) {
												if (x[2] <= 190.5) {
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
											else {
												if (x[2] <= 183.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[2] <= 174.5) {
												if (x[5] <= 1.0) {
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
											if (x[2] <= 164.5) {
												return -2.0f;
											}
											else {
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

										}
										else {
											return -2.0f;
										}

									}

								}
								else {
									if (x[5] <= 1.0) {
										if (x[3] <= 17.0) {
											if (x[5] <= -5.0) {
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
										if (x[3] <= 17.0) {
											return 0.0f;
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

								}

							}
							else {
								if (x[2] <= 164.5) {
									if (x[3] <= 17.0) {
										if (x[2] <= 136.5) {
											return -2.0f;
										}
										else {
											if (x[5] <= 5.0) {
												if (x[2] <= 151.5) {
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
										if (x[2] <= 179.5) {
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
									else {
										if (x[2] <= 180.5) {
											if (x[5] <= 5.0) {
												return -2.0f;
											}
											else {
												if (x[2] <= 165.5) {
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

							}

						}

					}
					else {
						if (x[2] <= 90.5) {
							if (x[5] <= 15.0) {
								if (x[3] <= 15.0) {
									if (x[5] <= 11.0) {
										if (x[2] <= 72.5) {
											if (x[3] <= 13.0) {
												if (x[2] <= 48.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 9.0) {
														if (x[2] <= 67.5) {
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
											if (1.84(+0*x[2]+0.105*x[3]-0.103*x[5]-0.989)^2-0.0444(+0.0408*x[2]+0.91*x[3]-0.39*x[5]+0.137)^2+0.00984(-0.101*x[2]-0.394*x[3]-0.912*x[5]+0.0537)^2 <= 0) {
												if (x[3] <= 13.0) {
													return 0.0f;
												}
												else {
													if (x[5] <= 9.0) {
														return -2.0f;
													}
													else {
														if (x[2] <= 73.5) {
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

									}
									else {
										if (x[2] <= 52.5) {
											if (x[3] <= 13.0) {
												if (-645(+0.0115*x[2]+0*x[3]+0.0138*x[5]-1)^2+1.44(+0.399*x[2]-0.281*x[3]-0.873*x[5]+0)^2-1.24(+0.633*x[2]-0.605*x[3]+0.483*x[5]+0.014)^2+0.611(-0.664*x[2]-0.745*x[3]-0.0631*x[5]+0)^2 <= 0) {
													if (x[2] <= 28.0) {
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
												if (x[2] <= 29.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 13.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[3] <= 13.0) {
												return 0.0f;
											}
											else {
												if (x[5] <= 13.0) {
													if (x[2] <= 78.5) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[2] <= 55.5) {
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
								else {
									if (x[2] <= 84.5) {
										if (x[3] <= 17.0) {
											if (x[2] <= 56.5) {
												return -2.0f;
											}
											else {
												if (x[5] <= 13.0) {
													if (x[2] <= 79.5) {
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
											return -2.0f;
										}

									}
									else {
										if (x[5] <= 13.0) {
											if (x[3] <= 17.0) {
												if (x[5] <= 11.0) {
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
											if (x[3] <= 17.0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 85.5) {
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
								if (31.3(-0.0107*x[2]+0.156*x[3]-0.161*x[5]+0.974)^2-1.65(+0.0426*x[2]-0.474*x[3]+0.852*x[5]+0.217)^2+0.195(+0.017*x[2]-0.866*x[3]-0.496*x[5]+0.0567)^2 <= 0) {
									if (x[3] <= 17.0) {
										if (x[2] <= 30.5) {
											if (-2.22(+0*x[2]-0.113*x[3]+0.113*x[5]-0.987)^2+0.0618(+0.0301*x[2]-0.503*x[3]+0.85*x[5]+0.155)^2-0.00617(+0.121*x[2]+0.852*x[3]+0.508*x[5]-0.0395)^2 <= 0) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[3] <= 15.0) {
												return 0.0f;
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

										}

									}
									else {
										if (x[5] <= 17.0) {
											return 0.0f;
										}
										else {
											if (x[2] <= 63.5) {
												if (x[5] <= 19.0) {
													return 0.0f;
												}
												else {
													if (x[2] <= 34.5) {
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
									if (x[2] <= 60.5) {
										if (x[2] <= 31.5) {
											return -2.0f;
										}
										else {
											if (x[3] <= 17.0) {
												return 0.0f;
											}
											else {
												if (x[5] <= 17.0) {
													return -2.0f;
												}
												else {
													if (x[2] <= 33.5) {
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
										return 0.0f;
									}

								}

							}

						}
						else {
							if (34.3(-0.0287*x[2]+0.163*x[3]-0.125*x[5]+0.978)^2-0.55(-0.239*x[2]+0.241*x[3]-0.926*x[5]-0.166)^2+0.19(-0.513*x[2]-0.844*x[3]-0.107*x[5]+0.112)^2-0.0677(+0.824*x[2]-0.45*x[3]-0.34*x[5]+0.0557)^2 <= 0) {
								if (x[5] <= 13.0) {
									if (x[3] <= 15.0) {
										if (x[2] <= 118.5) {
											if (x[3] <= 13.0) {
												if (x[2] <= 91.5) {
													if (x[5] <= 9.0) {
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
												if (x[5] <= 9.0) {
													return 0.0f;
												}
												else {
													if (x[2] <= 99.5) {
														if (x[5] <= 11.0) {
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
											return 0.0f;
										}

									}
									else {
										if (x[2] <= 138.5) {
											if (x[3] <= 17.0) {
												if (x[5] <= 11.0) {
													if (x[2] <= 128.5) {
														return 0.0f;
													}
													else {
														if (x[5] <= 9.0) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

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
											else {
												return 0.0f;
											}

										}
										else {
											if (x[5] <= 9.0) {
												if (x[2] <= 178.5) {
													if (x[3] <= 17.0) {
														if (x[2] <= 147.5) {
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
												if (x[2] <= 159.5) {
													if (x[3] <= 17.0) {
														return 0.0f;
													}
													else {
														if (x[5] <= 11.0) {
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
								else {
									if (x[2] <= 115.5) {
										if (1.96(+0*x[2]-0.0837*x[3]+0.0903*x[5]+0.992)^2-0.047(-0.0308*x[2]-0.841*x[3]+0.527*x[5]-0.119)^2+0.00298(+0.0966*x[2]+0.529*x[3]+0.842*x[5]-0.0322)^2 <= 0) {
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
								return -2.0f;
							}

						}

					}

				}
				else {
					if (x[5] <= 1.0) {
						if (x[3] <= 17.0) {
							if (x[2] <= 200.5) {
								if (x[3] <= 15.0) {
									if (x[5] <= -7.0) {
										if (x[3] <= 13.0) {
											return 0.0f;
										}
										else {
											if (x[2] <= 198.5) {
												return 0.0f;
											}
											else {
												if (x[5] <= -9.0) {
													if (x[2] <= 199.5) {
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
										return 0.0f;
									}

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
										if (x[2] <= 196.5) {
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

							}
							else {
								if (x[3] <= 15.0) {
									return 0.0f;
								}
								else {
									if (x[2] <= 227.5) {
										if (x[5] <= -3.0) {
											if (x[2] <= 219.5) {
												return 0.0f;
											}
											else {
												if (x[5] <= -5.0) {
													if (x[2] <= 224.5) {
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
											if (x[2] <= 212.5) {
												if (x[5] <= -1.0) {
													return 0.0f;
												}
												else {
													if (x[2] <= 203.5) {
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
										if (x[2] <= 228.5) {
											if (x[5] <= -9.0) {
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
							if (x[2] <= 234.5) {
								if (x[2] <= 225.5) {
									if (x[5] <= -3.0) {
										if (x[2] <= 220.5) {
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
										if (x[2] <= 213.5) {
											if (x[2] <= 204.5) {
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
										return 0.0f;
									}

								}

							}
							else {
								if (x[5] <= -1.0) {
									if (x[2] <= 255.5) {
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
											if (x[5] <= -7.0) {
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
					else {
						if (x[5] <= 5.0) {
							if (x[3] <= 17.0) {
								return 0.0f;
							}
							else {
								if (x[2] <= 223.5) {
									if (x[2] <= 210.5) {
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
							return 0.0f;
						}

					}

				}

			}

		}
		else {
			if (x[5] <= 1.0) {
				if (x[2] <= 253.5) {
					if (x[2] <= 235.5) {
						return -2.0f;
					}
					else {
						if (x[5] <= -1.0) {
							if (x[2] <= 251.5) {
								if (x[5] <= -3.0) {
									return -2.0f;
								}
								else {
									if (x[2] <= 244.5) {
										return -2.0f;
									}
									else {
										return 0.0f;
									}

								}

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
				if (x[2] <= 211.5) {
					if (x[5] <= 5.0) {
						return -2.0f;
					}
					else {
						if (x[2] <= 35.5) {
							return -2.0f;
						}
						else {
							if (x[5] <= 11.0) {
								if (x[2] <= 160.5) {
									return -2.0f;
								}
								else {
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
								if (x[2] <= 116.5) {
									if (x[5] <= 15.0) {
										return -2.0f;
									}
									else {
										if (x[2] <= 91.5) {
											if (x[5] <= 19.0) {
												if (x[2] <= 64.5) {
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
									if (x[5] <= 13.0) {
										if (x[2] <= 139.5) {
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
					if (x[5] <= 3.0) {
						if (x[2] <= 224.5) {
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