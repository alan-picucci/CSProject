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
		if (0.354(-0.0428*x[2]+0.254*x[3]-0.233*x[5]+0.938)^2-0.0733(-0.0957*x[2]+0.759*x[3]-0.544*x[5]-0.344)^2 <= 0) {
			if (38.1(-0.0303*x[2]+0.187*x[3]-0.15*x[5]+0.97)^2-2(+0.119*x[2]-0.532*x[3]+0.806*x[5]+0.231)^2+0.108(+0.542*x[2]+0.727*x[3]+0.417*x[5]-0.0589)^2-0.0502(+0.831*x[2]-0.392*x[3]-0.393*x[5]+0.0408)^2 <= 0) {
				if (x[2] <= 147.5) {
					if (-55.4(-0.0175*x[2]+0.124*x[3]-0.0869*x[5]+0.988)^2+1.33(-0.104*x[2]+0.534*x[3]-0.827*x[5]-0.141)^2 <= 0) {
						if (x[5] <= -5.0) {
							if (x[3] <= 7.0) {
								if (-45.3(+0.016*x[2]-0.121*x[3]+0.13*x[5]-0.984)^2+1.61(+0.0866*x[2]-0.449*x[3]+0.872*x[5]+0.172)^2+0.109(-0.654*x[2]+0.64*x[3]+0.402*x[5]-0.0359)^2-0.0689(+0.751*x[2]+0.611*x[3]+0.246*x[5]-0.0301)^2 <= 0) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								if (x[2] <= 123.5) {
									return 0.0f;
								}
								else {
									if (x[3] <= 9.0) {
										if (x[2] <= 124.5) {
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
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[3] <= 1.0) {
								if (39.4(-0.0106*x[2]+0.0622*x[3]-0.11*x[5]+0.992)^2-1.36(-0.132*x[2]+0.673*x[3]-0.718*x[5]-0.123)^2-0.279(-0.319*x[2]+0.664*x[3]+0.676*x[5]+0.03)^2+0.0318(-0.938*x[2]-0.321*x[3]-0.128*x[5]-0.00411)^2 <= 0) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								if (43(+0.0116*x[2]-0.0886*x[3]+0.046*x[5]-0.995)^2-0.33(-0.358*x[2]+0.875*x[3]-0.311*x[5]-0.0964)^2-0.144(+0.0539*x[2]+0.355*x[3]+0.933*x[5]+0.0122)^2+0.028(+0.932*x[2]+0.316*x[3]-0.174*x[5]-0.0254)^2 <= 0) {
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
							if (-57.1(-0.0189*x[2]+0.15*x[3]-0.0948*x[5]+0.984)^2+1.03(-0.101*x[2]+0.387*x[3]-0.905*x[5]-0.148)^2-0.126(+0.411*x[2]+0.845*x[3]+0.33*x[5]-0.0888)^2+0.0315(+0.906*x[2]-0.337*x[3]-0.253*x[5]+0.0443)^2 <= 0) {
								return 0.0f;
							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[5] <= 11.0) {
								if (x[3] <= 9.0) {
									if (x[2] <= 99.5) {
										if (46.3(-0.0163*x[2]+0.117*x[3]-0.0695*x[5]+0.991)^2-0.972(+0.103*x[2]-0.303*x[3]+0.942*x[5]+0.104)^2+0.262(+0.243*x[2]+0.925*x[3]+0.28*x[5]-0.0856)^2 <= 0) {
											return 0.0f;
										}
										else {
											if (-20.7(-0.0264*x[2]+0.335*x[3]-0.0831*x[5]+0.938)^2+1.68(-0.113*x[2]+0.854*x[3]-0.376*x[5]-0.342)^2+0.65(+0.00284*x[2]-0.384*x[3]-0.922*x[5]+0.0555)^2 <= 0) {
												return 0.0f;
											}
											else {
												if (x[5] <= 3.0) {
													if (x[2] <= 67.5) {
														return 0.0f;
													}
													else {
														if (x[3] <= 7.0) {
															if (x[5] <= 1.0) {
																if (x[2] <= 78.5) {
																	return 0.0f;
																}
																else {
																	if (x[5] <= -1.0) {
																		if (-137(+0.00249*x[2]-1.03e-05*x[3]+0.00745*x[5]-1)^2-0.403(+0.0369*x[2]-0.392*x[3]+0.919*x[5]+0.00695)^2+0.103(-0.493*x[2]-0.807*x[3]-0.324*x[5]-0.00363)^2-0.0262(-0.869*x[2]+0.442*x[3]+0.223*x[5]-0.000508)^2 <= 0) {
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
																return 0.0f;
															}
															else {
																if (x[2] <= 88.5) {
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
													if (x[2] <= 75.5) {
														if (x[5] <= 5.0) {
															if (x[3] <= 7.0) {
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
															if (x[2] <= 60.5) {
																if (x[2] <= 22.5) {
																	return 0.0f;
																}
																else {
																	if (-23.8(-0.0134*x[2]+0.265*x[3]-0.123*x[5]+0.956)^2+1.71(-0.0872*x[2]+0.644*x[3]-0.71*x[5]-0.272)^2+0.119(+0.07*x[2]+0.717*x[3]+0.685*x[5]-0.11)^2 <= 0) {
																		return 0.0f;
																	}
																	else {
																		if (-26.1(-0.0134*x[2]+0.232*x[3]-0.113*x[5]+0.966)^2+1.45(-0.0947*x[2]+0.587*x[3]-0.77*x[5]-0.232)^2+0.0697(-0.143*x[2]+0.757*x[3]+0.628*x[5]-0.11)^2 <= 0) {
																			return 0.0f;
																		}
																		else {
																			if (x[2] <= 36.0) {
																				return 0.0f;
																			}
																			else {
																				if (x[2] <= 43.5) {
																					if (x[3] <= 7.0) {
																						if (x[2] <= 39.5) {
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
																					if (1.12(+0.00131*x[2]-0.151*x[3]+0.146*x[5]+0.978)^2-0.0651(-0.0483*x[2]-0.902*x[3]+0.381*x[5]-0.197)^2+0.0108(+0.126*x[2]+0.393*x[3]+0.908*x[5]-0.0752)^2 <= 0) {
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
											if (x[2] <= 120.5) {
												if (x[3] <= 7.0) {
													return 0.0f;
												}
												else {
													if (171(+0.00198*x[2]-5.43e-06*x[3]+0.00629*x[5]-1)^2+0.256(+0.0455*x[2]-0.47*x[3]+0.881*x[5]+0.00564)^2-0.0908(+0.434*x[2]+0.804*x[3]+0.407*x[5]+0.00341)^2+0.0158(+0.9*x[2]-0.364*x[3]-0.241*x[5]+0.000269)^2 <= 0) {
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
									if (x[5] <= 3.0) {
										if (12.5(-0.0373*x[2]+0.464*x[3]-0.127*x[5]-0.876)^2-4.64(-0.055*x[2]+0.85*x[3]-0.202*x[5]+0.483)^2+0.571(-0.0071*x[2]-0.239*x[3]-0.971*x[5]+0.0145)^2 <= 0) {
											if (-11.6(+0.0399*x[2]-0.484*x[3]+0.134*x[5]+0.864)^2+4.81(+0.0557*x[2]-0.839*x[3]+0.201*x[5]-0.504)^2-0.566(-0.00601*x[2]-0.242*x[3]-0.97*x[5]+0.0157)^2 <= 0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 131.5) {
													if (x[5] <= -1.0) {
														return 0.0f;
													}
													else {
														if (x[2] <= 111.5) {
															return 0.0f;
														}
														else {
															if (x[3] <= 11.0) {
																if (x[2] <= 122.5) {
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
															else {
																return 0.0f;
															}

														}

													}

												}
												else {
													if (-8.28(-0.0443*x[2]+0.475*x[3]-0.219*x[5]-0.851)^2+3.73(+0.0528*x[2]-0.799*x[3]+0.291*x[5]-0.524)^2-0.495(-0.0306*x[2]+0.361*x[3]+0.931*x[5]-0.0366)^2 <= 0) {
														if (x[2] <= 134.5) {
															return 0.0f;
														}
														else {
															if (-44.5(-0.0158*x[2]+0.0922*x[3]-0.0402*x[5]+0.995)^2+0.594(+0.057*x[2]+0.0506*x[3]+0.996*x[5]+0.0364)^2+0.114(+0.721*x[2]-0.689*x[3]-0.00899*x[5]+0.0749)^2-0.0939(-0.69*x[2]-0.717*x[3]+0.0738*x[5]+0.0585)^2 <= 0) {
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
											return 0.0f;
										}

									}
									else {
										if (x[2] <= 108.5) {
											if (x[2] <= 47.5) {
												return 0.0f;
											}
											else {
												if (x[3] <= 11.0) {
													if (x[5] <= 9.0) {
														if (-198(+0.00138*x[2]-7.83e-06*x[3]+0.00873*x[5]-1)^2+0.58(+0.0467*x[2]+0.288*x[3]+0.956*x[5]+0.00841)^2-0.0588(+0.314*x[2]-0.913*x[3]+0.26*x[5]+0.00271)^2+0.0101(+0.948*x[2]+0.288*x[3]-0.133*x[5]+0.000147)^2 <= 0) {
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
													if (-44.7(+0.0058*x[2]-0.16*x[3]+0.0515*x[5]+0.986)^2+1.84(+0.0226*x[2]-0.966*x[3]+0.195*x[5]-0.167)^2-0.33(+0.099*x[2]+0.202*x[3]+0.974*x[5]-0.0187)^2 <= 0) {
														if (x[3] <= 13.0) {
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
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (x[2] <= 123.5) {
												if (x[3] <= 11.0) {
													return 0.0f;
												}
												else {
													if (x[5] <= 5.0) {
														return 0.0f;
													}
													else {
														if (x[3] <= 13.0) {
															return 0.0f;
														}
														else {
															if (-247(-0.00118*x[2]+1.93e-06*x[3]-0.00506*x[5]+1)^2+0.19(-0.108*x[2]-0.433*x[3]-0.895*x[5]-0.00465)^2-0.0463(+0.273*x[2]-0.879*x[3]+0.392*x[5]+0.00231)^2+0.00477(-0.956*x[2]-0.202*x[3]+0.213*x[5]-5.47e-05)^2 <= 0) {
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
												if (x[3] <= 13.0) {
													return 0.0f;
												}
												else {
													if (x[5] <= 7.0) {
														if (x[2] <= 135.5) {
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
								if (38.4(+0.0217*x[2]-0.129*x[3]+0.0557*x[5]-0.99)^2+0.649(-0.0795*x[2]-0.986*x[3]+0.0609*x[5]+0.13)^2-0.609(-0.0297*x[2]-0.0654*x[3]-0.996*x[5]-0.0482)^2 <= 0) {
									return 0.0f;
								}
								else {
									if (x[2] <= 78.5) {
										if (-47.8(-0.018*x[2]+0.118*x[3]-0.0732*x[5]+0.99)^2+0.962(-0.135*x[2]+0.411*x[3]-0.894*x[5]-0.118)^2-0.127(+0.501*x[2]+0.807*x[3]+0.305*x[5]-0.065)^2+0.0428(-0.855*x[2]+0.406*x[3]+0.321*x[5]-0.0403)^2 <= 0) {
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
					if (x[3] <= 11.0) {
						return 0.0f;
					}
					else {
						if (x[5] <= -1.0) {
							if (x[2] <= 171.5) {
								if (x[2] <= 156.5) {
									return 0.0f;
								}
								else {
									if (x[5] <= -3.0) {
										if (257(-0.0013*x[2]+8.16e-07*x[3]-0.00284*x[5]+1)^2+0.109(+0.0885*x[2]-0.504*x[3]+0.859*x[5]+0.00256)^2-0.0498(-0.497*x[2]-0.77*x[3]-0.4*x[5]-0.00179)^2+0.012(+0.863*x[2]-0.392*x[3]-0.319*x[5]+0.000218)^2 <= 0) {
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
			if (x[3] <= 19.0) {
				if (x[2] <= 204.5) {
					if (x[5] <= 9.0) {
						if (x[2] <= 164.5) {
							if (-1.97(-0.0344*x[2]+0.253*x[3]-0.134*x[5]+0.958)^2-0.0656(+0.0304*x[2]-0.965*x[3]+0.0175*x[5]+0.258)^2+0.0232(+0.0639*x[2]+0.0537*x[3]+0.988*x[5]+0.127)^2 <= 0) {
								if (-3.88(+0.0251*x[2]-0.152*x[3]+0.0842*x[5]-0.984)^2-0.238(-0.06*x[2]+0.921*x[3]-0.345*x[5]-0.173)^2+0.0215(+0.0266*x[2]-0.353*x[3]-0.935*x[5]-0.0247)^2 <= 0) {
									if (x[2] <= 147.5) {
										if (x[2] <= 64.5) {
											if (-12.9(+0.0514*x[2]-0.343*x[3]+0.228*x[5]-0.91)^2+1.31(-0.0833*x[2]+0.584*x[3]-0.701*x[5]-0.401)^2-0.036(-0.166*x[2]-0.733*x[3]-0.651*x[5]+0.104)^2 <= 0) {
												if (x[5] <= -5.0) {
													if (9.45(-0.0323*x[2]+0.299*x[3]-0.495*x[5]+0.815)^2-4.96(-0.0445*x[2]+0.323*x[3]-0.75*x[5]-0.576)^2+0.114(+0.579*x[2]+0.745*x[3]+0.326*x[5]-0.0519)^2-0.0805(+0.813*x[2]-0.501*x[3]-0.293*x[5]+0.0379)^2 <= 0) {
														if (x[3] <= -5.0) {
															if (x[2] <= 16.0) {
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
														return -2.0f;
													}

												}
												else {
													if (30.2(+0.0161*x[2]-0.0618*x[3]+0.0625*x[5]-0.996)^2+0.255(+0.384*x[2]+0.828*x[3]-0.401*x[5]-0.0703)^2-0.231(-0.0625*x[2]+0.46*x[3]+0.885*x[5]+0.026)^2-0.0713(-0.921*x[2]+0.314*x[3]-0.226*x[5]-0.0485)^2 <= 0) {
														return 0.0f;
													}
													else {
														return -2.0f;
													}

												}

											}
											else {
												if (38.2(+0.00677*x[2]-0.00877*x[3]+0.0094*x[5]-1)^2-0.15(+0.479*x[2]-0.859*x[3]-0.182*x[5]+0.00906)^2+0.047(-0.565*x[2]-0.143*x[3]-0.813*x[5]-0.0102)^2+0.0339(+0.672*x[2]+0.492*x[3]-0.554*x[5]-0.00497)^2 <= 0) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[3] <= 5.0) {
												if (x[2] <= 68.5) {
													if (94.3(+0.00359*x[2]-8.02e-06*x[3]+0.00438*x[5]-1)^2+0.143(+0.35*x[2]-0.674*x[3]+0.65*x[5]+0.00411)^2-0.128(+0.525*x[2]+0.716*x[3]+0.46*x[5]+0.0039)^2+0.0187(-0.776*x[2]+0.181*x[3]+0.605*x[5]-0.000143)^2 <= 0) {
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
												if (x[2] <= 81.5) {
													return -2.0f;
												}
												else {
													if (x[3] <= 7.0) {
														if (x[2] <= 85.5) {
															if (122(-0.00275*x[2]+3.24e-06*x[3]-0.00344*x[5]+1)^2+0.101(-0.307*x[2]+0.653*x[3]-0.693*x[5]-0.00323)^2-0.0847(+0.539*x[2]+0.719*x[3]+0.439*x[5]+0.00299)^2+0.016(-0.785*x[2]+0.238*x[3]+0.572*x[5]-0.000187)^2 <= 0) {
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
														if (x[2] <= 103.5) {
															if (x[5] <= 7.0) {
																return -2.0f;
															}
															else {
																if (28(-0.0122*x[2]+0.0659*x[3]+0.00056*x[5]+0.998)^2-0.239(-0.198*x[2]+0.686*x[3]-0.698*x[5]-0.0474)^2+0.231(-0.0583*x[2]+0.701*x[3]+0.709*x[5]-0.0474)^2 <= 0) {
																	if (x[2] <= 97.0) {
																		if (x[2] <= 92.5) {
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
																	return -2.0f;
																}

															}

														}
														else {
															if (x[3] <= 9.0) {
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
															else {
																if (x[5] <= 1.0) {
																	if (x[5] <= -9.0) {
																		if (x[2] <= 125.5) {
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
																		if (-58.4(-0.00963*x[2]+0.116*x[3]-0.0217*x[5]-0.993)^2+1.3(+0.0482*x[2]-0.984*x[3]+0.122*x[5]-0.118)^2-0.58(-0.0217*x[2]-0.125*x[3]-0.992*x[5]+0.00726)^2 <= 0) {
																			return 0.0f;
																		}
																		else {
																			if (x[2] <= 136.5) {
																				if (-52.3(-0.0112*x[2]+0.126*x[3]-0.0295*x[5]-0.991)^2+1.34(+0.0496*x[2]-0.982*x[3]+0.129*x[5]-0.129)^2-0.594(-0.0176*x[2]-0.133*x[3]-0.991*x[5]+0.0127)^2 <= 0) {
																					return 0.0f;
																				}
																				else {
																					if (-46.6(-0.0135*x[2]+0.14*x[3]-0.0299*x[5]-0.99)^2+1.42(+0.0566*x[2]-0.98*x[3]+0.127*x[5]-0.143)^2-0.573(-0.021*x[2]-0.131*x[3]-0.991*x[5]+0.0117)^2 <= 0) {
																						if (-54.1(-0.011*x[2]+0.125*x[3]-0.0267*x[5]-0.992)^2+1.35(+0.0503*x[2]-0.982*x[3]+0.128*x[5]-0.127)^2-0.582(-0.0203*x[2]-0.132*x[3]-0.991*x[5]+0.0104)^2 <= 0) {
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
																				if (75.9(+0.00957*x[2]-0.0452*x[3]+0.0106*x[5]-0.999)^2-0.743(+0.0133*x[2]+0.00495*x[3]+1*x[5]+0.0105)^2+0.0956(+0.417*x[2]+0.908*x[3]-0.00964*x[5]-0.0372)^2-0.0327(+0.909*x[2]-0.416*x[3]-0.0103*x[5]+0.0274)^2 <= 0) {
																					return 0.0f;
																				}
																				else {
																					return -2.0f;
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

													}

												}

											}

										}

									}
									else {
										if (-48.8(-0.0172*x[2]+0.0952*x[3]-0.0385*x[5]+0.995)^2+0.648(+0.101*x[2]-0.184*x[3]+0.976*x[5]+0.0572)^2+0.19(+0.516*x[2]-0.826*x[3]-0.214*x[5]+0.0797)^2-0.0536(-0.851*x[2]-0.524*x[3]-0.0127*x[5]+0.035)^2 <= 0) {
											if (x[3] <= 13.0) {
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
												if (x[5] <= -3.0) {
													return -2.0f;
												}
												else {
													if (-110(+0.0127*x[2]-0.0397*x[3]+0.0243*x[5]-0.999)^2+0.552(+0.0968*x[2]-0.0576*x[3]+0.993*x[5]+0.0277)^2-0.275(-0.273*x[2]-0.961*x[3]-0.03*x[5]+0.034)^2+0.0372(-0.957*x[2]+0.268*x[3]+0.109*x[5]-0.0201)^2 <= 0) {
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
									if (-57.2(+0.00762*x[2]-0.0404*x[3]+0.0208*x[5]-0.999)^2-0.319(+0.0693*x[2]+0.688*x[3]-0.722*x[5]-0.0423)^2+0.15(+0.387*x[2]-0.685*x[3]-0.617*x[5]+0.0178)^2-0.0151(+0.919*x[2]+0.237*x[3]+0.314*x[5]+0.00396)^2 <= 0) {
										if (-42.2(+0.00976*x[2]-0.0357*x[3]+0.0214*x[5]-0.999)^2+0.218(+0.302*x[2]-0.846*x[3]-0.439*x[5]+0.0238)^2-0.138(-0.0222*x[2]+0.454*x[3]-0.89*x[5]-0.0355)^2-0.0157(-0.953*x[2]-0.279*x[3]-0.118*x[5]-0.00188)^2 <= 0) {
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
								if (-60.1(+0.00686*x[2]-0.0529*x[3]+0.0186*x[5]-0.998)^2-0.391(+0.0705*x[2]+0.816*x[3]-0.571*x[5]-0.0534)^2+0.0802(+0.588*x[2]-0.496*x[3]-0.638*x[5]+0.0184)^2-0.0263(+0.806*x[2]+0.291*x[3]+0.516*x[5]-0.000271)^2 <= 0) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}

						}
						else {
							if (x[5] <= 5.0) {
								if (x[3] <= 15.0) {
									if (x[5] <= -1.0) {
										if (x[2] <= 173.5) {
											if (3.48e+03(+0.00397*x[2]+0.0244*x[3]+0.000523*x[5]-1)^2-8.66(+0.0755*x[2]-0.997*x[3]+0.00676*x[5]-0.024)^2+0.617(-0.0548*x[2]-0.0109*x[3]-0.998*x[5]-0.00101)^2 <= 0) {
												if (x[3] <= 13.0) {
													if (x[2] <= 172.5) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
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
										else {
											if (12.1(-0.0324*x[2]+0.44*x[3]-0.129*x[5]+0.888)^2-2.68(+0.0753*x[2]-0.829*x[3]+0.311*x[5]+0.458)^2-0.512(+0.0129*x[2]-0.335*x[3]-0.942*x[5]+0.0301)^2 <= 0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 198.5) {
													if (x[3] <= 13.0) {
														return 0.0f;
													}
													else {
														if (x[2] <= 183.5) {
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
																if (-296(-0.00114*x[2]+7.81e-07*x[3]-0.00311*x[5]+1)^2-0.317(+8.12e-06*x[2]-0.203*x[3]+0.979*x[5]+0.00304)^2+0.0331(+0.622*x[2]+0.767*x[3]+0.159*x[5]+0.0012)^2-0.0173(-0.783*x[2]+0.609*x[3]+0.126*x[5]-0.000499)^2 <= 0) {
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
													if (x[2] <= 199.5) {
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
								else {
									if (1.45e+03(+0.00306*x[2]+0.024*x[3]+0.0167*x[5]-1)^2-3.62(+0.0727*x[2]-0.897*x[3]+0.436*x[5]-0.014)^2+0.16(-0.0446*x[2]+0.433*x[3]+0.9*x[5]+0.0253)^2 <= 0) {
										if (-79.8(-0.00685*x[2]+0.0904*x[3]-0.0229*x[5]-0.996)^2+1.14(+0.0416*x[2]-0.982*x[3]+0.16*x[5]-0.0932)^2-0.526(+0.00772*x[2]+0.162*x[3]+0.987*x[5]-0.008)^2 <= 0) {
											if (x[2] <= 192.5) {
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
											if (x[3] <= 17.0) {
												if (x[2] <= 200.5) {
													if (x[5] <= -3.0) {
														return -2.0f;
													}
													else {
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
										if (-93.8(-0.00511*x[2]+0.0779*x[3]-0.0209*x[5]-0.997)^2+1.06(+0.0345*x[2]-0.982*x[3]+0.17*x[5]-0.0805)^2-0.52(+0.00602*x[2]+0.171*x[3]+0.985*x[5]-0.00736)^2 <= 0) {
											return 0.0f;
										}
										else {
											if (x[2] <= 203.5) {
												if (x[5] <= -5.0) {
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
											else {
												if (x[5] <= -1.0) {
													return 0.0f;
												}
												else {
													if (x[3] <= 17.0) {
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
								if (77.1(-0.00503*x[2]+0.0953*x[3]-0.0259*x[5]-0.995)^2-1.18(+0.029*x[2]-0.985*x[3]+0.142*x[5]-0.0981)^2+0.265(-0.0677*x[2]-0.145*x[3]-0.987*x[5]+0.0122)^2 <= 0) {
									if (-2.69e+03(+0.00323*x[2]-0.00114*x[3]+0.0122*x[5]-1)^2+5.55(+0.0627*x[2]-0.262*x[3]-0.963*x[5]-0.0112)^2-0.821(+0.462*x[2]-0.847*x[3]+0.261*x[5]+0.00563)^2+0.156(+0.884*x[2]+0.462*x[3]-0.0681*x[5]+0.0015)^2 <= 0) {
										if (3.52(-0.0038*x[2]+0.0716*x[3]-0.0207*x[5]-0.997)^2-0.0337(+0.0286*x[2]-0.991*x[3]+0.11*x[5]-0.0735)^2+0.00948(+0.0657*x[2]+0.113*x[3]+0.991*x[5]-0.0127)^2 <= 0) {
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
						if (66.7(-0.00862*x[2]+0.11*x[3]+0.00272*x[5]-0.994)^2-1.54(-0.0464*x[2]+0.989*x[3]-0.084*x[5]+0.11)^2+0.58(+0.0313*x[2]+0.0847*x[3]+0.996*x[5]+0.0118)^2 <= 0) {
							if (8.45(+0.0727*x[2]-0.366*x[3]+0.126*x[5]+0.919)^2-2.28(-0.11*x[2]+0.895*x[3]-0.184*x[5]+0.39)^2+0.524(-0.0287*x[2]+0.217*x[3]+0.975*x[5]-0.0453)^2 <= 0) {
								return -2.0f;
							}
							else {
								if (x[5] <= 15.0) {
									if (x[2] <= 129.5) {
										if (x[2] <= 85.5) {
											if (44.3(-0.0141*x[2]+0.0853*x[3]-0.119*x[5]+0.989)^2-1.36(-0.0853*x[2]+0.345*x[3]-0.924*x[5]-0.142)^2+0.421(+0.0472*x[2]+0.935*x[3]+0.35*x[5]-0.0377)^2 <= 0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 79.5) {
													if (x[5] <= 13.0) {
														return -2.0f;
													}
													else {
														if (x[3] <= 17.0) {
															if (x[2] <= 56.5) {
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

												}
												else {
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

											}

										}
										else {
											if (94.5(-0.00346*x[2]+0.0824*x[3]-0.0352*x[5]-0.996)^2-1.19(-0.0168*x[2]+0.97*x[3]-0.225*x[5]+0.0882)^2+0.314(+0.0772*x[2]+0.228*x[3]+0.971*x[5]-0.0157)^2 <= 0) {
												if (x[5] <= 13.0) {
													if (x[2] <= 100.5) {
														return -2.0f;
													}
													else {
														if (-89(+0.00272*x[2]-0.0732*x[3]+0.0195*x[5]+0.997)^2+0.884(+0.0139*x[2]-0.989*x[3]+0.124*x[5]-0.0751)^2-0.157(-0.316*x[2]-0.123*x[3]-0.941*x[5]+0.0102)^2+0.0172(+0.949*x[2]-0.0263*x[3]-0.315*x[5]+0.00163)^2 <= 0) {
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
									if (-16.7(-0.00828*x[2]+0.339*x[3]-0.311*x[5]+0.888)^2+4.41(+0.0177*x[2]-0.589*x[3]+0.665*x[5]+0.458)^2 <= 0) {
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

							}

						}
						else {
							if (x[2] <= 159.5) {
								if (101(-0.00675*x[2]+0.105*x[3]-0.00583*x[5]-0.994)^2-1.8(-0.0442*x[2]+0.983*x[3]-0.141*x[5]+0.105)^2+0.549(+0.0271*x[2]+0.142*x[3]+0.989*x[5]+0.00898)^2 <= 0) {
									return 0.0f;
								}
								else {
									if (110(-0.0052*x[2]+0.0915*x[3]-0.000924*x[5]-0.996)^2-1.6(-0.0315*x[2]+0.98*x[3]-0.176*x[5]+0.0903)^2+0.431(+0.0429*x[2]+0.177*x[3]+0.983*x[5]+0.0151)^2 <= 0) {
										if (93.4(-0.00583*x[2]+0.0939*x[3]+0.000745*x[5]-0.996)^2-1.37(+0.0338*x[2]-0.991*x[3]+0.088*x[5]-0.0936)^2+0.551(-0.0384*x[2]-0.0888*x[3]-0.995*x[5]-0.0089)^2 <= 0) {
											if (79.9(-0.00732*x[2]+0.107*x[3]-0.00404*x[5]-0.994)^2-1.45(+0.0392*x[2]-0.989*x[3]+0.0894*x[5]-0.107)^2+0.564(-0.0341*x[2]-0.0906*x[3]-0.995*x[5]-0.00543)^2 <= 0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 150.5) {
													if (x[2] <= 134.5) {
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
					if (-51(+0.0059*x[2]-0.109*x[3]+0.0473*x[5]+0.993)^2+1.22(+0.0406*x[2]-0.95*x[3]+0.287*x[5]-0.118)^2-0.493(+0.0129*x[2]-0.291*x[3]-0.957*x[5]+0.0137)^2 <= 0) {
						return 0.0f;
					}
					else {
						if (32.3(-0.0308*x[2]+0.34*x[3]-0.0613*x[5]+0.938)^2-7.89(-0.0716*x[2]+0.92*x[3]-0.166*x[5]-0.347)^2 <= 0) {
							if (x[3] <= 17.0) {
								if (x[2] <= 228.5) {
									if (-51.6(-0.00841*x[2]+0.0854*x[3]-0.0277*x[5]+0.996)^2+0.551(+0.0296*x[2]+0.0438*x[3]+0.998*x[5]+0.0243)^2+0.103(+0.415*x[2]-0.906*x[3]+0.0255*x[5]+0.0819)^2-0.0139(-0.909*x[2]-0.413*x[3]+0.0444*x[5]+0.029)^2 <= 0) {
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
								if (x[5] <= -1.0) {
									if (x[2] <= 228.5) {
										if (x[2] <= 213.5) {
											return -2.0f;
										}
										else {
											if (x[5] <= -5.0) {
												if (x[2] <= 225.5) {
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
												if (x[2] <= 220.5) {
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
										if (x[2] <= 243.5) {
											if (-387(-0.000892*x[2]+7.68e-08*x[3]+0.000765*x[5]+1)^2-0.185(-0.00462*x[2]-0.0882*x[3]-0.996*x[5]+0.000758)^2+0.0208(+0.708*x[2]+0.703*x[3]-0.0655*x[5]+0.000682)^2-0.0178(-0.706*x[2]+0.706*x[3]-0.0592*x[5]-0.000585)^2 <= 0) {
												return -2.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[2] <= 255.5) {
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

									}

								}
								else {
									if (x[5] <= 1.0) {
										if (x[2] <= 234.5) {
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
							if (x[5] <= 3.0) {
								return 0.0f;
							}
							else {
								if (-366(-0.000899*x[2]+2.67e-07*x[3]-0.002*x[5]+1)^2+0.159(+0.0572*x[2]+0.254*x[3]+0.966*x[5]+0.00198)^2-0.0222(-0.576*x[2]+0.799*x[3]-0.176*x[5]-0.000869)^2+0.013(-0.816*x[2]-0.546*x[3]+0.192*x[5]-0.000349)^2 <= 0) {
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
				if (-409(+0.00101*x[2]-1.14e-06*x[3]+0.00467*x[5]-1)^2+0.508(+0.0173*x[2]+0.185*x[3]+0.983*x[5]+0.0046)^2 <= 0) {
					if (x[2] <= 236.5) {
						if (x[5] <= 3.0) {
							if (x[2] <= 224.5) {
								return -2.0f;
							}
							else {
								if (x[5] <= 1.0) {
									if (x[2] <= 235.5) {
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
							if (x[2] <= 211.5) {
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
									if (x[2] <= 179.5) {
										if (-487(-0.000565*x[2]+2.08e-06*x[3]-0.00642*x[5]+1)^2+0.502(-0.0414*x[2]-0.298*x[3]-0.954*x[5]-0.00614)^2 <= 0) {
											if (x[5] <= 9.0) {
												return -2.0f;
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
																	if (455(-0.00038*x[2]+3.04e-06*x[3]-0.00779*x[5]+1)^2-0.363(-0.0844*x[2]-0.439*x[3]-0.895*x[5]-0.007)^2+0.0875(-0.0614*x[2]-0.894*x[3]+0.444*x[5]+0.00344)^2 <= 0) {
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
							else {
								return 0.0f;
							}

						}

					}
					else {
						if (x[5] <= -1.0) {
							if (397(-0.000867*x[2]+6.87e-07*x[3]-0.0036*x[5]+1)^2-0.173(+0.0675*x[2]+0.388*x[3]+0.919*x[5]+0.00337)^2+0.0351(-0.359*x[2]+0.869*x[3]-0.34*x[5]-0.00154)^2-0.0061(-0.931*x[2]-0.307*x[3]+0.198*x[5]-9.44e-05)^2 <= 0) {
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
					return 0.0f;
				}

			}

		}

	}

}