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
																	if (5.77(+0.0542*x[2]+0.000474*x[3]+0.0287*x[5]-0.998)^2-0.0879(+0.882*x[2]-0.436*x[3]+0.17*x[5]+0.0526)^2+0.0321(+0.215*x[2]+0.703*x[3]+0.678*x[5]+0.0315)^2 <= 0) {
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
																if (x[5] <= -7.0) {
																	if (11(+0.0258*x[2]+0.000126*x[3]+0.0184*x[5]-0.999)^2-0.0612(-0.832*x[2]+0.538*x[3]-0.133*x[5]-0.0239)^2+0.0438(-0.308*x[2]-0.65*x[3]-0.695*x[5]-0.0209)^2 <= 0) {
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
															if (1.15(-0.252*x[2]-0.0456*x[3]-0.426*x[5]+0.868)^2-0.367(-0.548*x[2]+0.244*x[3]-0.651*x[5]-0.466)^2+0.0246(-0.183*x[2]+0.896*x[3]+0.366*x[5]+0.174)^2 <= 0) {
																return 0.0f;
															}
															else {
																return -2.0f;
															}

														}

													}
													else {
														if (x[2] <= 10.5) {
															if (2.21(-0.000218*x[2]-0.0955*x[3]+0.0808*x[5]-0.992)^2-0.0589(+0.235*x[2]-0.941*x[3]+0.218*x[5]+0.108)^2+0.0526(+0.284*x[2]-0.155*x[3]-0.944*x[5]-0.0621)^2 <= 0) {
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
													if (x[2] <= 19.5) {
														if (x[3] <= -7.0) {
															return 0.0f;
														}
														else {
															if (x[5] <= -7.0) {
																if (x[2] <= 18.5) {
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
																if (x[2] <= 15.5) {
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
															if (11.9(-0.0264*x[2]-0.00065*x[3]-0.0436*x[5]+0.999)^2-0.161(-0.511*x[2]+0.678*x[3]-0.528*x[5]-0.0361)^2+0.152(+0.215*x[2]+0.697*x[3]+0.683*x[5]+0.036)^2 <= 0) {
																return 0.0f;
															}
															else {
																return -2.0f;
															}

														}
														else {
															if (x[2] <= 24.5) {
																return 0.0f;
															}
															else {
																if (x[5] <= -7.0) {
																	if (x[2] <= 27.5) {
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
																if (x[5] <= -3.0) {
																	if (x[2] <= 19.5) {
																		return 0.0f;
																	}
																	else {
																		return 0.0f;
																	}

																}
																else {
																	if (x[2] <= 12.5) {
																		return 0.0f;
																	}
																	else {
																		return 0.0f;
																	}

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
														if (x[3] <= -3.0) {
															return 0.0f;
														}
														else {
															if (x[5] <= -3.0) {
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
										if (x[3] <= -3.0) {
											return 0.0f;
										}
										else {
											if (-96.6(-0.0204*x[2]-0.000247*x[3]-0.00888*x[5]+1)^2-1.53(+0.509*x[2]+0.517*x[3]+0.688*x[5]+0.0166)^2+0.915(-0.664*x[2]+0.745*x[3]-0.0678*x[5]-0.014)^2-0.553(+0.547*x[2]+0.422*x[3]-0.723*x[5]+0.00486)^2 <= 0) {
												if (x[2] <= 29.5) {
													if (x[5] <= -6.0) {
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

								}
								else {
									if (x[5] <= -1.0) {
										if (x[2] <= 36.5) {
											if (x[5] <= -5.0) {
												return -2.0f;
											}
											else {
												if (x[3] <= 1.0) {
													if (27.3(+0.0186*x[2]+0*x[3]+0.0686*x[5]-0.997)^2+0.488(-0.0699*x[2]+0*x[3]+0.995*x[5]+0.0672)^2-0.0321(-0.997*x[2]+0*x[3]-0.0685*x[5]-0.0234)^2 <= 0) {
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
														if (58.4(-0.00795*x[2]+0*x[3]-0.0112*x[5]+1)^2+0.0447(-0.248*x[2]+0*x[3]+0.969*x[5]+0.00892)^2-0.02(+0.969*x[2]+0*x[3]+0.247*x[5]+0.0105)^2 <= 0) {
															return 0.0f;
														}
														else {
															return 0.0f;
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
													if (42(+0.0112*x[2]+0*x[3]+0.0415*x[5]-0.999)^2-1.9(+0.0585*x[2]+0*x[3]+0.997*x[5]+0.0421)^2-0.0197(-0.998*x[2]+0*x[3]+0.059*x[5]-0.00876)^2 <= 0) {
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
													if (70.5(-0.00488*x[2]+0.000146*x[3]-0.0162*x[5]+1)^2-1.43(+0.0839*x[2]+0.384*x[3]+0.919*x[5]+0.0153)^2+0.301(+0.416*x[2]-0.852*x[3]+0.318*x[5]+0.00731)^2-0.0613(+0.906*x[2]+0.356*x[3]-0.231*x[5]+0.000618)^2 <= 0) {
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
								if (x[2] <= 18.5) {
									if (-2.18(-0.0039*x[2]-0.107*x[3]+0.123*x[5]-0.987)^2-0.141(-0.0627*x[2]-0.977*x[3]-0.184*x[5]+0.0832)^2+0.0806(-0.103*x[2]+0.177*x[3]-0.969*x[5]-0.139)^2 <= 0) {
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
													if (98.4(-0.00239*x[2]+0.0001*x[3]-0.0199*x[5]+1)^2-0.761(+0.112*x[2]+0.544*x[3]+0.831*x[5]+0.0167)^2+0.321(+0.0473*x[2]-0.839*x[3]+0.543*x[5]+0.011)^2 <= 0) {
														return 0.0f;
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
											if (x[3] <= 5.0) {
												return 0.0f;
											}
											else {
												if (x[5] <= 5.0) {
													return 0.0f;
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
													if (63.5(-0.00285*x[2]+1.03e-06*x[3]+0.000241*x[5]+1)^2-0.0469(-0.765*x[2]-0.348*x[3]-0.542*x[5]-0.00205)^2+0.0399(-0.644*x[2]+0.397*x[3]+0.654*x[5]-0.002)^2 <= 0) {
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
											if (8.19(-1.14e-06*x[2]+0.0105*x[3]+0.00244*x[5]-1)^2-0.0582(-0.00455*x[2]-0.512*x[3]+0.859*x[5]-0.00331)^2 <= 0) {
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
											if (2.26(-0.00185*x[2]+0.0792*x[3]-0.0648*x[5]-0.995)^2-0.0412(+0.0549*x[2]+0.939*x[3]-0.326*x[5]+0.0959)^2+0.0177(+0.0465*x[2]+0.328*x[3]+0.943*x[5]-0.0354)^2 <= 0) {
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
									if (x[5] <= 11.0) {
										if (x[2] <= 25.5) {
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
						if (x[2] <= 47.5) {
							if (-1.98(+0.00513*x[2]+0.0309*x[3]-0.124*x[5]+0.992)^2-0.0573(+0.0237*x[2]+0.997*x[3]-0.0581*x[5]-0.0385)^2+0.0358(-0.0377*x[2]-0.0615*x[3]-0.99*x[5]-0.122)^2 <= 0) {
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
						if (255(+0.00543*x[2]-1.31e-05*x[3]-0.0101*x[5]-1)^2+0.503(+0.114*x[2]-0.476*x[3]-0.872*x[5]+0.0094)^2-0.207(+0.499*x[2]+0.786*x[3]-0.364*x[5]+0.00637)^2+0.0892(-0.859*x[2]+0.393*x[3]-0.327*x[5]-0.00138)^2 <= 0) {
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
													if (358(-0.000836*x[2]+3.88e-08*x[3]+4.8e-06*x[5]+1)^2-0.0178(-0.729*x[2]-0.68*x[3]-0.0808*x[5]-0.000608)^2+0.0158(-0.685*x[2]+0.72*x[3]+0.114*x[5]-0.000573)^2 <= 0) {
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
												if (-2.75(-0.000458*x[2]-0.0848*x[3]+0.0673*x[5]+0.994)^2+0.0412(+0.0385*x[2]+0.922*x[3]-0.371*x[5]+0.104)^2-0.0103(-0.0971*x[2]-0.371*x[3]-0.923*x[5]+0.0309)^2 <= 0) {
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
											if (-1.26(-0.000797*x[2]+0.223*x[3]-0.173*x[5]+0.959)^2+0.0964(-0.0146*x[2]+0.645*x[3]-0.711*x[5]-0.279)^2 <= 0) {
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
												if (-147(-0.00251*x[2]+5.34e-07*x[3]-0.00182*x[5]+1)^2+0.0374(+0.534*x[2]+0.55*x[3]+0.642*x[5]+0.00251)^2-0.0199(-0.656*x[2]+0.749*x[3]-0.0952*x[5]-0.00182)^2 <= 0) {
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