#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.38f,5.4505f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 1.39525) {
		if (-67.47976857667054*x[0]+4.315005240755206*x[1]+55.40405420482516 <= 0) {
			if (x[1] <= 5.48925) {
				return 2.0f;
			}
			else {
				if (x[1] <= 5.84375) {
					if (x[0] <= 1.18075) {
						if (-2058.0238514991192*x[0]+50.799972185889224*x[1]+2144.359497028058 <= 0) {
							if (x[1] <= 5.50875) {
								return 1.0f;
							}
							else {
								if (x[1] <= 5.60625) {
									if (x[1] <= 5.59125) {
										return 1.0f;
									}
									else {
										if (x[0] <= 1.18025) {
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
						else {
							if (-12210.708923691123*x[0]+387.20177975502145*x[1]+12243.514388058582 <= 0) {
								if (x[1] <= 5.50875) {
									return 1.0f;
								}
								else {
									return 1.0f;
								}

							}
							else {
								if (-1423885.6612522744*x[0]+47467.27162251214*x[1]+1414783.7001923483 <= 0) {
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
							if (-694.1774981892813*x[0]-1780.8671341307852*x[1]+10633.685446689846 <= 0) {
								if (x[0] <= 1.23075) {
									if (x[1] <= 5.49875) {
										if (x[0] <= 1.21725) {
											return 1.0f;
										}
										else {
											if (-1077.7752174726684*x[0]-2582.0697302174563*x[1]+15506.544955752772 <= 0) {
												if (x[1] <= 5.49625) {
													if (x[0] <= 1.22375) {
														if (x[0] <= 1.22325) {
															return 1.0f;
														}
														else {
															if (x[1] <= 5.49575) {
																return 1.0f;
															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														if (x[1] <= 5.49275) {
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
															return 1.0f;
														}

													}

												}
												else {
													if (x[0] <= 1.21775) {
														if (x[1] <= 5.49775) {
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
												if (x[0] <= 1.22425) {
													if (x[1] <= 5.49625) {
														return 1.0f;
													}
													else {
														if (x[0] <= 1.21775) {
															return 1.0f;
														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													if (x[0] <= 1.22775) {
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
										if (x[0] <= 1.19675) {
											if (x[1] <= 5.50625) {
												if (x[0] <= 1.19625) {
													return 1.0f;
												}
												else {
													if (x[1] <= 5.50575) {
														return 1.0f;
													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												if (x[0] <= 1.19075) {
													if (x[1] <= 5.50825) {
														if (x[0] <= 1.19025) {
															return 1.0f;
														}
														else {
															if (x[1] <= 5.50775) {
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
													return 1.0f;
												}

											}

										}
										else {
											if (-41015.16112611947*x[0]-214382.30164091353*x[1]+1228609.0733883174 <= 0) {
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
								if (x[0] <= 1.23125) {
									if (x[1] <= 5.49925) {
										if (x[0] <= 1.22425) {
											return 1.0f;
										}
										else {
											if (-39856.6889260002*x[0]-201046.52299756993*x[1]+1153183.196562357 <= 0) {
												return 1.0f;
											}
											else {
												return 1.0f;
											}

										}

									}
									else {
										if (-1292.225449173674*x[0]-2359.3193749054767*x[1]+14532.728692867382 <= 0) {
											if (x[0] <= 1.20375) {
												if (x[1] <= 5.50225) {
													if (x[0] <= 1.20275) {
														return 1.0f;
													}
													else {
														if (x[1] <= 5.50125) {
															return 1.0f;
														}
														else {
															if (x[0] <= 1.20325) {
																if (x[1] <= 5.50175) {
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
													if (x[0] <= 1.197) {
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
											if (x[0] <= 1.20375) {
												if (x[0] <= 1.19725) {
													if (x[1] <= 5.50625) {
														return 1.0f;
													}
													else {
														if (x[0] <= 1.19075) {
															if (-39374.87250534592*x[0]-168708.77839760628*x[1]+976020.9337419721 <= 0) {
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
													if (x[1] <= 5.50225) {
														return 1.0f;
													}
													else {
														if (-27130.334268617335*x[0]-90223.6275190225*x[1]+528978.0031906953 <= 0) {
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

								}
								else {
									return 1.0f;
								}

							}

						}
						else {
							if (x[1] <= 5.83975) {
								if (-1317591.1808032978*x[0]+43590.90974128789*x[1]+1311018.2924128617 <= 0) {
									if (136004.27825898657*x[0]+34075.88527164912*x[1]-388669.51182370656 <= 0) {
										return 1.0f;
									}
									else {
										return 2.0f;
									}

								}
								else {
									return 1.0f;
								}

							}
							else {
								if (40868.231224940086*x[0]+1143770.331184853*x[1]-6739111.199990288 <= 0) {
									if (167325.58631986324*x[0]+111338.719143868*x[1]-883202.7742070073 <= 0) {
										return 1.0f;
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

					}

				}
				else {
					if (355205.8465648644*x[0]+9996548.061643945*x[1]-58897083.482081756 <= 0) {
						return 1.0f;
					}
					else {
						return 1.0f;
					}

				}

			}

		}
		else {
			if (-5604.962238120389*x[0]+187.02639333252242*x[1]+5568.112966494763 <= 0) {
				if (x[1] <= 5.84925) {
					return 1.0f;
				}
				else {
					return 1.0f;
				}

			}
			else {
				if (-5864971.902413876*x[0]+194623.3357332815*x[1]+5832470.976923786 <= 0) {
					return 1.0f;
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