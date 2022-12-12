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
				if (45.1(-0.0301*x[2]+0.184*x[3]-0.147*x[5]+0.972)^2-2.49(+0.117*x[2]-0.544*x[3]+0.799*x[5]+0.227)^2+0.121(+0.554*x[2]+0.715*x[3]+0.422*x[5]-0.0544)^2-0.0598(+0.823*x[2]-0.398*x[3]-0.403*x[5]+0.0399)^2 <= 0) {
					if (x[2] <= 66.5) {
						if (x[2] <= 15.5) {
							if (x[5] <= 13.0) {
								if (40.5(-0.015*x[2]+0.0632*x[3]-0.0569*x[5]+0.996)^2-1.31(-0.193*x[2]+0.564*x[3]-0.799*x[5]-0.0843)^2+0.112(+0.809*x[2]+0.554*x[3]+0.197*x[5]-0.0117)^2-0.102(-0.556*x[2]+0.609*x[3]+0.566*x[5]-0.0147)^2 <= 0) {
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
							if (x[3] <= -1.0) {
								if (x[2] <= 35.5) {
									if (x[5] <= -3.0) {
										if (-26.5(+0.0107*x[2]-0.109*x[3]+0.173*x[5]-0.979)^2+1.62(+0.0665*x[2]-0.417*x[3]+0.884*x[5]+0.203)^2+0.166(-0.522*x[2]+0.754*x[3]+0.399*x[5]-0.0195)^2-0.0463(+0.85*x[2]+0.497*x[3]+0.174*x[5]-0.0155)^2 <= 0) {
											return 0.0f;
										}
										else {
											return 0.0f;
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
									if (-13.7(-0.0383*x[2]+0.169*x[3]-0.396*x[5]+0.902)^2+3.3(+0.0606*x[2]-0.187*x[3]+0.884*x[5]+0.425)^2-0.128(+0.11*x[2]-0.96*x[3]-0.247*x[5]+0.0759)^2+0.0185(-0.991*x[2]-0.124*x[3]+0.0419*x[5]+0)^2 <= 0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}

							}
							else {
								if (x[5] <= 3.0) {
									if (x[3] <= 1.0) {
										if (-53.1(-0.0157*x[2]+0*x[3]-0.0861*x[5]+0.996)^2+1.02(+0.0975*x[2]+0*x[3]+0.991*x[5]+0.0873)^2+0.012(+0.995*x[2]+0*x[3]-0.0985*x[5]+0)^2 <= 0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[5] <= -1.0) {
											if (x[5] <= -5.0) {
												if (x[2] <= 63.5) {
													return 0.0f;
												}
												else {
													if (x[5] <= -7.0) {
														return 0.0f;
													}
													else {
														if (x[3] <= 3.0) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}

											}
											else {
												if (50.8(-0.0104*x[2]+0.0545*x[3]-0.03*x[5]+0.998)^2+1.07(-0.0445*x[2]-0.814*x[3]+0.576*x[5]+0.0613)^2+0.146(+0.139*x[2]+0.567*x[3]+0.812*x[5]+0)^2-0.0206(+0.989*x[2]-0.116*x[3]-0.0886*x[5]+0.014)^2 <= 0) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[3] <= 5.0) {
												if (x[2] <= 31.5) {
													return 0.0f;
												}
												else {
													if (x[2] <= 48.5) {
														if (x[3] <= 3.0) {
															if (x[5] <= 1.0) {
																if (x[2] <= 42.5) {
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
														if (x[3] <= 3.0) {
															return 0.0f;
														}
														else {
															if (x[5] <= 1.0) {
																if (x[2] <= 59.5) {
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

									}

								}
								else {
									if (x[5] <= 9.0) {
										if (-48.7(+0.0172*x[2]-0.123*x[3]+0.0686*x[5]-0.99)^2+1.22(+0.097*x[2]-0.377*x[3]+0.914*x[5]+0.112)^2-0.195(+0.321*x[2]+0.881*x[3]+0.339*x[5]-0.0805)^2+0.0289(+0.942*x[2]-0.259*x[3]-0.211*x[5]+0.0339)^2 <= 0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[3] <= 9.0) {
											if (x[2] <= 24.5) {
												if (-2.59(+0*x[2]-0.0502*x[3]+0.0896*x[5]-0.995)^2-0.0439(+0.0875*x[2]+0.992*x[3]+0.0826*x[5]-0.043)^2+0.0349(+0.136*x[2]-0.0897*x[3]+0.982*x[5]+0.0925)^2 <= 0) {
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
					else {
						if (x[2] <= 131.5) {
							if (x[3] <= 5.0) {
								if (x[3] <= 3.0) {
									if (x[2] <= 67.5) {
										if (7.79(+0*x[2]+0.0167*x[3]-0.0111*x[5]-1)^2-0.103(+0.0214*x[2]+0.975*x[3]-0.219*x[5]+0.0187)^2-0.0307(+0.0271*x[2]-0.22*x[3]-0.975*x[5]+0)^2 <= 0) {
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
								if (-56.8(-0.0178*x[2]+0.127*x[3]-0.0886*x[5]+0.988)^2+1.24(+0.101*x[2]-0.466*x[3]+0.868*x[5]+0.14)^2-0.134(-0.381*x[2]-0.826*x[3]-0.41*x[5]+0.0626)^2+0.0273(+0.919*x[2]-0.289*x[3]-0.267*x[5]+0.0298)^2 <= 0) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}

						}
						else {
							if (x[2] <= 146.5) {
								if (x[3] <= 9.0) {
									return 0.0f;
								}
								else {
									if (x[5] <= -3.0) {
										if (x[5] <= -5.0) {
											if (x[2] <= 143.5) {
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
											if (x[2] <= 138.5) {
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
								if (x[2] <= 147.5) {
									if (x[5] <= -9.0) {
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
					return -2.0f;
				}

			}
			else {
				if (-57.4(-0.0169*x[2]+0.116*x[3]-0.0828*x[5]+0.99)^2+1.18(+0.103*x[2]-0.465*x[3]+0.87*x[5]+0.129)^2-0.116(-0.431*x[2]-0.811*x[3]-0.391*x[5]+0.055)^2+0.0313(+0.896*x[2]-0.335*x[3]-0.29*x[5]+0.0303)^2 <= 0) {
					if (x[2] <= 204.5) {
						if (x[5] <= 19.0) {
							if (x[5] <= 3.0) {
								if (x[2] <= 139.5) {
									if (x[5] <= -3.0) {
										return -2.0f;
									}
									else {
										if (x[3] <= 13.0) {
											if (x[2] <= 112.5) {
												return -2.0f;
											}
											else {
												if (x[5] <= 1.0) {
													if (x[2] <= 123.5) {
														return -2.0f;
													}
													else {
														if (x[5] <= -1.0) {
															if (x[2] <= 132.5) {
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
											if (x[2] <= 137.5) {
												return -2.0f;
											}
											else {
												if (x[5] <= 1.0) {
													return -2.0f;
												}
												else {
													if (x[3] <= 15.0) {
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
								else {
									if (x[3] <= 15.0) {
										if (x[2] <= 169.5) {
											if (x[3] <= 13.0) {
												if (x[2] <= 147.5) {
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
												else {
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

											}
											else {
												if (x[5] <= -1.0) {
													if (x[5] <= -3.0) {
														if (x[2] <= 164.5) {
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
														if (x[5] <= 1.0) {
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
											if (x[2] <= 172.5) {
												if (x[5] <= -7.0) {
													if (x[3] <= 13.0) {
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
												if (x[2] <= 173.5) {
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

									}
									else {
										if (x[2] <= 191.5) {
											if (x[5] <= -3.0) {
												return -2.0f;
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
											if (x[3] <= 17.0) {
												if (x[5] <= -5.0) {
													if (x[2] <= 200.5) {
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
													return 0.0f;
												}

											}
											else {
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

										}

									}

								}

							}
							else {
								if (x[2] <= 148.5) {
									if (-33.7(+0.0286*x[2]-0.169*x[3]+0.137*x[5]-0.976)^2+1.7(-0.121*x[2]+0.52*x[3]-0.819*x[5]-0.209)^2-0.109(+0.505*x[2]+0.753*x[3]+0.418*x[5]-0.0565)^2+0.042(+0.854*x[2]-0.366*x[3]-0.368*x[5]+0.0365)^2 <= 0) {
										return -2.0f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[5] <= 7.0) {
										if (x[2] <= 180.5) {
											if (x[3] <= 17.0) {
												if (x[2] <= 151.5) {
													if (x[5] <= 5.0) {
														if (x[3] <= 15.0) {
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
												if (x[2] <= 165.5) {
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
						if (x[3] <= 17.0) {
							return 0.0f;
						}
						else {
							if (x[5] <= -3.0) {
								if (x[2] <= 228.5) {
									if (x[2] <= 225.5) {
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
										if (x[5] <= -7.0) {
											return -2.0f;
										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (x[2] <= 229.5) {
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
								if (x[2] <= 213.5) {
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

				}
				else {
					return 0.0f;
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