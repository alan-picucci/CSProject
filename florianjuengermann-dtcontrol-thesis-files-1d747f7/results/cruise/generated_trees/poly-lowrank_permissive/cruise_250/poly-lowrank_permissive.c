#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,10.f,-2.f,-2.f,-2.f,-2.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[3] <= -5.0) {
		if (x[2] <= 7.5) {
			if (x[5] <= -5.0) {
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
			if (x[2] <= 168.5) {
				if (x[3] <= 9.0) {
					if (x[2] <= 68.5) {
						if (x[5] <= 9.0) {
							if (x[3] <= 3.0) {
								if (x[2] <= 29.5) {
									if (x[5] <= 3.0) {
										if (x[3] <= -1.0) {
											if (x[2] <= 13.5) {
												if (x[5] <= -1.0) {
													if (x[3] <= -3.0) {
														if (x[2] <= 8.5) {
															if (x[5] <= -3.0) {
																if (x[2] <= 7.5) {
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
														else {
															if (x[5] <= -3.0) {
																if (x[2] <= 11.5) {
																	return 0.0f;
																}
																else {
																	if (x[5] <= -5.0) {
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
																return 0.0f;
															}

														}

													}
													else {
														if (x[2] <= 9.5) {
															return -2.0f;
														}
														else {
															if (x[5] <= -3.0) {
																if (x[2] <= 12.5) {
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

												}
												else {
													if (-19.2(-0.0238*x[2]+0.0318*x[3]-0.0313*x[5]+0.999)^2+0.665(+0.0431*x[2]-0.214*x[3]+0.975*x[5]+0.0384)^2+0.213(+0.209*x[2]-0.953*x[3]-0.219*x[5]+0.0284)^2+0.0496(-0.977*x[2]-0.214*x[3]-0.00327*x[5]-0.0165)^2 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[2] <= 19.5) {
													if (-27.2(-0.0163*x[2]+0.0454*x[3]-0.0245*x[5]+0.999)^2+0.514(-0.0895*x[2]+0.971*x[3]+0.219*x[5]-0.0403)^2-0.211(-0.244*x[2]-0.233*x[3]+0.941*x[5]+0.0297)^2+0.0561(+0.965*x[2]+0.0317*x[3]+0.258*x[5]+0.0207)^2 <= 0) {
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
												if (x[2] <= 20.5) {
													if (x[5] <= 1.0) {
														if (x[5] <= -3.0) {
															if (24.3(-0.0156*x[2]+0*x[3]-0.0082*x[5]+1)^2-0.0397(+0.994*x[2]+0*x[3]+0.105*x[5]+0.0163)^2+0.039(-0.105*x[2]+0*x[3]+0.994*x[5]+0.00651)^2 <= 0) {
																return 0.0f;
															}
															else {
																return -2.0f;
															}

														}
														else {
															if (x[2] <= 16.5) {
																if (17.5(+0.0291*x[2]+0*x[3]+0.0454*x[5]-0.999)^2+0.74(-0.121*x[2]+0*x[3]+0.992*x[5]+0.0416)^2-0.069(-0.992*x[2]+0*x[3]-0.12*x[5]-0.0344)^2 <= 0) {
																	return 0.0f;
																}
																else {
																	return -2.0f;
																}

															}
															else {
																if (28.3(+0.0159*x[2]+0*x[3]+0.00442*x[5]-1)^2+0.126(-0.0896*x[2]+0*x[3]+0.996*x[5]+0.00298)^2-0.0366(-0.996*x[2]+0*x[3]-0.0896*x[5]-0.0163)^2 <= 0) {
																	return 0.0f;
																}
																else {
																	return 0.0f;
																}

															}

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
												else {
													if (-23.6(-0.0109*x[2]+0*x[3]-0.0853*x[5]+0.996)^2+0.732(+0.093*x[2]+0*x[3]+0.992*x[5]+0.086)^2+0.0315(+0.996*x[2]+0*x[3]-0.0936*x[5]+0.00286)^2 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[5] <= 1.0) {
													if (x[2] <= 20.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= -1.0) {
															if (x[2] <= 25.5) {
																return -2.0f;
															}
															else {
																if (x[5] <= -3.0) {
																	if (x[2] <= 28.5) {
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
															return 0.0f;
														}

													}

												}
												else {
													if (x[2] <= 13.5) {
														return -2.0f;
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
									else {
										if (x[2] <= 14.5) {
											if (-2.01(+0.00726*x[2]+0.0984*x[3]-0.121*x[5]+0.988)^2-0.186(+0.0569*x[2]+0.987*x[3]+0.122*x[5]-0.0838)^2+0.0741(-0.13*x[2]+0.117*x[3]-0.976*x[5]-0.131)^2 <= 0) {
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
									if (x[2] <= 39.5) {
										if (x[3] <= 1.0) {
											return 0.0f;
										}
										else {
											if (x[5] <= -1.0) {
												if (x[2] <= 35.5) {
													return 0.0f;
												}
												else {
													if (x[5] <= -3.0) {
														if (x[2] <= 38.5) {
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
														return 0.0f;
													}

												}

											}
											else {
												if (x[2] <= 30.5) {
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
									else {
										return 0.0f;
									}

								}

							}
							else {
								if (x[5] <= 5.0) {
									if (x[2] <= 43.5) {
										if (x[3] <= 5.0) {
											if (x[5] <= 1.0) {
												if (x[2] <= 36.5) {
													if (x[5] <= -1.0) {
														return -2.0f;
													}
													else {
														if (x[2] <= 31.5) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[5] <= -3.0) {
														if (x[2] <= 39.5) {
															return -2.0f;
														}
														else {
															if (x[2] <= 40.5) {
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
												if (x[2] <= 27.5) {
													if (x[2] <= 15.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= 3.0) {
															if (x[2] <= 24.5) {
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
													if (x[5] <= 3.0) {
														if (x[2] <= 36.5) {
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
											if (x[5] <= 1.0) {
												return -2.0f;
											}
											else {
												if (x[3] <= 7.0) {
													if (x[2] <= 28.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= 3.0) {
															if (x[2] <= 37.5) {
																return -2.0f;
															}
															else {
																return 0.0f;
															}

														}
														else {
															if (x[2] <= 42.5) {
																return 0.0f;
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

									}
									else {
										if (x[3] <= 5.0) {
											if (x[2] <= 52.5) {
												if (x[5] <= -1.0) {
													if (x[2] <= 48.5) {
														return 0.0f;
													}
													else {
														if (x[5] <= -3.0) {
															if (x[2] <= 51.5) {
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
											if (x[5] <= 1.0) {
												if (x[3] <= 7.0) {
													if (x[2] <= 53.5) {
														if (x[5] <= -1.0) {
															if (x[2] <= 49.5) {
																return -2.0f;
															}
															else {
																if (x[5] <= -3.0) {
																	if (x[2] <= 52.5) {
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
															if (x[2] <= 44.5) {
																return -2.0f;
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
															if (x[5] <= -1.0) {
																if (x[2] <= 63.5) {
																	return 0.0f;
																}
																else {
																	if (x[5] <= -3.0) {
																		if (x[2] <= 66.5) {
																			return 0.0f;
																		}
																		else {
																			if (x[5] <= -5.0) {
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
													if (x[2] <= 59.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= -1.0) {
															if (x[2] <= 64.5) {
																return -2.0f;
															}
															else {
																if (x[5] <= -3.0) {
																	if (x[2] <= 67.5) {
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
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[3] <= 7.0) {
													if (-102(+0.00363*x[2]-3e-05*x[3]+0.0129*x[5]-1)^2+0.547(+0.05*x[2]+0.377*x[3]+0.925*x[5]+0.0121)^2-0.115(+0.421*x[2]-0.847*x[3]+0.323*x[5]+0.00572)^2+0.031(-0.905*x[2]-0.373*x[3]+0.201*x[5]-0.000681)^2 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[2] <= 52.5) {
														if (x[5] <= 3.0) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[5] <= 3.0) {
															return 0.0f;
														}
														else {
															if (x[2] <= 59.5) {
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

								}
								else {
									if (x[2] <= 32.5) {
										if (x[3] <= 5.0) {
											if (x[2] <= 16.5) {
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
										else {
											if (x[3] <= 7.0) {
												if (x[2] <= 17.5) {
													if (x[5] <= 7.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[5] <= 7.0) {
														if (x[2] <= 31.5) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[2] <= 18.5) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[2] <= 19.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 7.0) {
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
										if (x[3] <= 7.0) {
											return 0.0f;
										}
										else {
											if (-139(+0.00231*x[2]-1.99e-05*x[3]+0.0124*x[5]-1)^2+0.394(+0.129*x[2]+0.486*x[3]+0.864*x[5]+0.011)^2-0.122(+0.144*x[2]-0.872*x[3]+0.468*x[5]+0.00616)^2 <= 0) {
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
							if (x[2] <= 20.5) {
								if (-2.75(+0.000934*x[2]-0.0637*x[3]+0.094*x[5]-0.994)^2+0.0444(+0.105*x[2]-0.17*x[3]+0.974*x[5]+0.103)^2-0.0377(-0.103*x[2]-0.98*x[3]-0.165*x[5]+0.0471)^2 <= 0) {
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
						if (x[3] <= 7.0) {
							return 0.0f;
						}
						else {
							if (x[2] <= 84.5) {
								if (x[5] <= 1.0) {
									if (x[2] <= 75.5) {
										return 0.0f;
									}
									else {
										if (x[5] <= -1.0) {
											if (x[2] <= 80.5) {
												return 0.0f;
											}
											else {
												if (x[5] <= -3.0) {
													if (x[2] <= 83.5) {
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
					if (x[5] <= 11.0) {
						if (x[2] <= 108.5) {
							if (x[3] <= 13.0) {
								if (x[5] <= 3.0) {
									if (x[2] <= 87.5) {
										if (x[3] <= 11.0) {
											if (x[2] <= 76.5) {
												if (x[5] <= 1.0) {
													return -2.0f;
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
												if (x[5] <= -1.0) {
													if (x[2] <= 81.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= -3.0) {
															if (x[2] <= 84.5) {
																return -2.0f;
															}
															else {
																if (x[2] <= 85.5) {
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
													return 0.0f;
												}

											}

										}
										else {
											return -2.0f;
										}

									}
									else {
										if (x[3] <= 11.0) {
											if (x[2] <= 102.5) {
												if (x[5] <= -1.0) {
													if (x[2] <= 99.5) {
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
													if (x[2] <= 94.5) {
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
											else {
												if (x[5] <= -5.0) {
													if (x[2] <= 103.5) {
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
											if (x[2] <= 103.5) {
												if (x[5] <= -1.0) {
													if (x[2] <= 100.5) {
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
												else {
													if (x[2] <= 95.5) {
														if (x[5] <= 1.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 88.5) {
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
												if (x[5] <= -5.0) {
													if (x[2] <= 104.5) {
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
									if (x[2] <= 68.5) {
										if (x[2] <= 39.5) {
											if (x[3] <= 11.0) {
												if (x[2] <= 21.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 9.0) {
														if (62.2(-0.00282*x[2]+9.66e-07*x[3]-0.0013*x[5]+1)^2-0.0508(-0.685*x[2]-0.339*x[3]-0.645*x[5]-0.00277)^2+0.0239(-0.729*x[2]+0.333*x[3]+0.598*x[5]-0.00128)^2 <= 0) {
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
												if (x[3] <= 11.0) {
													if (x[2] <= 60.5) {
														if (x[5] <= 5.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 49.5) {
																return -2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[2] <= 67.5) {
															return 0.0f;
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
												else {
													return -2.0f;
												}

											}
											else {
												if (x[3] <= 11.0) {
													if (x[5] <= 9.0) {
														if (x[2] <= 54.5) {
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
													if (x[2] <= 55.5) {
														if (x[5] <= 9.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 40.5) {
																return -2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[5] <= 9.0) {
															return 0.0f;
														}
														else {
															if (x[2] <= 60.5) {
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
											if (x[2] <= 79.5) {
												if (x[3] <= 11.0) {
													if (x[2] <= 78.5) {
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
												if (x[3] <= 11.0) {
													return 0.0f;
												}
												else {
													if (x[2] <= 99.5) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[2] <= 88.5) {
												if (x[3] <= 11.0) {
													return 0.0f;
												}
												else {
													if (x[5] <= 7.0) {
														return 0.0f;
													}
													else {
														if (x[2] <= 75.5) {
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
									if (x[5] <= 3.0) {
										return -2.0f;
									}
									else {
										if (x[2] <= 89.5) {
											return -2.0f;
										}
										else {
											if (x[3] <= 15.0) {
												if (x[5] <= 5.0) {
													if (x[2] <= 100.5) {
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
									if (x[3] <= 15.0) {
										if (x[2] <= 76.5) {
											if (x[2] <= 61.5) {
												return -2.0f;
											}
											else {
												if (x[5] <= 9.0) {
													return -2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[2] <= 98.5) {
												if (x[5] <= 9.0) {
													return 0.0f;
												}
												else {
													if (x[2] <= 83.5) {
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
										if (x[3] <= 17.0) {
											if (x[2] <= 84.5) {
												return -2.0f;
											}
											else {
												if (x[5] <= 9.0) {
													if (x[2] <= 99.5) {
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

							}

						}
						else {
							if (x[3] <= 13.0) {
								if (x[2] <= 124.5) {
									if (x[5] <= 1.0) {
										if (x[3] <= 11.0) {
											return 0.0f;
										}
										else {
											if (x[2] <= 115.5) {
												return 0.0f;
											}
											else {
												if (x[5] <= -1.0) {
													if (x[2] <= 120.5) {
														return 0.0f;
													}
													else {
														if (x[5] <= -3.0) {
															if (x[2] <= 123.5) {
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
								else {
									return 0.0f;
								}

							}
							else {
								if (x[5] <= 5.0) {
									if (x[3] <= 15.0) {
										if (x[2] <= 143.5) {
											if (x[2] <= 124.5) {
												if (x[5] <= 1.0) {
													if (x[2] <= 116.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= -1.0) {
															if (x[2] <= 121.5) {
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
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[2] <= 122.5) {
														if (x[2] <= 109.5) {
															if (x[5] <= 3.0) {
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
														if (x[5] <= 3.0) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (x[5] <= 1.0) {
													if (x[2] <= 138.5) {
														if (x[2] <= 125.5) {
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
													if (x[2] <= 131.5) {
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

											}

										}
										else {
											if (x[2] <= 147.5) {
												if (x[5] <= -3.0) {
													if (x[2] <= 146.5) {
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
													return 0.0f;
												}

											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[2] <= 147.5) {
											if (x[3] <= 17.0) {
												if (x[5] <= -1.0) {
													if (x[2] <= 144.5) {
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
												else {
													if (x[2] <= 132.5) {
														if (x[5] <= 3.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 123.5) {
																return -2.0f;
															}
															else {
																return 0.0f;
															}

														}

													}
													else {
														if (x[5] <= 1.0) {
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
											else {
												return -2.0f;
											}

										}
										else {
											if (x[3] <= 17.0) {
												if (x[5] <= 1.0) {
													if (x[2] <= 163.5) {
														if (x[2] <= 148.5) {
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
													if (x[2] <= 156.5) {
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

											}
											else {
												if (x[5] <= 1.0) {
													if (x[2] <= 164.5) {
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
													if (x[2] <= 157.5) {
														if (x[5] <= 3.0) {
															return -2.0f;
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
													else {
														return 0.0f;
													}

												}

											}

										}

									}

								}
								else {
									if (x[3] <= 17.0) {
										if (x[2] <= 136.5) {
											if (x[3] <= 15.0) {
												if (x[2] <= 111.5) {
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
											else {
												if (x[5] <= 9.0) {
													if (x[2] <= 123.5) {
														if (x[2] <= 112.5) {
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
										if (x[2] <= 137.5) {
											if (x[5] <= 9.0) {
												if (x[2] <= 124.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 7.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[2] <= 135.5) {
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
											if (x[5] <= 9.0) {
												if (x[2] <= 150.5) {
													return 0.0f;
												}
												else {
													if (x[5] <= 7.0) {
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

						}

					}
					else {
						if (x[2] <= 92.5) {
							if (x[3] <= 15.0) {
								if (x[2] <= 44.5) {
									if (x[5] <= 15.0) {
										if (x[3] <= 11.0) {
											if (x[2] <= 22.5) {
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
										else {
											if (x[3] <= 13.0) {
												if (x[2] <= 23.5) {
													if (x[5] <= 13.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[5] <= 13.0) {
														if (x[2] <= 43.5) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[2] <= 24.5) {
															return 0.0f;
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
													if (x[5] <= 13.0) {
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
										if (x[2] <= 26.5) {
											if (-2.54(-0.00123*x[2]+0.0884*x[3]-0.0999*x[5]+0.991)^2+0.0489(-0.0405*x[2]+0.398*x[3]-0.908*x[5]-0.127)^2-0.011(-0.0843*x[2]-0.911*x[3]-0.401*x[5]+0.0407)^2 <= 0) {
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
									if (x[3] <= 13.0) {
										return 0.0f;
									}
									else {
										if (x[5] <= 13.0) {
											if (x[2] <= 66.5) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[2] <= 47.5) {
												if (x[5] <= 15.0) {
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
									if (x[2] <= 51.5) {
										if (x[3] <= 17.0) {
											if (x[2] <= 27.5) {
												return -2.0f;
											}
											else {
												if (x[5] <= 15.0) {
													if (x[2] <= 48.5) {
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
										if (x[5] <= 15.0) {
											if (x[3] <= 17.0) {
												if (x[2] <= 72.5) {
													if (x[5] <= 13.0) {
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
												else {
													if (x[5] <= 13.0) {
														if (x[2] <= 91.5) {
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
												if (x[2] <= 73.5) {
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
											if (x[3] <= 17.0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 78.5) {
													if (x[2] <= 52.5) {
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
									if (x[2] <= 29.5) {
										if (x[3] <= 17.0) {
											if (x[5] <= 19.0) {
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
										else {
											if (x[5] <= 19.0) {
												return -2.0f;
											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (x[2] <= 55.5) {
											if (x[3] <= 17.0) {
												return 0.0f;
											}
											else {
												if (x[5] <= 19.0) {
													return 0.0f;
												}
												else {
													if (x[2] <= 30.5) {
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

							}

						}
						else {
							if (x[3] <= 17.0) {
								return 0.0f;
							}
							else {
								if (x[2] <= 118.5) {
									if (x[5] <= 13.0) {
										return 0.0f;
									}
									else {
										if (x[2] <= 99.5) {
											if (x[5] <= 15.0) {
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
			else {
				if (x[3] <= 17.0) {
					if (x[2] <= 172.5) {
						if (x[3] <= 15.0) {
							return 0.0f;
						}
						else {
							if (x[5] <= -3.0) {
								if (x[2] <= 171.5) {
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
								return 0.0f;
							}

						}

					}
					else {
						return 0.0f;
					}

				}
				else {
					if (x[5] <= 3.0) {
						if (x[2] <= 190.5) {
							if (x[2] <= 173.5) {
								if (x[5] <= -3.0) {
									if (x[2] <= 172.5) {
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
									if (x[2] <= 169.5) {
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
							else {
								if (x[5] <= 1.0) {
									return 0.0f;
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

						}
						else {
							if (x[2] <= 197.5) {
								if (x[5] <= -1.0) {
									if (x[2] <= 195.5) {
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
							else {
								if (x[2] <= 199.5) {
									if (x[5] <= -3.0) {
										if (x[2] <= 198.5) {
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
						if (x[2] <= 174.5) {
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

			}

		}
		else {
			if (x[2] <= 191.5) {
				if (x[5] <= 5.0) {
					if (x[5] <= 1.0) {
						return -2.0f;
					}
					else {
						if (x[2] <= 175.5) {
							return -2.0f;
						}
						else {
							if (x[5] <= 3.0) {
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

				}
				else {
					if (x[2] <= 164.5) {
						if (x[5] <= 11.0) {
							if (x[2] <= 136.5) {
								return -2.0f;
							}
							else {
								if (x[5] <= 9.0) {
									if (x[2] <= 151.5) {
										return -2.0f;
									}
									else {
										if (x[5] <= 7.0) {
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
							if (x[2] <= 119.5) {
								if (x[5] <= 13.0) {
									return -2.0f;
								}
								else {
									if (x[2] <= 100.5) {
										if (x[5] <= 15.0) {
											return -2.0f;
										}
										else {
											if (x[2] <= 79.5) {
												if (x[5] <= 17.0) {
													return -2.0f;
												}
												else {
													if (x[2] <= 56.5) {
														if (x[5] <= 19.0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 31.5) {
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
				if (x[5] <= -1.0) {
					if (x[2] <= 200.5) {
						if (x[2] <= 196.5) {
							return -2.0f;
						}
						else {
							if (x[5] <= -3.0) {
								if (x[5] <= -5.0) {
									return -2.0f;
								}
								else {
									if (x[2] <= 199.5) {
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
					return 0.0f;
				}

			}

		}

	}

}