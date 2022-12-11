#include <stdio.h>

void classify(const float x[], float result[]);

int main() {
    float x[] = {-0.05f,-1.4f,-0.05f,-0.3f,-1.2f,-0.25f};
    float result[2];
    classify(x, result);
    return 0;
}

void classify(const float x[], float result[]) {
	if (x[3] <= -0.05) {
		if (x[4] <= -0.275) {
			if (x[4] <= -0.775) {
				if (x[4] <= -0.975) {
					if (-29.730805229350057*x[0]+0.06749135263139942*x[1]-0.10936534530817346*x[2]-16.098174020960776*x[3]+0.12169043097337924*x[4]-0.16717928183629654*x[5]-5.528358809520956 <= 0) {
						if (x[1] <= -1.325) {
							if (x[1] <= -1.375) {
								if (x[4] <= -1.125) {
									result[0] = 20.0f; result[1] = 0.0f;
								}
								else {
									result[0] = 15.0f; result[1] = 0.0f;
								}

							}
							else {
								if (0.5044708805315344*x[0]-3.4033233620953296*x[1]-1.3261854774907658e-17*x[2]-2.84351563199636*x[3]+6.964361874810346*x[4]-0.038784202052353355*x[5]+2.52098022369666 <= 0) {
									if (x[3] <= -0.15) {
										if (x[4] <= -1.175) {
											result[0] = 15.0f; result[1] = 0.0f;
										}
										else {
											if (x[3] <= -0.25) {
												result[0] = 10.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 10.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										result[0] = 15.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[4] <= -1.075) {
										if (x[3] <= -0.25) {
											result[0] = 10.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 10.0f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 10.0f; result[1] = 0.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= -1.075) {
								if (0.0847383220608896*x[0]+5.520908935912629*x[1]+2.4673994528969236e-16*x[2]-10.36502032302407*x[3]+3.7416971906781837*x[4]-0.045809797967481275*x[5]+9.23059461810068 <= 0) {
									if (x[1] <= -1.225) {
										if (-1.563312943490394*x[1]-1.7234995258704083e-16*x[2]-6.438058011778087*x[3]+4.702290921257879*x[4]-0.040466747212803696*x[5]+2.694295174780708 <= 0) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -1.275) {
												if (x[3] <= -0.15) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -1.075) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (x[4] <= -1.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -1.175) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= -1.225) {
										if (x[3] <= -0.25) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= -1.075) {
												if (x[1] <= -1.275) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -1.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (x[5] <= 0.125) {
									if (x[5] <= -0.125) {
										if (x[1] <= 0.075) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= -1.125) {
												if (x[1] <= 0.125) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[1] <= 0.125) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[4] <= -1.075) {
														if (x[1] <= 0.175) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (-0.10470715702154476*x[0]+8.496891608921388*x[1]-2.0828244559349924*x[2]-7.5611583089214065*x[3]+3.468711577822584*x[4]+0.0846399967844373*x[5]+0.3385599871377492 <= 0) {
										if (x[1] <= 0.125) {
											if (x[2] <= -0.025) {
												if (x[1] <= 0.075) {
													if (x[1] <= 0.025) {
														result[0] = 20.0f; result[1] = 0.0f;
													}
													else {
														if (x[3] <= -0.25) {
															if (x[4] <= -1.175) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 10.0f; result[1] = 0.0f;
															}

														}
														else {
															if (-0.04413811152238341*x[1]+0.04413811152238341*x[2]+1.6803550215686776*x[3]-1.0991953099176044*x[4]-0.220690554323373*x[5]-0.882762217293492 <= 0) {
																if (x[4] <= -1.025) {
																	result[0] = 10.0f; result[1] = 0.0f;
																}
																else {
																	if (x[3] <= -0.15) {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[3] <= -0.15) {
														if (x[3] <= -0.25) {
															if (x[4] <= -1.075) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= -1.075) {
																if (x[4] <= -1.175) {
																	result[0] = 10.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[4] <= -1.075) {
															result[0] = 15.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 0.075) {
													if (x[2] <= 0.025) {
														if (x[4] <= -1.125) {
															result[0] = 20.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 15.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 20.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -1.075) {
															if (-0.08904343685410056*x[0]-0.025271407717433577*x[1]+1.6592641615918273*x[3]-0.6562112456148401*x[4]-0.063178518352151*x[5]-0.252714073408604 <= 0) {
																result[0] = 10.0f; result[1] = 0.0f;
															}
															else {
																if (x[3] <= -0.15) {
																	if (x[4] <= -1.175) {
																		result[0] = 15.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 15.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															result[0] = 10.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[4] <= -1.125) {
															result[0] = 20.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 15.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (-0.10542111384534752*x[0]+5.744704115025414*x[1]-1.4772272474076595*x[2]-0.8768308596972303*x[3]+1.797098343353523*x[4]+0.19371972641201865*x[5]+0.7748789056480746 <= 0) {
												if (x[2] <= 0.025) {
													if (x[3] <= -0.15) {
														if (x[4] <= -1.175) {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= 0.175) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[4] <= -1.075) {
															if (x[4] <= -1.175) {
																if (x[1] <= 0.175) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[4] <= -1.125) {
																	if (x[1] <= 0.175) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -1.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[3] <= -0.15) {
														if (x[4] <= -1.125) {
															if (x[1] <= 0.175) {
																if (x[4] <= -1.175) {
																	if (x[3] <= -0.25) {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= -1.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 0.175) {
															if (x[4] <= -1.025) {
																if (x[4] <= -1.125) {
																	if (x[4] <= -1.175) {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[3] <= -0.15) {
													if (x[4] <= -1.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -1.075) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 0.275) {
														if (x[4] <= -1.125) {
															if (x[4] <= -1.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= 0.225) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -1.075) {
																	if (x[1] <= 0.225) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[2] <= -0.025) {
															if (x[4] <= -1.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[1] <= 0.425) {
											if (x[3] <= -0.15) {
												if (x[1] <= 0.125) {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 10.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= 0.175) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -1.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[4] <= -1.125) {
													if (x[1] <= 0.375) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 0.325) {
														if (x[4] <= -1.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[1] <= -1.325) {
							if (x[1] <= -1.375) {
								if (x[4] <= -1.125) {
									result[0] = 20.0f; result[1] = 0.0f;
								}
								else {
									result[0] = 15.0f; result[1] = 0.0f;
								}

							}
							else {
								if (x[4] <= -1.175) {
									result[0] = 15.0f; result[1] = 0.0f;
								}
								else {
									result[0] = 15.0f; result[1] = 0.0f;
								}

							}

						}
						else {
							if (x[5] <= 0.125) {
								if (x[5] <= -0.125) {
									if (x[1] <= 0.075) {
										result[0] = 10.0f; result[1] = 10.0f;
									}
									else {
										if (x[4] <= -1.125) {
											if (x[1] <= 0.125) {
												if (x[2] <= 0.025) {
													result[0] = 10.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 10.0f; result[1] = 10.0f;
												}

											}
											else {
												result[0] = 10.0f; result[1] = 10.0f;
											}

										}
										else {
											if (x[1] <= 0.125) {
												if (x[2] <= 0.025) {
													result[0] = 10.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 10.0f; result[1] = 10.0f;
												}

											}
											else {
												if (x[4] <= -1.075) {
													if (x[1] <= 0.175) {
														result[0] = 10.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 10.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 10.0f; result[1] = 10.0f;
												}

											}

										}

									}

								}
								else {
									result[0] = 10.0f; result[1] = 10.0f;
								}

							}
							else {
								if (0.005188508571830087*x[0]+5.434931120482672*x[1]-0.3412319458525379*x[2]+0.03113105220413737*x[3]+0.5702687563514817*x[4]-0.025942542472581043*x[5]-0.10377016989032417 <= 0) {
									if (x[2] <= 0.025) {
										if (x[1] <= 0.075) {
											if (x[2] <= -0.025) {
												if (x[1] <= 0.025) {
													result[0] = 20.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -1.175) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 15.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[4] <= -1.125) {
													result[0] = 20.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[4] <= -1.075) {
												if (x[4] <= -1.175) {
													if (x[2] <= -0.025) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 15.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[2] <= -0.025) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 0.125) {
											if (x[1] <= 0.075) {
												result[0] = 20.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= -1.125) {
													result[0] = 20.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											result[0] = 15.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[1] <= 0.175) {
										if (x[4] <= -1.175) {
											result[0] = 10.0f; result[1] = 10.0f;
										}
										else {
											if (x[2] <= 0.025) {
												result[0] = 10.0f; result[1] = 10.0f;
											}
											else {
												if (x[4] <= -1.025) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 10.0f; result[1] = 10.0f;
												}

											}

										}

									}
									else {
										result[0] = 10.0f; result[1] = 10.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (-28.171910029114102*x[0]+0.06988293947210238*x[1]-0.10559769328084107*x[2]-15.513402474468261*x[3]+0.19756399697059368*x[4]-0.19142190453669491*x[5]-5.283290016478409 <= 0) {
						if (x[1] <= -1.325) {
							if (x[4] <= -0.875) {
								if (x[1] <= -1.375) {
									result[0] = 10.0f; result[1] = 0.0f;
								}
								else {
									if (x[3] <= -0.25) {
										result[0] = 5.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 5.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								result[0] = 5.0f; result[1] = 0.0f;
							}

						}
						else {
							if (x[1] <= -1.075) {
								if (0.13339107896273536*x[0]+5.144770081207158*x[1]-7.274298270522786e-17*x[2]-9.756881825506902*x[3]+3.80579162468005*x[4]-0.04517184143754989*x[5]+7.983763774472729 <= 0) {
									if (0.06031923721928415*x[0]-4.585150204396722*x[1]-1.0659814605725849e-16*x[2]+6.617593354296837*x[3]-1.2191109842421057*x[4]+0.008392119541120508*x[5]-6.141651124318357 <= 0) {
										if (x[1] <= -1.175) {
											if (x[1] <= -1.225) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= -0.875) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[4] <= -0.875) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[1] <= -1.225) {
										if (x[3] <= -0.25) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= -0.825) {
												if (x[1] <= -1.275) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.875) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (x[5] <= 0.125) {
									if (x[5] <= -0.125) {
										if (x[1] <= 0.075) {
											if (x[1] <= 0.025) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= -0.825) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[3] <= -0.15) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= 0.125) {
												if (x[2] <= 0.025) {
													if (x[4] <= -0.875) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[3] <= -0.15) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.175) {
													if (x[4] <= -0.825) {
														if (x[3] <= -0.15) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[4] <= -0.875) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (0.04979025149715127*x[0]+8.099961654838253*x[1]-2.091446480648106*x[2]-6.921008941286852*x[3]+3.850656137172588*x[4]+0.013941021773904341*x[5]+0.055764087095617365 <= 0) {
										if (x[1] <= 0.125) {
											if (x[4] <= -0.875) {
												if (x[3] <= -0.25) {
													if (x[1] <= 0.075) {
														if (x[2] <= -0.025) {
															if (x[1] <= 0.025) {
																if (x[4] <= -0.925) {
																	result[0] = 20.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 15.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 10.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.925) {
																	result[0] = 20.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 15.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 10.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[1] <= 0.075) {
															if (x[2] <= -0.025) {
																if (x[1] <= 0.025) {
																	result[0] = 20.0f; result[1] = 0.0f;
																}
																else {
																	if (x[3] <= -0.15) {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= -0.925) {
																			result[0] = 5.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 5.0f; result[1] = 0.0f;
																		}

																	}

																}

															}
															else {
																if (x[3] <= -0.15) {
																	result[0] = 10.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= -0.925) {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[2] <= -0.025) {
																if (x[3] <= -0.15) {
																	if (x[4] <= -0.925) {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 0.075) {
															result[0] = 20.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 10.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 0.075) {
													if (x[2] <= 0.025) {
														if (x[1] <= 0.025) {
															if (x[4] <= -0.825) {
																if (x[3] <= -0.25) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 20.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 15.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[2] <= -0.025) {
														if (x[3] <= -0.15) {
															if (x[3] <= -0.25) {
																if (x[4] <= -0.825) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= -0.825) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[3] <= -0.15) {
												if (x[2] <= 0.025) {
													if (x[4] <= -0.925) {
														if (x[1] <= 0.175) {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[3] <= -0.25) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.875) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= 0.175) {
																	if (x[2] <= -0.025) {
																		if (x[4] <= -0.825) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[1] <= 0.175) {
														if (x[3] <= -0.25) {
															if (x[4] <= -0.925) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.875) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[4] <= -0.925) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[4] <= -0.825) {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (-2.5790742328464558*x[1]-0.03420440140226475*x[2]+0.078164522750015*x[3]-1.589249580356787*x[4]-0.19541130396320003*x[5]-0.7816452158528001 <= 0) {
													if (x[2] <= 0.025) {
														if (x[1] <= 0.275) {
															if (x[4] <= -0.875) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= 0.225) {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= -0.825) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (1.1754980519744371*x[1]+0.01206938998309599*x[2]-0.02413877996619198*x[3]+0.6715602970266932*x[4]+0.06034694901624597*x[5]+0.24138779606498387 <= 0) {
															if (x[1] <= 0.225) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.875) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[4] <= -0.875) {
																if (x[1] <= 0.325) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 0.175) {
														if (x[4] <= -0.925) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 0.425) {
											if (x[3] <= -0.15) {
												if (x[1] <= 0.175) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[4] <= -0.875) {
													if (x[1] <= 0.375) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[1] <= -1.325) {
							if (x[1] <= -1.375) {
								if (x[4] <= -0.875) {
									result[0] = 15.0f; result[1] = 0.0f;
								}
								else {
									result[0] = 15.0f; result[1] = 0.0f;
								}

							}
							else {
								result[0] = 15.0f; result[1] = 0.0f;
							}

						}
						else {
							if (x[5] <= 0.125) {
								if (x[5] <= -0.125) {
									if (x[1] <= 0.075) {
										result[0] = 5.0f; result[1] = 10.0f;
									}
									else {
										if (x[1] <= 0.125) {
											if (x[2] <= 0.025) {
												if (x[4] <= -0.875) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}
											else {
												result[0] = 5.0f; result[1] = 10.0f;
											}

										}
										else {
											if (x[1] <= 0.175) {
												if (x[4] <= -0.825) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}
											else {
												if (x[4] <= -0.875) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}

										}

									}

								}
								else {
									result[0] = 5.0f; result[1] = 10.0f;
								}

							}
							else {
								if (0.011692086589260502*x[0]+5.143273962475437*x[1]-0.3952216733327029*x[2]+0.07015252127781584*x[3]+0.5448630214252601*x[4]-0.05846043207517772*x[5]-0.23384172830071087 <= 0) {
									if (x[1] <= 0.125) {
										if (x[1] <= 0.075) {
											if (x[4] <= -0.925) {
												if (x[2] <= -0.025) {
													if (x[1] <= 0.025) {
														result[0] = 20.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 15.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[2] <= 0.025) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 20.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (-0.00039326116424658877*x[0]-0.29961021509489816*x[1]+0.29125876690885455*x[2]-0.002359567044080844*x[3]-0.0064283144307809206*x[4]+0.0019663057919330064*x[5]+0.007865223167732025 <= 0) {
													if (x[1] <= 0.025) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.875) {
															if (x[2] <= -0.025) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 15.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[2] <= 0.025) {
												if (x[4] <= -0.825) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= -0.025) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 15.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[4] <= -0.875) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[2] <= 0.025) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[4] <= -0.925) {
												result[0] = 10.0f; result[1] = 10.0f;
											}
											else {
												result[0] = 10.0f; result[1] = 10.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 0.175) {
										if (x[2] <= 0.025) {
											if (x[4] <= -0.925) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
												result[0] = 5.0f; result[1] = 10.0f;
											}

										}
										else {
											result[0] = 5.0f; result[1] = 10.0f;
										}

									}
									else {
										result[0] = 5.0f; result[1] = 10.0f;
									}

								}

							}

						}

					}

				}

			}
			else {
				if (x[4] <= -0.525) {
					if (-28.987584801845006*x[0]+0.08607692678977884*x[1]-0.10634599107069329*x[2]-15.7287642343576*x[3]-0.009222584005903575*x[4]-0.17032123750199007*x[5]-5.563937121415542 <= 0) {
						if (x[1] <= -1.325) {
							if (x[1] <= -1.425) {
								if (x[4] <= -0.625) {
									result[0] = 20.0f; result[1] = 0.0f;
								}
								else {
									result[0] = 15.0f; result[1] = 0.0f;
								}

							}
							else {
								if (x[4] <= -0.725) {
									result[0] = 5.0f; result[1] = 0.0f;
								}
								else {
									if (x[3] <= -0.15) {
										if (x[1] <= -1.375) {
											if (x[4] <= -0.625) {
												if (x[3] <= -0.25) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[4] <= -0.625) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (x[1] <= -1.375) {
											if (x[4] <= -0.625) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[4] <= -0.625) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[5] <= 0.125) {
								if (x[1] <= -1.175) {
									if (0.00017950028510244553*x[0]-0.9556020690297694*x[1]-6.721973169465164e-17*x[2]-10.239293055950139*x[3]+6.207384631978724*x[4]-0.01678548039987767*x[5]+1.7971722503573693 <= 0) {
										if (2.5417994863752105*x[1]+9.864727706604659e-17*x[2]-0.4171547893856239*x[3]+1.5267052870651576*x[4]-0.09480689050095914*x[5]+4.171547831695463 <= 0) {
											if (x[1] <= -1.275) {
												if (x[4] <= -0.725) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[3] <= -0.15) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= -0.625) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (-0.026985396421178802*x[0]-2.2068171838839277*x[1]-1.6880143327102686*x[2]-0.1754665090166126*x[3]-0.9534239305063551*x[4]+14.646190408563745*x[5]+3.3824049556628184 <= 0) {
										if (x[1] <= 0.175) {
											if (x[4] <= -0.625) {
												if (x[3] <= -0.15) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[1] <= 0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[3] <= -0.15) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[4] <= -0.625) {
												result[0] = 0.0f; result[1] = 10.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 10.0f;
											}

										}

									}
									else {
										if (x[5] <= -0.125) {
											if (-0.018440863415997297*x[0]-9.970103469511528*x[1]+2.2697131883733577*x[2]-0.3284277034558641*x[3]-1.8786829078377312*x[4]+0.2400107371976487*x[5]-0.9600429487905948 <= 0) {
												if (x[4] <= -0.625) {
													if (x[1] <= 0.125) {
														if (x[1] <= 0.075) {
															if (x[4] <= -0.725) {
																if (x[3] <= -0.15) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																if (x[4] <= -0.725) {
																	if (x[3] <= -0.15) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[3] <= -0.15) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 0.075) {
														if (x[2] <= 0.025) {
															if (x[1] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= -0.025) {
														if (x[4] <= -0.725) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[1] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.725) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}
							else {
								if (-0.20883590531551344*x[0]+8.912991976518336*x[1]-1.8488240804657998*x[2]-4.254339880623432*x[3]+3.683506959620024*x[4]-0.005792515717672938*x[5]-0.023170062870691753 <= 0) {
									if (x[1] <= 0.125) {
										if (x[1] <= 0.025) {
											if (x[4] <= -0.625) {
												if (x[4] <= -0.725) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= -0.025) {
														result[0] = 20.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															if (x[3] <= -0.15) {
																if (x[3] <= -0.25) {
																	if (x[4] <= -0.675) {
																		result[0] = 15.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 15.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[4] <= -0.675) {
																	result[0] = 20.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 15.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															result[0] = 20.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -0.075) {
													result[0] = 20.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= -0.025) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															if (x[4] <= -0.575) {
																if (x[3] <= -0.25) {
																	result[0] = 10.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 15.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[3] <= -0.15) {
																	result[0] = 10.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															result[0] = 15.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[4] <= -0.625) {
												if (x[4] <= -0.725) {
													if (x[2] <= -0.025) {
														if (x[1] <= 0.075) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 0.075) {
															if (x[2] <= 0.025) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 0.075) {
														if (x[2] <= 0.025) {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[3] <= -0.15) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= -0.675) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[3] <= -0.25) {
																if (x[4] <= -0.675) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[3] <= -0.15) {
															if (x[4] <= -0.675) {
																if (x[3] <= -0.25) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[2] <= -0.025) {
																	if (x[3] <= -0.25) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[4] <= -0.675) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= 0.075) {
													if (x[3] <= -0.15) {
														if (x[2] <= 0.025) {
															if (x[2] <= -0.025) {
																if (x[4] <= -0.575) {
																	if (x[3] <= -0.25) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 10.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 10.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[3] <= -0.15) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (0.011767611488619087*x[1]-1.1320756528073408*x[2]-0.011767611488619087*x[3]+0.22722292032067512*x[4]+0.02941902828317043*x[5]+0.11767611313268173 <= 0) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[3] <= -0.15) {
											if (x[2] <= 0.025) {
												if (x[4] <= -0.725) {
													if (x[1] <= 0.175) {
														if (x[3] <= -0.25) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[4] <= -0.675) {
														if (x[3] <= -0.25) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.175) {
													if (x[4] <= -0.625) {
														if (x[3] <= -0.25) {
															if (x[4] <= -0.725) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[4] <= -0.625) {
												if (x[1] <= 0.175) {
													if (x[4] <= -0.725) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.675) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[4] <= -0.675) {
														if (x[1] <= 0.225) {
															if (x[4] <= -0.725) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[2] <= 0.025) {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= 0.175) {
															if (x[4] <= -0.575) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 0.175) {
														if (x[4] <= -0.575) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}

								}
								else {
									if (x[1] <= 0.325) {
										if (x[3] <= -0.15) {
											if (x[1] <= 0.125) {
												if (x[2] <= -0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[1] <= 0.175) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.575) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[4] <= -0.625) {
												if (x[1] <= 0.275) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.725) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}

						}

					}
					else {
						if (x[1] <= -1.325) {
							if (x[1] <= -1.425) {
								if (x[4] <= -0.625) {
									result[0] = 20.0f; result[1] = 0.0f;
								}
								else {
									result[0] = 15.0f; result[1] = 0.0f;
								}

							}
							else {
								if (x[4] <= -0.725) {
									result[0] = 15.0f; result[1] = 0.0f;
								}
								else {
									if (x[1] <= -1.375) {
										if (x[4] <= -0.625) {
											result[0] = 10.0f; result[1] = 10.0f;
										}
										else {
											result[0] = 10.0f; result[1] = 10.0f;
										}

									}
									else {
										if (x[4] <= -0.625) {
											result[0] = 10.0f; result[1] = 10.0f;
										}
										else {
											result[0] = 5.0f; result[1] = 10.0f;
										}

									}

								}

							}

						}
						else {
							if (x[5] <= 0.125) {
								if (x[5] <= -0.125) {
									if (x[1] <= -0.025) {
										result[0] = 5.0f; result[1] = 10.0f;
									}
									else {
										if (x[1] <= 0.075) {
											if (x[1] <= 0.025) {
												if (x[2] <= -0.025) {
													if (x[4] <= -0.725) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}
											else {
												if (x[4] <= -0.725) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.625) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}

											}

										}
										else {
											if (x[4] <= -0.625) {
												if (0.0008538989176505858*x[0]+0.2891076561665543*x[1]-0.3005112955204805*x[2]+0.005123393633143957*x[3]+0.011494976151123512*x[4]+0.004269494524631453*x[5]-0.017077978098525813 <= 0) {
													if (x[4] <= -0.725) {
														if (x[1] <= 0.125) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}
												else {
													if (x[1] <= 0.125) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														if (x[1] <= 0.175) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}

												}

											}
											else {
												if (0.0006220799712918153*x[0]+0.19444534317648327*x[1]-0.20042158270375235*x[2]+0.0037324799204474803*x[3]+0.007083094968564215*x[4]+0.0031103998101105553*x[5]-0.012441599240442221 <= 0) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													if (x[1] <= 0.125) {
														result[0] = 10.0f; result[1] = 20.0f;
													}
													else {
														if (x[1] <= 0.175) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 10.0f; result[1] = 20.0f;
														}

													}

												}

											}

										}

									}

								}
								else {
									result[0] = 5.0f; result[1] = 10.0f;
								}

							}
							else {
								if (x[1] <= 0.125) {
									if (x[1] <= 0.075) {
										if (x[1] <= 0.025) {
											if (x[4] <= -0.625) {
												if (x[1] <= -0.025) {
													result[0] = 20.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= -0.025) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 20.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= -0.075) {
													result[0] = 20.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.575) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.025) {
															result[0] = 15.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[4] <= -0.625) {
												if (x[2] <= 0.025) {
													if (x[4] <= -0.725) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 10.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[2] <= -0.025) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													if (x[2] <= 0.025) {
														result[0] = 10.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 15.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[4] <= -0.625) {
											if (x[4] <= -0.725) {
												if (x[2] <= -0.025) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[2] <= -0.025) {
													if (x[4] <= -0.675) {
														result[0] = 10.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 10.0f; result[1] = 10.0f;
												}

											}

										}
										else {
											result[0] = 5.0f; result[1] = 10.0f;
										}

									}

								}
								else {
									if (x[1] <= 0.175) {
										if (x[2] <= 0.025) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[4] <= -0.575) {
												if (x[4] <= -0.675) {
													if (x[4] <= -0.725) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}
											else {
												result[0] = 5.0f; result[1] = 10.0f;
											}

										}

									}
									else {
										result[0] = 5.0f; result[1] = 10.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (-29.136846982588544*x[0]+0.0792469045908016*x[1]-0.05356606899931929*x[2]-15.793012428325392*x[3]+0.1767100462433597*x[4]-0.15713201208821248*x[5]-5.50541024721015 <= 0) {
						if (x[1] <= -1.375) {
							if (x[1] <= -1.425) {
								if (x[4] <= -0.375) {
									if (x[4] <= -0.475) {
										result[0] = 15.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 10.0f; result[1] = 0.0f;
									}

								}
								else {
									result[0] = 5.0f; result[1] = 0.0f;
								}

							}
							else {
								if (x[4] <= -0.375) {
									if (x[3] <= -0.15) {
										if (x[4] <= -0.475) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[3] <= -0.15) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= -1.225) {
								if (-0.30701835655437615*x[0]+3.954169133908227*x[1]-6.278745179064663e-17*x[2]-3.9365275229919123*x[3]+6.422688843694391*x[4]-0.04568294686848148*x[5]+7.353044411319183 <= 0) {
									if (x[1] <= -1.325) {
										if (x[3] <= -0.15) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[3] <= -0.15) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[4] <= -0.375) {
										if (x[1] <= -1.325) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[3] <= -0.15) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -1.275) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (x[5] <= 0.125) {
									if (-0.2204623087966235*x[0]-2.6198024796766477*x[1]-1.352978527176524*x[2]-2.047268327213794*x[3]-0.3380567494096754*x[4]+16.863550391210403*x[5]+3.8903879708551528 <= 0) {
										if (x[1] <= 0.075) {
											if (x[1] <= 0.025) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[2] <= 0.025) {
													if (x[4] <= -0.375) {
														if (x[4] <= -0.475) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[3] <= -0.15) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.475) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[4] <= -0.375) {
												if (x[1] <= 0.125) {
													if (x[2] <= 0.025) {
														result[0] = 5.0f; result[1] = 20.0f;
													}
													else {
														if (x[4] <= -0.475) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 0.175) {
														if (x[3] <= -0.15) {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 5.0f; result[1] = 20.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[3] <= -0.15) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= -0.075) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[5] <= -0.125) {
												if (x[1] <= 0.025) {
													if (-0.13247662689011114*x[0]-1.9837888257913654*x[1]+3.5086232446494554*x[2]-5.140609597560727*x[3]-0.8330875406351248*x[4]+0.2727536824886138*x[5]-1.0910147299544553 <= 0) {
														if (x[1] <= -0.025) {
															if (x[4] <= -0.475) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[2] <= -0.025) {
																if (x[4] <= -0.475) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= -0.325) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[3] <= -0.15) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[2] <= -0.025) {
															if (x[1] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.475) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[3] <= -0.15) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.475) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[4] <= -0.375) {
														if (x[1] <= 0.075) {
															if (x[2] <= 0.025) {
																if (x[4] <= -0.475) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[4] <= -0.475) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 5.0f; result[1] = 20.0f;
															}
															else {
																if (x[4] <= -0.475) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= 0.075) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= 1.425) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[3] <= -0.15) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.475) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}

									}

								}
								else {
									if (x[1] <= 0.125) {
										if (x[1] <= 0.075) {
											if (x[4] <= -0.375) {
												if (x[1] <= 0.025) {
													if (x[4] <= -0.475) {
														if (x[1] <= -0.075) {
															result[0] = 20.0f; result[1] = 0.0f;
														}
														else {
															if (x[3] <= -0.15) {
																if (x[1] <= -0.025) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 15.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= -0.025) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 15.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= -0.025) {
															if (x[3] <= -0.15) {
																if (x[1] <= -0.075) {
																	result[0] = 20.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= -0.425) {
																		if (x[3] <= -0.25) {
																			result[0] = 10.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 10.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[4] <= -0.425) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[2] <= -0.025) {
																if (x[3] <= -0.15) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 10.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[3] <= -0.15) {
															if (0.0004225889755976501*x[0]+0.009229134461493945*x[1]-0.10082339206228924*x[2]-0.038722611851388734*x[3]+0.46994490655567106*x[4]+0.04614567161984582*x[5]+0.18458268647938328 <= 0) {
																if (x[4] <= -0.475) {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	if (x[3] <= -0.25) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[3] <= -0.25) {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[4] <= -0.475) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.425) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[4] <= -0.425) {
															if (x[4] <= -0.475) {
																result[0] = 10.0f; result[1] = 0.0f;
															}
															else {
																if (x[3] <= -0.15) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[3] <= -0.15) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}
											else {
												if (-0.027926814589860925*x[0]-0.6617332616708812*x[1]+1.8074121052225436*x[2]-0.9227241785394686*x[3]+0.12829617033213708*x[4]-0.006469931655778218*x[5]-0.025879726623112873 <= 0) {
													if (x[1] <= 0.025) {
														if (x[1] <= -0.025) {
															if (x[4] <= -0.325) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[3] <= -0.15) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.325) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[1] <= -0.075) {
														if (x[4] <= -0.325) {
															result[0] = 20.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 15.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[1] <= 0.025) {
															if (x[3] <= -0.15) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.325) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[2] <= 0.025) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[4] <= -0.375) {
												if (x[3] <= -0.15) {
													if (x[3] <= -0.25) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.475) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= -0.425) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.475) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[4] <= -0.475) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[2] <= 0.025) {
													if (x[3] <= -0.15) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.325) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[4] <= -0.325) {
														if (x[3] <= -0.15) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[3] <= -0.15) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[1] <= 0.275) {
											if (-0.00613369473497112*x[0]+3.885392943777497*x[1]-1.8897491318589277*x[2]-4.154719267464258*x[3]+5.23500519365366*x[4]+0.2733502264466459*x[5]+1.0934009057865837 <= 0) {
												if (x[1] <= 0.175) {
													if (x[3] <= -0.15) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															if (x[4] <= -0.475) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[4] <= -0.375) {
													if (x[1] <= 0.175) {
														if (x[2] <= 0.025) {
															if (x[3] <= -0.15) {
																if (x[4] <= -0.475) {
																	if (x[3] <= -0.25) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[3] <= -0.15) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.425) {
																if (x[1] <= 0.225) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= 0.025) {
																		if (x[4] <= -0.475) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[1] <= 0.225) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 1.425) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[3] <= -0.15) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.475) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
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
						if (x[1] <= -1.325) {
							if (x[4] <= -0.375) {
								if (x[1] <= -1.425) {
									if (x[4] <= -0.475) {
										result[0] = 15.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 15.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[1] <= -1.375) {
										if (x[4] <= -0.475) {
											result[0] = 10.0f; result[1] = 10.0f;
										}
										else {
											result[0] = 5.0f; result[1] = 10.0f;
										}

									}
									else {
										result[0] = 5.0f; result[1] = 10.0f;
									}

								}

							}
							else {
								if (x[1] <= -1.425) {
									result[0] = 15.0f; result[1] = 0.0f;
								}
								else {
									if (x[1] <= -1.375) {
										result[0] = 5.0f; result[1] = 10.0f;
									}
									else {
										result[0] = 5.0f; result[1] = 10.0f;
									}

								}

							}

						}
						else {
							if (x[5] <= 0.125) {
								if (x[5] <= -0.125) {
									if (x[1] <= 0.025) {
										if (x[1] <= -0.025) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[2] <= -0.025) {
												if (x[4] <= -0.475) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}
											else {
												result[0] = 5.0f; result[1] = 10.0f;
											}

										}

									}
									else {
										if (x[1] <= 0.075) {
											if (x[2] <= 0.025) {
												if (x[4] <= -0.375) {
													if (x[4] <= -0.475) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}
											else {
												if (x[4] <= -0.475) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}

										}
										else {
											if (x[4] <= -0.375) {
												if (0.0010212169448023255*x[0]+0.2886670191941105*x[1]-0.30063050987076984*x[2]+0.006127301820987663*x[3]+0.00883766231211947*x[4]+0.005106084647925808*x[5]-0.020424338591703232 <= 0) {
													if (x[4] <= -0.475) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}
												else {
													if (x[1] <= 0.125) {
														result[0] = 5.0f; result[1] = 20.0f;
													}
													else {
														if (x[1] <= 0.175) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 20.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 0.125) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}

										}

									}

								}
								else {
									result[0] = 5.0f; result[1] = 10.0f;
								}

							}
							else {
								if (0.006890159489420998*x[0]+5.451531879631594*x[1]-0.41948060317051006*x[2]+0.04134095796323945*x[3]+1.1489503911793681*x[4]-0.03445079693374876*x[5]-0.13780318773499503 <= 0) {
									if (x[1] <= 0.025) {
										if (x[4] <= -0.375) {
											if (x[1] <= -0.075) {
												result[0] = 20.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= -0.475) {
													if (x[1] <= -0.025) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 15.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 15.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[1] <= -0.075) {
												if (x[4] <= -0.325) {
													result[0] = 20.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 15.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (x[1] <= 0.075) {
											if (x[2] <= 0.025) {
												if (x[4] <= -0.375) {
													if (x[4] <= -0.475) {
														if (x[2] <= -0.025) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 10.0f; result[1] = 10.0f;
														}

													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}
												else {
													if (x[2] <= -0.025) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}

											}
											else {
												if (x[4] <= -0.425) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[4] <= -0.375) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
												if (x[2] <= 0.025) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= 0.175) {
										if (x[2] <= 0.025) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[4] <= -0.375) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
												result[0] = 5.0f; result[1] = 10.0f;
											}

										}

									}
									else {
										result[0] = 5.0f; result[1] = 10.0f;
									}

								}

							}

						}

					}

				}

			}

		}
		else {
			if (x[4] <= 0.525) {
				if (x[3] <= -0.15) {
					if (x[4] <= 0.275) {
						if (-31.90544271162154*x[0]+0.0006745345758141864*x[1]+0.004136814455197689*x[2]-16.527841512829173*x[3]-0.00031934793192878007*x[4]-0.005712701948898259*x[5]-5.878028475745167 <= 0) {
							if (x[4] <= 0.225) {
								if (x[1] <= -1.375) {
									if (x[4] <= -0.025) {
										if (x[1] <= -1.425) {
											if (x[4] <= -0.125) {
												if (x[4] <= -0.225) {
													result[0] = 5.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[4] <= -0.175) {
												if (x[3] <= -0.25) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (x[4] <= 0.125) {
											if (x[1] <= -1.425) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (-0.8112260255191157*x[0]-0.4170891344134037*x[1]+4.382946543286596e-17*x[2]+3.911434636586702*x[3]-2.7576901339328908*x[4]-0.009923188613665403*x[5]+0.2979208153688455 <= 0) {
													if (x[3] <= -0.25) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= 0.075) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[1] <= 1.375) {
										if (x[5] <= -0.125) {
											if (0.29942581975687305*x[0]-11.555821746353976*x[1]+1.2466641013479056*x[2]-2.2002716953883588*x[3]-2.3008530199622244*x[4]+0.35649886037668665*x[5]-1.4259954415067466 <= 0) {
												if (x[1] <= 0.025) {
													if (x[1] <= -0.025) {
														if (x[2] <= -0.025) {
															if (x[4] <= 0.025) {
																if (x[4] <= -0.125) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[1] <= -0.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= 0.125) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[2] <= 0.025) {
																if (x[4] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[1] <= -0.075) {
																		if (x[3] <= -0.25) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[3] <= -0.25) {
																	if (x[1] <= -0.075) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= -0.025) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[4] <= -0.075) {
															if (x[4] <= -0.225) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (-0.0005663010459265545*x[0]+0.4759355615860645*x[2]+0.05191760622557983*x[3]-1.784424727846149*x[4]+0.061875553844214254*x[5]-0.24750221537685702 <= 0) {
																		if (x[2] <= 0.025) {
																			if (x[4] <= -0.125) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}

																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[2] <= -0.025) {
																if (x[4] <= 0.075) {
																	if (x[4] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}
																else {
																	if (x[4] <= 0.125) {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}
																	else {
																		if (x[4] <= 0.175) {
																			result[0] = 0.0f; result[1] = 20.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 20.0f;
																		}

																	}

																}

															}
															else {
																if (x[4] <= 0.125) {
																	if (x[2] <= 0.025) {
																		if (x[4] <= -0.025) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		if (x[4] <= 0.025) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	if (x[2] <= 0.025) {
																		if (x[3] <= -0.25) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}

												}
												else {
													if (x[4] <= -0.025) {
														if (x[4] <= -0.125) {
															if (x[1] <= 0.125) {
																if (x[4] <= -0.225) {
																	if (x[1] <= 0.075) {
																		if (x[2] <= 0.025) {
																			result[0] = 0.0f; result[1] = 10.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}
																else {
																	if (x[1] <= 0.075) {
																		if (x[2] <= 0.025) {
																			result[0] = 0.0f; result[1] = 10.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}

															}
															else {
																if (x[3] <= -0.25) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															if (x[1] <= 0.075) {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
															}

														}

													}
													else {
														if (x[1] <= 0.075) {
															if (x[2] <= 0.025) {
																if (x[4] <= 0.125) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}
															else {
																if (x[3] <= -0.25) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[4] <= 0.075) {
																if (x[1] <= 0.125) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}
															else {
																if (x[1] <= 0.125) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	if (x[4] <= 0.125) {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}

																}

															}

														}

													}

												}

											}
											else {
												if (x[1] <= -0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.225) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.075) {
															if (x[4] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[3] <= -0.25) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[3] <= -0.25) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}

											}

										}
										else {
											if (-0.029264230125718063*x[0]+3.212684234656767*x[1]+0.5113405637600881*x[2]-0.4145063006496273*x[3]+0.23440000727907695*x[4]-21.042488700061448*x[5]+5.0153817198902475 <= 0) {
												if (x[1] <= -0.025) {
													if (x[4] <= 0.125) {
														if (x[4] <= -0.125) {
															if (x[1] <= -0.075) {
																if (x[1] <= -0.125) {
																	result[0] = 20.0f; result[1] = 0.0f;
																}
																else {
																	if (x[3] <= -0.25) {
																		result[0] = 15.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= -0.225) {
																			result[0] = 15.0f; result[1] = 0.0f;
																		}
																		else {
																			if (x[4] <= -0.175) {
																				result[0] = 20.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 15.0f; result[1] = 0.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[2] <= -0.025) {
																	if (x[4] <= -0.225) {
																		if (x[3] <= -0.25) {
																			result[0] = 5.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 5.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 20.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[4] <= 0.025) {
																if (x[1] <= -0.075) {
																	if (x[1] <= -0.125) {
																		result[0] = 15.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= -0.075) {
																			result[0] = 15.0f; result[1] = 0.0f;
																		}
																		else {
																			if (x[3] <= -0.25) {
																				result[0] = 10.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 10.0f; result[1] = 0.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[2] <= -0.025) {
																		if (x[3] <= -0.25) {
																			if (x[4] <= -0.025) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}

																		}
																		else {
																			if (x[4] <= -0.025) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}

																		}

																	}
																	else {
																		result[0] = 15.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= -0.125) {
																	if (x[4] <= 0.075) {
																		if (x[3] <= -0.25) {
																			result[0] = 10.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 15.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		if (x[3] <= -0.25) {
																			result[0] = 10.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 10.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	if (x[3] <= -0.25) {
																		if (x[1] <= -0.075) {
																			result[0] = 10.0f; result[1] = 0.0f;
																		}
																		else {
																			if (x[2] <= -0.025) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 10.0f; result[1] = 0.0f;
																			}

																		}

																	}
																	else {
																		if (x[1] <= -0.075) {
																			result[0] = 10.0f; result[1] = 0.0f;
																		}
																		else {
																			if (x[2] <= -0.025) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 10.0f; result[1] = 0.0f;
																			}

																		}

																	}

																}

															}

														}

													}
													else {
														if (x[1] <= -0.125) {
															if (x[3] <= -0.25) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.175) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[3] <= -0.25) {
																if (x[1] <= -0.075) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= -0.075) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.175) {
															if (x[1] <= 0.025) {
																if (x[4] <= -0.225) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[3] <= -0.25) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= -0.225) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[4] <= 0.075) {
																if (x[1] <= 0.025) {
																	if (x[2] <= -0.025) {
																		if (x[4] <= -0.025) {
																			if (x[4] <= -0.125) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}

																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		if (x[4] <= -0.075) {
																			if (x[3] <= -0.25) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}

																		}
																		else {
																			if (x[4] <= 0.025) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				if (x[3] <= -0.25) {
																					result[0] = 0.0f; result[1] = 0.0f;
																				}
																				else {
																					result[0] = 0.0f; result[1] = 0.0f;
																				}

																			}

																		}

																	}

																}
																else {
																	if (x[3] <= -0.25) {
																		if (x[4] <= -0.125) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[4] <= 0.175) {
																	if (x[2] <= -0.025) {
																		if (x[4] <= 0.125) {
																			if (x[1] <= 0.025) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}

																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		if (x[4] <= 0.125) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[4] <= 0.075) {
															if (x[4] <= -0.125) {
																if (x[1] <= 0.025) {
																	if (x[4] <= -0.175) {
																		result[0] = 20.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 15.0f; result[1] = 0.0f;
																	}

																}
																else {
																	if (x[4] <= -0.225) {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[4] <= -0.075) {
																	if (x[1] <= 0.025) {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	if (x[4] <= 0.025) {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.175) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (x[5] <= 0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.125) {
														if (0.056656102461696695*x[0]+6.571446328278175*x[1]-3.685822731968936*x[2]-0.026094640987270868*x[3]+0.8242482588782327*x[4]-0.11050375228333775*x[5]-0.442015009133351 <= 0) {
															if (x[1] <= 0.075) {
																if (x[4] <= -0.025) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= -0.125) {
																			if (x[4] <= -0.225) {
																				result[0] = 5.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}

																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	if (x[4] <= 0.125) {
																		if (x[2] <= 0.025) {
																			if (x[3] <= -0.25) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				if (x[4] <= 0.075) {
																					result[0] = 0.0f; result[1] = 0.0f;
																				}
																				else {
																					result[0] = 0.0f; result[1] = 0.0f;
																				}

																			}

																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[4] <= -0.075) {
																	if (x[4] <= -0.225) {
																		if (x[2] <= 0.025) {
																			if (x[3] <= -0.25) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}

																		}
																		else {
																			if (x[3] <= -0.25) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}

																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[1] <= 0.075) {
																if (x[3] <= -0.25) {
																	if (x[4] <= 0.125) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[2] <= -0.025) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[4] <= -0.225) {
																	if (x[3] <= -0.25) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= 0.025) {
																			if (x[3] <= -0.25) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}

																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}

															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[4] <= 0.025) {
											if (x[4] <= -0.225) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= 1.425) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 1.425) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= 0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}

								}

							}
							else {
								if (x[3] <= -0.25) {
									if (x[1] <= 1.375) {
										if (x[5] <= -0.125) {
											if (x[1] <= -0.075) {
												if (x[1] <= -0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.075) {
													if (x[1] <= -0.025) {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 20.0f;
												}

											}

										}
										else {
											if (x[5] <= 0.125) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.025) {
													if (x[1] <= -0.125) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.075) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 0.025) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 1.425) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 10.0f;
										}

									}

								}
								else {
									if (x[1] <= 1.375) {
										if (x[1] <= -1.425) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[5] <= -0.125) {
												if (x[1] <= -0.075) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.025) {
														if (x[1] <= -0.025) {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 10.0f;
														}

													}
													else {
														if (x[1] <= 0.075) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}

												}

											}
											else {
												if (x[5] <= 0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.025) {
														if (x[1] <= -0.025) {
															if (x[1] <= -0.125) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= -0.075) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 1.425) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 10.0f;
										}

									}

								}

							}

						}
						else {
							if (x[1] <= -1.375) {
								if (x[4] <= -0.025) {
									if (x[1] <= -1.425) {
										if (x[4] <= -0.125) {
											if (x[4] <= -0.225) {
												result[0] = 15.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 10.0f; result[1] = 10.0f;
											}

										}
										else {
											result[0] = 5.0f; result[1] = 10.0f;
										}

									}
									else {
										result[0] = 5.0f; result[1] = 10.0f;
									}

								}
								else {
									if (x[4] <= 0.225) {
										if (x[1] <= -1.425) {
											if (x[4] <= 0.125) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
												result[0] = 5.0f; result[1] = 10.0f;
											}

										}
										else {
											result[0] = 5.0f; result[1] = 10.0f;
										}

									}
									else {
										result[0] = 5.0f; result[1] = 10.0f;
									}

								}

							}
							else {
								if (x[1] <= 1.375) {
									if (x[5] <= 0.125) {
										if (x[5] <= -0.125) {
											if (0.020203678603060136*x[0]-7.2736625452037105*x[1]+0.8845288178189267*x[2]+0.12122207462893138*x[3]-0.9679413543395851*x[4]+0.10101839151000883*x[5]-0.4040735660400353 <= 0) {
												if (x[1] <= 0.025) {
													if (x[4] <= 0.125) {
														if (x[2] <= -0.025) {
															if (x[1] <= -0.025) {
																if (x[4] <= 0.025) {
																	if (x[4] <= -0.125) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}

																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}
															else {
																if (x[4] <= -0.075) {
																	if (x[4] <= -0.225) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}

																}
																else {
																	if (x[4] <= -0.025) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		if (x[4] <= 0.075) {
																			result[0] = 5.0f; result[1] = 10.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 20.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[4] <= -0.225) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																if (x[1] <= -0.025) {
																	if (x[4] <= 0.025) {
																		if (x[2] <= 0.025) {
																			result[0] = 5.0f; result[1] = 10.0f;
																		}
																		else {
																			if (x[4] <= -0.025) {
																				result[0] = 5.0f; result[1] = 10.0f;
																			}
																			else {
																				result[0] = 5.0f; result[1] = 10.0f;
																			}

																		}

																	}
																	else {
																		if (x[2] <= 0.025) {
																			result[0] = 5.0f; result[1] = 10.0f;
																		}
																		else {
																			result[0] = 5.0f; result[1] = 10.0f;
																		}

																	}

																}
																else {
																	if (x[4] <= -0.125) {
																		if (x[2] <= 0.025) {
																			if (x[4] <= -0.175) {
																				result[0] = 5.0f; result[1] = 10.0f;
																			}
																			else {
																				result[0] = 5.0f; result[1] = 10.0f;
																			}

																		}
																		else {
																			result[0] = 5.0f; result[1] = 10.0f;
																		}

																	}
																	else {
																		if (x[2] <= 0.025) {
																			if (x[4] <= -0.025) {
																				result[0] = 5.0f; result[1] = 10.0f;
																			}
																			else {
																				result[0] = 5.0f; result[1] = 10.0f;
																			}

																		}
																		else {
																			if (x[4] <= 0.025) {
																				result[0] = 5.0f; result[1] = 10.0f;
																			}
																			else {
																				result[0] = 5.0f; result[1] = 10.0f;
																			}

																		}

																	}

																}

															}

														}

													}
													else {
														if (x[4] <= 0.225) {
															if (x[1] <= -0.025) {
																if (x[2] <= -0.025) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	if (x[2] <= 0.025) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}

																}

															}
															else {
																if (x[2] <= -0.025) {
																	if (x[4] <= 0.175) {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}

																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															if (x[1] <= -0.025) {
																if (0.00018610656435139825*x[0]-0.09976269506506001*x[1]+0.09905658486015896*x[2]+0.0011166394138404556*x[3]-0.0009305328078910133*x[4]+0.0009305328078910133*x[5]-0.003722131231564053 <= 0) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	if (x[1] <= -0.075) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		if (x[2] <= 0.025) {
																			result[0] = 5.0f; result[1] = 10.0f;
																		}
																		else {
																			result[0] = 5.0f; result[1] = 10.0f;
																		}

																	}

																}

															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}

													}

												}
												else {
													if (x[4] <= -0.025) {
														if (x[4] <= -0.125) {
															if (x[1] <= 0.075) {
																if (x[2] <= 0.025) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	if (x[4] <= -0.225) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}

																}

															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}
														else {
															if (x[1] <= 0.075) {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}

													}
													else {
														if (x[1] <= 0.075) {
															if (x[2] <= 0.025) {
																if (x[4] <= 0.125) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}
															else {
																if (x[4] <= 0.225) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															if (x[4] <= 0.075) {
																if (x[1] <= 0.125) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}
															else {
																if (x[1] <= 0.125) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	if (x[4] <= 0.125) {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}

																}

															}

														}

													}

												}

											}
											else {
												if (x[1] <= -0.125) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													if (x[2] <= 0.025) {
														if (x[1] <= -0.075) {
															if (x[4] <= 0.125) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															if (x[4] <= -0.225) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}

													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}

											}

										}
										else {
											result[0] = 5.0f; result[1] = 10.0f;
										}

									}
									else {
										if (0.021759774532542034*x[0]+7.285094856420541*x[1]-0.7814989079386679*x[2]+0.1305586504376839*x[3]+0.9427401863700251*x[4]-0.10879887104147833*x[5]-0.4351954841659133 <= 0) {
											if (x[1] <= -0.025) {
												if (x[4] <= 0.025) {
													if (x[4] <= -0.125) {
														if (x[1] <= -0.075) {
															if (x[1] <= -0.125) {
																result[0] = 20.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 20.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[1] <= -0.075) {
															if (x[1] <= -0.125) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.075) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 15.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[2] <= -0.025) {
																if (x[4] <= -0.025) {
																	result[0] = 10.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 10.0f;
																}

															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[4] <= 0.125) {
														if (x[1] <= -0.075) {
															if (x[1] <= -0.125) {
																if (x[4] <= 0.075) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 15.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[4] <= 0.225) {
															if (x[1] <= -0.075) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 15.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[1] <= -0.125) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= -0.075) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 15.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}

												}

											}
											else {
												if (x[1] <= 0.025) {
													if (x[4] <= 0.075) {
														if (x[2] <= -0.025) {
															if (x[4] <= -0.125) {
																if (x[4] <= -0.225) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 10.0f;
																}

															}
															else {
																if (x[4] <= -0.025) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															if (x[4] <= -0.175) {
																if (x[2] <= 0.025) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 20.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[2] <= 0.025) {
																	if (x[4] <= 0.025) {
																		result[0] = 10.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}

																}
																else {
																	if (x[4] <= -0.075) {
																		if (x[4] <= -0.125) {
																			result[0] = 15.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 15.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		if (x[4] <= 0.025) {
																			result[0] = 15.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 10.0f; result[1] = 10.0f;
																		}

																	}

																}

															}

														}

													}
													else {
														if (x[2] <= 0.025) {
															if (x[4] <= 0.225) {
																if (x[4] <= 0.125) {
																	if (x[2] <= -0.025) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}

																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		if (x[4] <= 0.175) {
																			result[0] = 5.0f; result[1] = 10.0f;
																		}
																		else {
																			result[0] = 5.0f; result[1] = 10.0f;
																		}

																	}

																}

															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}

												}
												else {
													if (x[4] <= -0.125) {
														if (-0.0025630294992840144*x[0]-0.28648387244032836*x[1]-0.7674143301761386*x[2]-0.015378177377625517*x[3]+0.1777990667382152*x[4]+0.012815147305459993*x[5]+0.05126058922183997 <= 0) {
															if (x[1] <= 0.075) {
																if (x[4] <= -0.225) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 10.0f;
																}

															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}
													else {
														if (x[2] <= 0.025) {
															if (x[4] <= -0.025) {
																if (x[2] <= -0.025) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}
														else {
															if (x[4] <= -0.025) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																if (x[4] <= 0.125) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}

														}

													}

												}

											}

										}
										else {
											if (x[1] <= 0.125) {
												if (x[2] <= -0.025) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													if (x[1] <= 0.075) {
														if (x[4] <= 0.225) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}
													else {
														if (x[4] <= -0.075) {
															if (x[2] <= 0.025) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}

												}

											}
											else {
												result[0] = 5.0f; result[1] = 10.0f;
											}

										}

									}

								}
								else {
									if (x[4] <= 0.025) {
										if (x[4] <= -0.225) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[1] <= 1.425) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
												if (x[4] <= -0.125) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 1.425) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[4] <= 0.125) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
												if (x[4] <= 0.225) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}

										}

									}

								}

							}

						}

					}
					else {
						if (-29.250568405090608*x[0]-0.07599886535119306*x[1]+0.052828601494518956*x[2]-15.84900556023244*x[3]-0.18773027279990542*x[4]+0.12958672106108346*x[5]-5.51723896925263 <= 0) {
							if (x[1] <= 1.325) {
								if (x[5] <= -0.125) {
									if (x[1] <= -0.125) {
										if (x[1] <= -0.175) {
											if (x[1] <= -1.425) {
												if (x[4] <= 0.325) {
													if (x[3] <= -0.25) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[2] <= -0.025) {
												if (-0.2024317787505633*x[0]+0.08690497413145457*x[1]+0.028968323991048765*x[2]+0.9758436170733793*x[3]+1.8946860293420997*x[4]+0.14484161779693533*x[5]-0.5793664711877413 <= 0) {
													if (x[4] <= 0.375) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[3] <= -0.25) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (x[1] <= -0.075) {
											if (x[4] <= 0.375) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= 0.475) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[3] <= -0.25) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[3] <= -0.25) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= -0.025) {
												if (x[2] <= -0.025) {
													if (x[4] <= 0.475) {
														if (x[4] <= 0.375) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= 0.475) {
															if (x[4] <= 0.425) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[3] <= -0.25) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[3] <= -0.25) {
															if (x[4] <= 0.375) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.475) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[4] <= 0.425) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.475) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (x[1] <= 0.075) {
													if (x[4] <= 0.375) {
														if (x[1] <= 0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
															}

														}

													}
													else {
														if (x[4] <= 0.475) {
															if (x[3] <= -0.25) {
																if (x[1] <= 0.025) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}
															else {
																if (x[1] <= 0.025) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															if (x[1] <= 0.025) {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}

													}

												}
												else {
													if (x[4] <= 0.325) {
														result[0] = 0.0f; result[1] = 20.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 20.0f;
													}

												}

											}

										}

									}

								}
								else {
									if (x[5] <= 0.125) {
										if (x[1] <= -1.425) {
											if (x[4] <= 0.325) {
												if (x[3] <= -0.25) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (0.06330888500132376*x[0]+9.06212761804174*x[1]-1.2405196268282812*x[2]-0.3807249110240865*x[3]+0.5433595302000965*x[4]-0.05151065738364153*x[5]-0.20604262953456612 <= 0) {
											if (x[4] <= 0.375) {
												if (x[1] <= -0.125) {
													if (x[3] <= -0.25) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= -0.025) {
														if (x[4] <= 0.325) {
															if (x[3] <= -0.25) {
																if (x[1] <= -0.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= -0.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[3] <= -0.25) {
																if (x[1] <= -0.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= -0.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= -0.125) {
													if (x[1] <= -0.175) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														if (x[3] <= -0.25) {
															if (x[4] <= 0.475) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= -0.075) {
														if (x[2] <= -0.025) {
															if (x[4] <= 0.475) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 15.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[2] <= -0.025) {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.425) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= 0.475) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[4] <= 0.475) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[1] <= 0.025) {
												if (x[2] <= 0.025) {
													if (x[4] <= 0.325) {
														if (x[3] <= -0.25) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[1] <= 1.425) {
									if (x[1] <= 1.375) {
										if (x[4] <= 0.375) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[4] <= 0.475) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[3] <= -0.25) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (x[4] <= 0.375) {
										result[0] = 0.0f; result[1] = 10.0f;
									}
									else {
										if (x[4] <= 0.475) {
											result[0] = 0.0f; result[1] = 10.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 20.0f;
										}

									}

								}

							}

						}
						else {
							if (x[1] <= 1.325) {
								if (x[5] <= -0.125) {
									if (-0.0036914125018100387*x[0]-5.2185257007846015*x[1]+0.4096845551556008*x[2]-0.02214847556093088*x[3]-1.3229797824002347*x[4]-0.01845706223402245*x[5]+0.0738282489360898 <= 0) {
										if (x[1] <= -0.025) {
											if (x[2] <= -0.025) {
												if (x[1] <= -0.075) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													if (x[4] <= 0.475) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 20.0f;
													}

												}

											}
											else {
												if (x[4] <= 0.375) {
													if (x[2] <= 0.025) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}
												else {
													if (0.0005835894059645402*x[0]-0.19783695112096805*x[1]+0.19773090160937043*x[2]+0.0035015365227481624*x[3]-0.006697691708250275*x[4]+0.0029179469863416384*x[5]-0.011671787945366554 <= 0) {
														if (x[4] <= 0.475) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}
													else {
														if (x[1] <= -0.075) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															if (x[4] <= 0.475) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[1] <= 0.075) {
												if (x[4] <= 0.375) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													if (x[4] <= 0.475) {
														if (x[1] <= 0.025) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														if (x[1] <= 0.025) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}

												}

											}
											else {
												if (x[4] <= 0.325) {
													result[0] = 0.0f; result[1] = 20.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 20.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= -0.175) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[4] <= 0.375) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
												if (x[2] <= 0.025) {
													if (x[1] <= -0.125) {
														if (x[4] <= 0.475) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}

													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}

										}

									}

								}
								else {
									if (x[5] <= 0.125) {
										result[0] = 5.0f; result[1] = 10.0f;
									}
									else {
										if (x[1] <= -0.025) {
											if (x[1] <= -0.125) {
												if (x[1] <= -0.175) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= 0.375) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= 0.475) {
															result[0] = 10.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 15.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[4] <= 0.375) {
													if (x[4] <= 0.325) {
														if (x[1] <= -0.075) {
															result[0] = 10.0f; result[1] = 10.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 10.0f; result[1] = 10.0f;
															}

														}

													}
													else {
														if (x[1] <= -0.075) {
															result[0] = 10.0f; result[1] = 10.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 10.0f; result[1] = 10.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= -0.075) {
														if (x[2] <= -0.025) {
															if (x[4] <= 0.475) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}
														else {
															result[0] = 15.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															if (x[4] <= 0.475) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[1] <= 0.025) {
												if (x[2] <= 0.025) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}
											else {
												result[0] = 5.0f; result[1] = 10.0f;
											}

										}

									}

								}

							}
							else {
								if (x[1] <= 1.375) {
									if (x[4] <= 0.375) {
										result[0] = 5.0f; result[1] = 10.0f;
									}
									else {
										result[0] = 5.0f; result[1] = 10.0f;
									}

								}
								else {
									if (x[1] <= 1.425) {
										if (x[4] <= 0.475) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											result[0] = 5.0f; result[1] = 10.0f;
										}

									}
									else {
										if (x[4] <= 0.375) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[4] <= 0.475) {
												result[0] = 0.0f; result[1] = 20.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 20.0f;
											}

										}

									}

								}

							}

						}

					}

				}
				else {
					if (x[4] <= 0.225) {
						if (x[1] <= -1.375) {
							if (x[4] <= -0.125) {
								if (x[1] <= -1.425) {
									if (x[4] <= -0.225) {
										result[0] = 5.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[4] <= -0.175) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (0.8946472817828793*x[1]+2.7760363595009717e-16*x[2]-0.049404823055561556*x[3]+7.731937782242148*x[4]-0.010532504482994923*x[5]+0.4940482231939103 <= 0) {
									if (x[4] <= -0.025) {
										if (x[1] <= -1.425) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									result[0] = 0.0f; result[1] = 0.0f;
								}

							}

						}
						else {
							if (x[1] <= 1.375) {
								if (x[5] <= 0.125) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.075) {
											if (x[1] <= -0.125) {
												if (x[1] <= -1.275) {
													if (x[4] <= -0.125) {
														if (x[4] <= -0.175) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= -1.325) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[4] <= 0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 0.025) {
												if (x[4] <= 0.025) {
													if (-2.636305040845816*x[1]+2.6471495619232988*x[2]+0.03078278436542907*x[3]-3.0141917224275807*x[4]+0.07695695976682099*x[5]-0.30782783906728395 <= 0) {
														if (x[1] <= -0.025) {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= -0.025) {
																if (x[4] <= -0.075) {
																	if (x[2] <= -0.025) {
																		if (x[4] <= -0.125) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[2] <= 0.025) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}

															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																if (x[4] <= -0.225) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[4] <= -0.175) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= -0.125) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}

															}

														}

													}

												}
												else {
													if (x[1] <= -0.025) {
														if (x[2] <= -0.025) {
															if (x[4] <= 0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= 0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[2] <= -0.025) {
															if (x[4] <= 0.125) {
																if (x[4] <= 0.075) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}
															else {
																if (x[4] <= 0.175) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}

														}
														else {
															if (x[2] <= 0.025) {
																if (x[4] <= 0.125) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[4] <= 0.125) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (x[4] <= -0.025) {
													if (x[4] <= -0.125) {
														if (x[1] <= 0.125) {
															if (x[4] <= -0.225) {
																if (x[1] <= 0.075) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}
															else {
																if (x[1] <= 0.075) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															result[0] = 0.0f; result[1] = 10.0f;
														}

													}
													else {
														if (x[1] <= 0.075) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[1] <= 0.125) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																if (x[4] <= -0.075) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}

													}

												}
												else {
													if (x[4] <= 0.125) {
														if (x[1] <= 0.075) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[1] <= 0.125) {
																if (x[4] <= 0.075) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}

													}
													else {
														if (x[1] <= 0.075) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[1] <= 0.125) {
																if (x[4] <= 0.175) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}

													}

												}

											}

										}

									}
									else {
										if (x[1] <= -1.275) {
											if (x[4] <= -0.125) {
												if (x[4] <= -0.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= -1.325) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (9.651643557538705*x[1]-1.8665821648660474*x[2]+0.10488745988085353*x[3]+2.5510782788652406*x[4]-0.2622186457947338*x[5]-1.0488745831789352 <= 0) {
										if (x[1] <= -0.025) {
											if (x[4] <= 0.125) {
												if (x[4] <= -0.125) {
													result[0] = 5.0f; result[1] = 0.0f;
												}
												else {
													if (-2.185013146038292*x[1]+0.3040729994653853*x[2]+0.010126541661359607*x[3]-2.0275547485354886*x[4]-0.025316353776151785*x[5]-0.10126541510460714 <= 0) {
														if (x[1] <= -0.075) {
															result[0] = 10.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 10.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[1] <= -0.075) {
															result[0] = 15.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= -0.125) {
													if (x[4] <= 0.175) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= -0.075) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= 0.075) {
												if (x[4] <= 0.075) {
													if (x[4] <= -0.125) {
														if (x[4] <= -0.175) {
															if (x[4] <= -0.225) {
																if (x[1] <= 0.025) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= 0.025) {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}

																}
																else {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 0.025) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 15.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 0.025) {
															if (x[2] <= -0.025) {
																if (x[4] <= -0.025) {
																	if (x[4] <= -0.075) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	if (x[4] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[4] <= -0.075) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}

																}
																else {
																	if (x[2] <= 0.025) {
																		if (x[4] <= -0.025) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			if (x[4] <= 0.025) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}

																		}

																	}
																	else {
																		if (x[4] <= 0.025) {
																			result[0] = 5.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[1] <= 0.025) {
														if (x[2] <= 0.025) {
															if (-0.2895380248230468*x[2]+0.015786816174378063*x[3]+1.109735818737381*x[4]-0.03946703984783996*x[5]-0.15786815939135984 <= 0) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= 0.125) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= 0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= 0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[4] <= -0.125) {
													if (x[4] <= -0.225) {
														if (x[1] <= 0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[2] <= 0.025) {
															if (x[1] <= 0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.175) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[1] <= 0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[4] <= -0.025) {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= 0.125) {
																if (x[2] <= 0.025) {
																	if (x[4] <= -0.075) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	if (x[4] <= -0.075) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[4] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}

										}

									}
									else {
										if (x[1] <= 0.225) {
											if (x[4] <= -0.225) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[2] <= 0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.125) {
														if (x[4] <= 0.175) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[4] <= -0.175) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}
							else {
								if (x[4] <= 0.025) {
									if (x[1] <= 1.425) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										if (x[4] <= -0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[1] <= 1.425) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										if (x[4] <= 0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[4] <= 0.425) {
							if (x[1] <= 1.375) {
								if (x[5] <= -0.125) {
									if (x[1] <= -0.125) {
										if (x[1] <= -1.425) {
											if (x[4] <= 0.325) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[1] <= -0.175) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= 0.375) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= -0.025) {
											if (x[1] <= -0.075) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[2] <= -0.025) {
													if (x[4] <= 0.375) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}
												else {
													if (x[4] <= 0.275) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= 0.375) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= 0.075) {
												if (x[4] <= 0.375) {
													result[0] = 0.0f; result[1] = 10.0f;
												}
												else {
													if (x[1] <= 0.025) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 10.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 20.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 0.075) {
										if (x[5] <= 0.125) {
											if (x[1] <= -1.425) {
												if (x[4] <= 0.325) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[1] <= -0.025) {
												if (x[4] <= 0.375) {
													if (x[1] <= -0.125) {
														if (x[4] <= 0.275) {
															result[0] = 10.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[4] <= 0.275) {
															if (x[1] <= -0.075) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[4] <= 0.325) {
																if (x[1] <= -0.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= -0.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}

												}
												else {
													if (x[1] <= -0.075) {
														if (-0.2884233393513809*x[1]+0.30069645593646965*x[2]+0.002227502789388487*x[3]-0.008910011157553948*x[4]-0.005568756890490182*x[5]-0.022275027561960727 <= 0) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= -0.175) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= -0.125) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 15.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[4] <= 0.275) {
													if (x[1] <= 0.025) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= 0.025) {
														if (x[2] <= 0.025) {
															if (x[4] <= 0.325) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= 0.375) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 1.325) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= 0.375) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[1] <= 1.425) {
									if (x[4] <= 0.275) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[4] <= 0.375) {
										result[0] = 0.0f; result[1] = 10.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 10.0f;
									}

								}

							}

						}
						else {
							if (x[4] <= 0.475) {
								if (x[1] <= 1.325) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.175) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.075) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.025) {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= 0.025) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 10.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}

											}

										}

									}
									else {
										if (x[5] <= 0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.025) {
												if (x[1] <= -0.075) {
													if (-0.28851663582548315*x[1]+0.30067121444395023*x[2]+0.002156648587192966*x[3]-0.009704918240660665*x[4]-0.005391621387639748*x[5]-0.02156648555055899 <= 0) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.175) {
															result[0] = 15.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= -0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[1] <= 0.025) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= 1.375) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										if (x[1] <= 1.425) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 10.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= 1.375) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.025) {
												if (x[1] <= -0.075) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 0.025) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 20.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 20.0f;
												}

											}

										}

									}
									else {
										if (x[5] <= 0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= 0.025) {
												if (x[1] <= -0.075) {
													if (x[1] <= -0.125) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 1.425) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 20.0f;
									}

								}

							}

						}

					}

				}

			}
			else {
				if (x[4] <= 0.975) {
					if (x[3] <= -0.15) {
						if (x[4] <= 0.775) {
							if (-28.969476944824866*x[0]-0.08416515645543624*x[1]+0.10448396890088707*x[2]-15.71667614643613*x[3]-0.010228509467249614*x[4]+0.15608037707584202*x[5]-5.547687572958596 <= 0) {
								if (0.11346172364156754*x[0]-0.25782752942297055*x[1]+0.24725750943076838*x[2]-9.833803985381424*x[3]-8.022920793554235*x[4]+0.516490794601676*x[5]+3.33617329373823 <= 0) {
									if (-0.1152275147770973*x[0]-0.17009700976350972*x[1]+0.2366283783482577*x[2]+7.71568800854401*x[3]+23.193360927592913*x[4]+0.4544448048347933*x[5]-15.350463832240843 <= 0) {
										if (-0.11694692196915414*x[0]-0.7345077769494689*x[1]+0.5191644413937241*x[2]+6.977623521739995*x[3]+11.483077619171457*x[4]+1.447939856574581*x[5]-5.964115523857293 <= 0) {
											if (x[1] <= 1.325) {
												if (x[4] <= 0.675) {
													if (x[1] <= 0.175) {
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[1] <= -0.025) {
																if (x[2] <= -0.025) {
																	if (x[1] <= -0.075) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}
																else {
																	if (x[1] <= -0.075) {
																		if (x[2] <= 0.025) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[1] <= 0.025) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[3] <= -0.25) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 1.425) {
													if (x[3] <= -0.25) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														if (x[1] <= 1.375) {
															if (x[4] <= 0.675) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 20.0f;
												}

											}

										}
										else {
											if (x[1] <= 1.325) {
												if (x[5] <= -0.125) {
													if (x[1] <= -0.175) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.075) {
															if (x[1] <= -0.125) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[1] <= -0.025) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[1] <= 0.025) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}

														}

													}

												}
												else {
													if (x[1] <= 0.025) {
														if (x[5] <= 0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= -0.075) {
																if (-0.28906187935437766*x[1]+0.30052369774409865*x[2]+0.0034851249546068675*x[3]-0.012197936951632569*x[4]-0.004356406128343503*x[5]-0.01742562451337401 <= 0) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[1] <= -0.175) {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[1] <= -0.125) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 5.0f; result[1] = 0.0f;
																		}

																	}

																}

															}
															else {
																if (x[1] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 1.425) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 20.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 1.325) {
											if (x[5] <= -0.125) {
												if (x[1] <= -0.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= -0.125) {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[1] <= -0.075) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[1] <= -0.025) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}

													}

												}

											}
											else {
												if (x[5] <= 0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= -0.025) {
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[1] <= -0.075) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 1.375) {
												result[0] = 0.0f; result[1] = 10.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 10.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 1.325) {
										if (x[5] <= -0.125) {
											if (0.24153176611487576*x[0]-8.669262878109745*x[1]+0.5398583428621117*x[2]-1.418159858011275*x[3]-0.16873485899446006*x[4]+0.36690212905745095*x[5]-1.4676085162298038 <= 0) {
												if (x[1] <= -0.075) {
													if (x[3] <= -0.25) {
														if (x[2] <= 0.025) {
															if (x[4] <= 0.625) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.725) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															if (x[4] <= 0.675) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.725) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= -0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= 0.625) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= -0.025) {
														if (x[2] <= -0.025) {
															if (x[4] <= 0.675) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}
														else {
															if (x[3] <= -0.25) {
																if (x[4] <= 0.725) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= 0.625) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 0.025) {
															if (x[2] <= 0.025) {
																if (x[4] <= 0.625) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}
															else {
																if (x[4] <= 0.675) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}

														}
														else {
															if (x[1] <= 0.075) {
																if (x[4] <= 0.625) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= -0.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= -0.025) {
														if (x[4] <= 0.625) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= 0.725) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[5] <= 0.125) {
												if (x[1] <= -1.175) {
													if (x[4] <= 0.675) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[3] <= -0.25) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= -1.125) {
														if (x[4] <= 0.675) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= -0.025) {
													if (x[4] <= 0.625) {
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 10.0f; result[1] = 0.0f;
															}
															else {
																if (x[3] <= -0.25) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[1] <= -0.075) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[2] <= -0.025) {
																	if (x[4] <= 0.575) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																if (x[3] <= -0.25) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[1] <= -0.075) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[4] <= 0.725) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}

												}
												else {
													if (x[1] <= 0.025) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= 0.725) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 1.425) {
											if (x[3] <= -0.25) {
												if (x[4] <= 0.725) {
													if (x[1] <= 1.375) {
														if (x[4] <= 0.625) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 10.0f;
												}

											}
											else {
												if (x[1] <= 1.375) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[4] <= 0.625) {
												result[0] = 0.0f; result[1] = 20.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 20.0f;
											}

										}

									}

								}

							}
							else {
								if (x[1] <= 1.325) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.125) {
											if (x[1] <= -0.175) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
												if (x[2] <= -0.025) {
													if (x[4] <= 0.625) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}

										}
										else {
											if (x[1] <= -0.025) {
												if (x[4] <= 0.725) {
													if (x[4] <= 0.625) {
														if (x[1] <= -0.075) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}

														}

													}
													else {
														if (x[2] <= -0.025) {
															if (x[1] <= -0.075) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																if (x[4] <= 0.675) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}

														}
														else {
															if (x[1] <= -0.075) {
																if (x[2] <= 0.025) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	if (x[4] <= 0.675) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}

																}

															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}

													}

												}
												else {
													if (x[2] <= -0.025) {
														if (x[1] <= -0.075) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														if (x[1] <= -0.075) {
															if (x[2] <= 0.025) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 0.025) {
													if (x[2] <= 0.025) {
														if (x[4] <= 0.625) {
															result[0] = 0.0f; result[1] = 20.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														if (x[4] <= 0.675) {
															result[0] = 0.0f; result[1] = 20.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}

												}
												else {
													if (x[4] <= 0.625) {
														if (x[1] <= 0.075) {
															result[0] = 0.0f; result[1] = 20.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 20.0f;
													}

												}

											}

										}

									}
									else {
										if (x[5] <= 0.125) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[1] <= -0.025) {
												if (x[4] <= 0.625) {
													if (x[1] <= -0.125) {
														if (x[1] <= -0.175) {
															result[0] = 20.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 10.0f; result[1] = 10.0f;
														}

													}
													else {
														if (x[1] <= -0.075) {
															if (x[2] <= -0.025) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 20.0f; result[1] = 10.0f;
															}

														}
														else {
															if (x[2] <= -0.025) {
																if (x[4] <= 0.575) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= -0.125) {
														if (x[1] <= -0.175) {
															result[0] = 15.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}
													else {
														if (x[1] <= -0.075) {
															if (x[2] <= -0.025) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 15.0f; result[1] = 10.0f;
															}

														}
														else {
															if (x[4] <= 0.725) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (x[1] <= 0.025) {
													if (x[2] <= 0.025) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														if (x[4] <= 0.725) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}

												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= 1.425) {
										if (x[4] <= 0.725) {
											if (x[1] <= 1.375) {
												if (x[4] <= 0.625) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}
											else {
												result[0] = 5.0f; result[1] = 10.0f;
											}

										}
										else {
											result[0] = 5.0f; result[1] = 10.0f;
										}

									}
									else {
										if (x[4] <= 0.625) {
											result[0] = 0.0f; result[1] = 20.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 20.0f;
										}

									}

								}

							}

						}
						else {
							if (x[3] <= -0.25) {
								if (x[0] <= -0.025) {
									if (x[1] <= 1.325) {
										if (x[5] <= -0.125) {
											if (0.005461137902708306*x[0]-5.1185851650953555*x[1]+0.22744658106920065*x[2]+0.03276682823001517*x[3]-0.675149102668307*x[4]+0.02730568910665029*x[5]-0.10922275642660116 <= 0) {
												if (x[1] <= -0.075) {
													if (x[2] <= 0.025) {
														if (x[1] <= -0.125) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															if (x[2] <= -0.025) {
																if (x[4] <= 0.875) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}

													}
													else {
														if (x[4] <= 0.925) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}

												}
												else {
													if (x[4] <= 0.925) {
														if (-0.00039326116424673167*x[0]+0.29961021509489805*x[1]-0.29125876690885455*x[2]-0.0023595670440807524*x[3]+0.006428314430781798*x[4]-0.0019663057919328385*x[5]+0.007865223167731354 <= 0) {
															if (x[1] <= -0.025) {
																if (x[4] <= 0.875) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}

																}

															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														if (x[2] <= 0.025) {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}
														else {
															if (x[1] <= -0.025) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= -0.175) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													if (x[4] <= 0.925) {
														if (x[2] <= -0.025) {
															if (x[4] <= 0.825) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}

											}

										}
										else {
											if (x[5] <= 0.125) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
												if (x[1] <= -0.075) {
													if (x[4] <= 0.875) {
														if (0.0005092803193486591*x[0]-0.19474664887985838*x[1]+0.20033984976461988*x[2]+0.0030556819919805743*x[3]-0.008319933742432582*x[4]-0.002546401558799044*x[5]-0.010185606235196177 <= 0) {
															if (x[4] <= 0.825) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}
														else {
															if (x[4] <= 0.825) {
																if (x[1] <= -0.175) {
																	result[0] = 10.0f; result[1] = 10.0f;
																}
																else {
																	if (x[1] <= -0.125) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 10.0f; result[1] = 10.0f;
																	}

																}

															}
															else {
																if (x[1] <= -0.175) {
																	result[0] = 10.0f; result[1] = 10.0f;
																}
																else {
																	if (x[1] <= -0.125) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 10.0f; result[1] = 10.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																if (x[4] <= 0.925) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}

													}

												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 1.375) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[4] <= 0.875) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 20.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 1.325) {
										if (x[5] <= -0.125) {
											if (-0.0014500385198071726*x[0]-6.6539459030314845*x[1]+0.5242346208115273*x[2]+0.02089073909644394*x[3]-1.0123425258846555*x[4]+0.017408948555275548*x[5]-0.06963579422110219 <= 0) {
												if (x[4] <= 0.925) {
													if (x[1] <= -0.075) {
														if (x[2] <= 0.025) {
															if (x[1] <= -0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.875) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}

															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (0.0003889609582668088*x[0]+0.5986626321148961*x[1]-0.5665435190842556*x[2]-0.004807294148633292*x[3]+0.012611831844068002*x[4]-0.004006078298008297*x[5]+0.016024313192033186 <= 0) {
															if (x[4] <= 0.875) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}

												}
												else {
													if (x[1] <= -0.125) {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[1] <= -0.075) {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[2] <= 0.025) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}
															else {
																if (x[1] <= -0.025) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (x[1] <= -0.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= -0.025) {
														if (x[4] <= 0.825) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[5] <= 0.125) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.075) {
													if (x[4] <= 0.875) {
														if (-0.0004968400884670507*x[0]-0.382201555790437*x[1]+0.40048329263814525*x[2]+0.006081277168078537*x[3]-0.016395722886799677*x[4]-0.005067730772026223*x[5]-0.02027092308810489 <= 0) {
															if (x[4] <= 0.825) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= -0.125) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[4] <= 0.825) {
																if (x[1] <= -0.175) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[1] <= -0.125) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[0] <= 0.025) {
																	if (x[1] <= -0.175) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[1] <= -0.125) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (-0.0004551032643299303*x[0]-0.3824226644632712*x[1]+0.40042362248450153*x[2]+0.0055704208311996295*x[3]-0.01683882005622286*x[4]-0.004642017174876725*x[5]-0.0185680686995069 <= 0) {
															if (x[1] <= -0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[1] <= -0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= -0.125) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 1.375) {
											result[0] = 0.0f; result[1] = 10.0f;
										}
										else {
											if (x[4] <= 0.875) {
												result[0] = 0.0f; result[1] = 10.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 10.0f;
											}

										}

									}

								}

							}
							else {
								if (x[4] <= 0.925) {
									if (x[1] <= 1.325) {
										if (x[5] <= -0.125) {
											if (x[1] <= -0.175) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.125) {
													if (x[4] <= 0.875) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= -0.075) {
														if (x[2] <= 0.025) {
															if (x[4] <= 0.875) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (0.8967262678158958*x[1]-0.8275415569062201*x[2]-0.004992559606736749*x[3]+0.018945075801532575*x[4]-0.006240699415430088*x[5]+0.02496279766172035 <= 0) {
															if (x[4] <= 0.875) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}

												}

											}

										}
										else {
											if (x[5] <= 0.125) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.075) {
													if (x[1] <= -0.125) {
														if (x[1] <= -0.175) {
															if (x[4] <= 0.875) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= 0.825) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.875) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[2] <= -0.025) {
															if (x[4] <= 0.825) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= 0.875) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 1.375) {
											if (x[4] <= 0.875) {
												result[0] = 0.0f; result[1] = 10.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 10.0f;
											}

										}
										else {
											if (x[4] <= 0.875) {
												result[0] = 0.0f; result[1] = 10.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 10.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 1.325) {
										if (x[5] <= -0.125) {
											if (x[1] <= -0.175) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.125) {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= -0.075) {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (0.2996324105871137*x[1]-0.2912661673933071*x[2]-0.001453782712257857*x[3]+0.006905467693675786*x[4]-0.0018172283632441636*x[5]+0.0072689134529766546 <= 0) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}

												}

											}

										}
										else {
											if (x[5] <= 0.125) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.075) {
													if (x[1] <= -0.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 1.375) {
											result[0] = 0.0f; result[1] = 10.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 10.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[4] <= 0.725) {
							if (x[4] <= 0.675) {
								if (x[1] <= 1.325) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.175) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.125) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.025) {
													if (-1.4460172673679792*x[1]+1.5254151771727362*x[2]-0.058175462455011054*x[3]-1.2296161541153725*x[4]-0.14543865397032468*x[5]+0.5817546158812987 <= 0) {
														if (x[2] <= -0.025) {
															if (x[1] <= -0.075) {
																if (x[4] <= 0.625) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[4] <= 0.575) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[1] <= -0.075) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[4] <= 0.625) {
														if (x[1] <= 0.025) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														if (x[1] <= 0.025) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[5] <= 0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.025) {
												if (x[1] <= -0.075) {
													if (x[4] <= 0.625) {
														if (-0.5618517002725264*x[1]+0.6005674192870694*x[2]+0.0038698980234766877*x[3]-0.021604309209504662*x[4]-0.009674744914527559*x[5]-0.038698979658110234 <= 0) {
															if (x[1] <= -0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.575) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[1] <= -0.175) {
																result[0] = 10.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= -0.125) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (-0.28891811426331554*x[1]+0.30056259371886745*x[2]+0.0018517450783393855*x[3]-0.012036342388362029*x[4]-0.004629362626866232*x[5]-0.01851745050746493 <= 0) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= -0.175) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= -0.125) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[4] <= 0.625) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.025) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= 0.625) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= 1.375) {
										if (x[4] <= 0.625) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[1] <= 1.425) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= 0.625) {
												result[0] = 0.0f; result[1] = 20.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 20.0f;
											}

										}

									}

								}

							}
							else {
								if (x[1] <= 1.325) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.175) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.125) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.025) {
													if (x[2] <= -0.025) {
														if (x[1] <= -0.075) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 20.0f;
												}

											}

										}

									}
									else {
										if (x[5] <= 0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.025) {
												if (x[1] <= -0.075) {
													if (-0.2890194829906418*x[1]+0.30053516818111004*x[2]+0.001774760452675096*x[3]-0.01242332277203328*x[4]-0.004436901065572195*x[5]-0.01774760426228878 <= 0) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.175) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= -0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[1] <= 0.025) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= 1.425) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 20.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 1.325) {
								if (x[5] <= -0.125) {
									if (x[1] <= -0.125) {
										if (x[1] <= -0.175) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[2] <= -0.025) {
												if (x[4] <= 0.825) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (x[4] <= 0.875) {
											if (x[1] <= -0.025) {
												if (x[2] <= -0.025) {
													if (x[1] <= -0.075) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														if (x[4] <= 0.825) {
															result[0] = 0.0f; result[1] = 20.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}

												}
												else {
													if (x[1] <= -0.075) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 20.0f;
											}

										}
										else {
											if (x[1] <= -0.075) {
												if (x[4] <= 0.925) {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}

											}
											else {
												if (x[2] <= -0.025) {
													result[0] = 0.0f; result[1] = 20.0f;
												}
												else {
													if (x[1] <= -0.025) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															if (x[4] <= 0.925) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 20.0f;
													}

												}

											}

										}

									}

								}
								else {
									if (x[5] <= 0.125) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										if (x[1] <= -0.075) {
											if (x[4] <= 0.875) {
												if (x[4] <= 0.775) {
													if (-0.28911937356837547*x[1]+0.3005081425428933*x[2]+0.001698898423053417*x[3]-0.012741737983035196*x[4]-0.004247245994344501*x[5]-0.016988983977378004 <= 0) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.175) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= -0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= -0.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															if (x[4] <= 0.825) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= -0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= -0.025) {
												if (x[2] <= -0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= 0.875) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[4] <= 0.875) {
									result[0] = 0.0f; result[1] = 10.0f;
								}
								else {
									if (x[1] <= 1.375) {
										result[0] = 0.0f; result[1] = 10.0f;
									}
									else {
										if (x[4] <= 0.925) {
											result[0] = 0.0f; result[1] = 10.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 10.0f;
										}

									}

								}

							}

						}

					}

				}
				else {
					if (x[3] <= -0.25) {
						if (x[0] <= -0.025) {
							if (x[4] <= 1.175) {
								if (x[1] <= 1.325) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.175) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[1] <= -0.125) {
												if (x[2] <= -0.025) {
													if (x[4] <= 1.075) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}
											else {
												if (x[2] <= 0.025) {
													if (x[1] <= -0.075) {
														if (x[2] <= -0.025) {
															if (x[4] <= 1.125) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 20.0f;
														}
														else {
															if (x[4] <= 1.125) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= -0.075) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														if (x[1] <= -0.025) {
															result[0] = 0.0f; result[1] = 20.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[5] <= 0.125) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[1] <= -0.075) {
												if (x[4] <= 1.125) {
													if (x[1] <= -0.125) {
														if (x[4] <= 1.075) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															if (x[1] <= -0.175) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}

													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}

												}
												else {
													if (x[1] <= -0.125) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}

												}

											}
											else {
												result[0] = 5.0f; result[1] = 10.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 1.375) {
										result[0] = 0.0f; result[1] = 20.0f;
									}
									else {
										if (x[4] <= 1.125) {
											result[0] = 0.0f; result[1] = 20.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 20.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= 1.325) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.175) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[1] <= -0.125) {
												if (x[2] <= -0.025) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 10.0f;
												}

											}
											else {
												if (x[2] <= 0.025) {
													if (x[1] <= -0.075) {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 20.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 20.0f;
													}

												}
												else {
													if (x[1] <= -0.075) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 20.0f;
													}

												}

											}

										}

									}
									else {
										if (x[5] <= 0.125) {
											result[0] = 5.0f; result[1] = 10.0f;
										}
										else {
											if (x[1] <= -0.075) {
												if (x[1] <= -0.175) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													if (x[1] <= -0.125) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

													}

												}

											}
											else {
												result[0] = 5.0f; result[1] = 10.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 1.375) {
										result[0] = 0.0f; result[1] = 20.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 20.0f;
									}

								}

							}

						}
						else {
							if (x[4] <= 1.175) {
								if (x[1] <= 1.325) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.175) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.125) {
												if (x[2] <= -0.025) {
													if (x[4] <= 1.075) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[2] <= 0.025) {
													if (x[1] <= -0.075) {
														if (x[2] <= -0.025) {
															if (x[4] <= 1.125) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 10.0f;
														}

													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 20.0f;
														}
														else {
															if (x[4] <= 1.125) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= -0.075) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}

												}

											}

										}

									}
									else {
										if (x[5] <= 0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.075) {
												if (x[4] <= 1.125) {
													if (x[1] <= -0.125) {
														if (x[4] <= 1.075) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= -0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= -0.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 1.375) {
										result[0] = 0.0f; result[1] = 10.0f;
									}
									else {
										if (x[4] <= 1.125) {
											result[0] = 0.0f; result[1] = 20.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 20.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= 1.325) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.175) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.125) {
												if (x[2] <= -0.025) {
													result[0] = 0.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[2] <= 0.025) {
													if (x[1] <= -0.075) {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 20.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 20.0f;
													}

												}
												else {
													if (x[1] <= -0.075) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 20.0f;
													}

												}

											}

										}

									}
									else {
										if (x[5] <= 0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.075) {
												if (x[1] <= -0.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= -0.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 1.375) {
										result[0] = 0.0f; result[1] = 20.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 20.0f;
									}

								}

							}

						}

					}
					else {
						if (-0.19615332657774795*x[1]+0.19722805724993375*x[2]-22.84074784548814*x[3]-8.213426685485027*x[4]+0.5875596973313875*x[5]+5.002583216568425 <= 0) {
							if (-0.08193985593618137*x[1]+0.17605631874674585*x[2]+18.604375928941455*x[3]+13.905274284792435*x[4]+0.08318085037899745*x[5]-13.88812511889078 <= 0) {
								if (x[1] <= 1.325) {
									if (x[1] <= 0.575) {
										if (x[1] <= -0.225) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[5] <= -0.125) {
												if (x[1] <= -0.125) {
													if (x[1] <= -0.175) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[3] <= -0.15) {
															if (x[2] <= -0.025) {
																if (x[4] <= 1.175) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[2] <= -0.025) {
																if (x[4] <= 1.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[2] <= -0.025) {
														if (x[1] <= -0.075) {
															if (x[3] <= -0.15) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														if (x[3] <= -0.15) {
															if (x[1] <= -0.075) {
																if (x[2] <= 0.025) {
																	if (x[4] <= 1.175) {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	if (x[1] <= -0.025) {
																		if (x[4] <= 1.175) {
																			result[0] = 0.0f; result[1] = 10.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 20.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= -0.075) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (4.995984262426022*x[1]+0.9740861792074652*x[2]+0.07264285405183804*x[3]+0.8439600146356507*x[4]-4.266306387359683*x[5]+0.8612649095430668 <= 0) {
													if (x[1] <= -0.175) {
														if (x[4] <= 1.075) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[3] <= -0.15) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[3] <= -0.15) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= -0.075) {
														if (x[5] <= 0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																if (x[4] <= 1.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[3] <= -0.15) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[3] <= -0.15) {
											if (x[4] <= 1.175) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[1] <= 1.375) {
										if (x[3] <= -0.15) {
											if (x[4] <= 1.175) {
												result[0] = 0.0f; result[1] = 10.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 20.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 10.0f;
										}

									}
									else {
										if (x[3] <= -0.15) {
											result[0] = 0.0f; result[1] = 20.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 20.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= 1.325) {
									if (x[5] <= -0.125) {
										if (-5.822759109971273*x[1]+0.2710601268741724*x[2]+0.011585178133193118*x[3]-0.6479306732567832*x[4]+0.02896294490140018*x[5]-0.11585177960560072 <= 0) {
											if (x[1] <= -0.125) {
												if (x[2] <= -0.025) {
													if (x[4] <= 1.175) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[4] <= 1.175) {
													if (x[1] <= -0.075) {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 20.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 10.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 20.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 20.0f;
												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[5] <= 0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.075) {
												if (x[1] <= -0.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= -0.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 1.375) {
										if (x[4] <= 1.175) {
											result[0] = 0.0f; result[1] = 10.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 20.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 20.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 1.325) {
								if (x[5] <= -0.125) {
									if (x[1] <= -0.175) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										if (-5.211428326806109*x[1]+1.4659247147056773*x[2]+0.18099997745133234*x[3]+0.3878421052965623*x[4]+0.2262499684427624*x[5]-0.9049998737710496 <= 0) {
											if (x[1] <= -0.075) {
												if (x[2] <= -0.025) {
													result[0] = 0.0f; result[1] = 20.0f;
												}
												else {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (0.896874006615783*x[1]-0.8275907956082539*x[2]-0.004186810332873609*x[3]+0.019625826199922067*x[4]-0.005233512838104842*x[5]+0.020934051352419367 <= 0) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 20.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 20.0f;
												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[1] <= -0.075) {
										if (x[5] <= 0.125) {
											if (x[4] <= 1.175) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (-0.5638058889244907*x[1]+0.5905298409502097*x[2]-0.04403608585763481*x[3]-0.2794612820803373*x[4]+0.05504510650180491*x[5]+0.22018042600721963 <= 0) {
												if (0.5237248836439935*x[1]-0.6029141531096548*x[2]-0.10875341615155437*x[3]-0.5222925544926355*x[4]+0.13594176816375478*x[5]+0.5437670726550191 <= 0) {
													if (x[4] <= 1.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[1] <= -0.175) {
													if (x[4] <= 1.075) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (x[1] <= 1.375) {
									result[0] = 0.0f; result[1] = 10.0f;
								}
								else {
									if (x[4] <= 1.125) {
										result[0] = 0.0f; result[1] = 20.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 20.0f;
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
		if (x[3] <= 0.05) {
			if (x[4] <= -0.025) {
				if (x[4] <= -0.725) {
					if (x[4] <= -0.975) {
						if (x[1] <= -1.175) {
							if (x[1] <= -1.325) {
								if (x[4] <= -1.125) {
									if (x[1] <= -1.375) {
										result[0] = 20.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 15.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[1] <= -1.375) {
										result[0] = 15.0f; result[1] = 0.0f;
									}
									else {
										if (x[4] <= -1.075) {
											result[0] = 15.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 10.0f; result[1] = 0.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= -1.275) {
									if (x[4] <= -1.075) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[4] <= -1.125) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}

						}
						else {
							if (x[5] <= 0.125) {
								if (x[1] <= -1.075) {
									if (x[4] <= -1.125) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[5] <= -0.125) {
										if (x[1] <= 0.075) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= 0.175) {
												if (x[4] <= -1.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.125) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[4] <= -1.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (7.655836015304074*x[1]-1.341906685184907*x[2]+2.4708585905469462*x[4]+0.02385482892422862*x[5]+0.09541931569691448 <= 0) {
									if (x[1] <= 0.125) {
										if (x[4] <= -1.125) {
											if (x[4] <= -1.175) {
												if (x[2] <= 0.025) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 20.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 20.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[1] <= 0.075) {
												if (x[2] <= 0.025) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 20.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[2] <= 0.025) {
													if (x[4] <= -1.075) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 10.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 0.225) {
											if (x[1] <= 0.175) {
												if (x[4] <= -1.125) {
													if (x[4] <= -1.175) {
														if (x[2] <= 0.025) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 10.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -1.075) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -1.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[4] <= -1.025) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[4] <= -1.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -1.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -1.025) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= -1.075) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[4] <= -1.075) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[4] <= -1.125) {
												if (x[1] <= 0.275) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= 0.325) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 0.275) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -1.025) {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= 0.325) {
																if (x[2] <= 0.025) {
																	if (x[4] <= -1.075) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}

								}
								else {
									if (x[1] <= 0.425) {
										if (x[4] <= -1.125) {
											if (x[2] <= 0.025) {
												if (x[1] <= 0.375) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}

						}

					}
					else {
						if (x[4] <= -0.775) {
							if (x[1] <= -1.175) {
								if (x[1] <= -1.325) {
									if (x[1] <= -1.375) {
										if (x[4] <= -0.875) {
											result[0] = 10.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= -0.825) {
												result[0] = 5.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 5.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (x[4] <= -0.875) {
											result[0] = 10.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 5.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[4] <= -0.875) {
										if (x[1] <= -1.275) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -1.225) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (x[1] <= -1.275) {
											if (x[4] <= -0.825) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}
							else {
								if (x[5] <= 0.125) {
									if (x[5] <= -0.125) {
										if (x[1] <= 0.025) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= 0.125) {
												if (x[1] <= 0.075) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.875) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.175) {
													if (x[4] <= -0.875) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[4] <= -0.875) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (7.057232411189872*x[1]-1.4184590237454107*x[2]+2.7767722214931494*x[4]+0.1630117339070783*x[5]+0.6520469356283132 <= 0) {
										if (x[1] <= 0.125) {
											if (x[4] <= -0.875) {
												if (x[1] <= 0.075) {
													if (x[4] <= -0.925) {
														result[0] = 10.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 15.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 20.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[4] <= -0.925) {
														result[0] = 10.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 10.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 10.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 0.075) {
													if (x[2] <= 0.025) {
														if (x[2] <= -0.025) {
															if (x[4] <= -0.825) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 20.0f; result[1] = 0.0f;
													}

												}
												else {
													if (0.01370686903626689*x[1]-1.1320756189248546*x[2]+0.18280441232244454*x[4]+0.03426717208004668*x[5]+0.13706868832018673 <= 0) {
														if (x[2] <= 0.025) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.825) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[4] <= -0.875) {
												if (x[1] <= 0.175) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.925) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[1] <= 0.225) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.925) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 0.225) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 0.175) {
													if (x[2] <= -0.025) {
														if (x[4] <= -0.825) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (0.026955805909690794*x[1]-1.1320756203434752*x[2]+0.18465181577032244*x[4]+0.0336947568850215*x[5]+0.134779027540086 <= 0) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.825) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 0.325) {
											if (x[4] <= -0.875) {
												if (x[2] <= 0.025) {
													if (x[1] <= 0.275) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}
						else {
							if (x[1] <= -1.075) {
								if (x[1] <= -1.275) {
									if (x[1] <= -1.375) {
										result[0] = 5.0f; result[1] = 0.0f;
									}
									else {
										if (x[1] <= -1.325) {
											result[0] = 5.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[1] <= -1.225) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (x[5] <= 0.125) {
									if (x[5] <= -0.125) {
										if (x[1] <= 0.025) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= 0.125) {
												if (x[1] <= 0.075) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 10.0f;
												}

											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[1] <= 0.375) {
										if (x[1] <= 0.225) {
											if (x[1] <= 0.125) {
												if (x[2] <= 0.025) {
													result[0] = 5.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.075) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[2] <= 0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.175) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 0.275) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (x[1] <= 0.425) {
											if (x[2] <= 0.025) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}

					}

				}
				else {
					if (x[4] <= -0.275) {
						if (x[4] <= -0.525) {
							if (x[1] <= -1.175) {
								if (x[1] <= -1.325) {
									if (x[1] <= -1.425) {
										result[0] = 15.0f; result[1] = 0.0f;
									}
									else {
										if (x[1] <= -1.375) {
											if (x[4] <= -0.625) {
												result[0] = 5.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[4] <= -0.625) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (x[4] <= -0.625) {
										if (x[1] <= -1.275) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -1.225) {
												if (x[4] <= -0.675) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (x[5] <= 0.125) {
									if (x[1] <= -1.075) {
										if (x[4] <= -0.675) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[5] <= -0.125) {
											if (-6.549988157947635*x[1]-0.7086493120948617*x[2]-1.5452860131836483*x[4]+0.12993000909039382*x[5]-0.5197200363615753 <= 0) {
												if (x[4] <= -0.625) {
													if (0.5622042894406158*x[1]-0.600472716674125*x[2]+0.023532772910852984*x[4]+0.0089771008631669*x[5]-0.0359084034526676 <= 0) {
														if (x[1] <= 0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[1] <= 0.125) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															if (x[1] <= 0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 0.075) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (0.5618173395638733*x[1]-0.6005766466859608*x[2]+0.021756133509924103*x[4]+0.009742734230467724*x[5]-0.0389709369218709 <= 0) {
															if (x[1] <= 0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[1] <= 0.125) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																if (x[1] <= 0.175) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (x[1] <= -0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.625) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= 0.025) {
															if (x[2] <= -0.025) {
																if (x[4] <= -0.575) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (7.131141741469044*x[1]-1.080935806607955*x[2]+1.9913702849436419*x[4]-0.25892415825163906*x[5]-1.0356966330065562 <= 0) {
										if (x[1] <= 0.125) {
											if (x[1] <= 0.075) {
												if (x[4] <= -0.625) {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.675) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 15.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= 0.025) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														if (0.005956515707130915*x[1]-1.1320756523527347*x[2]+0.22640515460666666*x[4]+0.029782578091858546*x[5]+0.11913031236743418 <= 0) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[4] <= -0.625) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (0.011850270814191483*x[1]-1.13207565254954*x[2]+0.2267580874416662*x[4]+0.02962567659402293*x[5]+0.11850270637609173 <= 0) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (3.6243598130629344*x[1]-0.7127442646726324*x[2]+2.5546446375975314*x[4]+0.2539376209561815*x[5]+1.015750483824726 <= 0) {
												if (x[2] <= 0.025) {
													if (x[4] <= -0.675) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= 0.175) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.275) {
													if (x[4] <= -0.675) {
														if (x[1] <= 0.225) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[1] <= 0.175) {
															if (-0.017620690208611175*x[1]+1.1320756528709834*x[2]-0.2273381171207214*x[4]-0.02936781584738026*x[5]-0.11747126338952105 <= 0) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.625) {
																	if (x[1] <= 0.225) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.675) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.575) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= -0.625) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 0.425) {
											if (x[4] <= -0.675) {
												if (x[1] <= 0.375) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}
						else {
							if (x[1] <= -1.225) {
								if (x[1] <= -1.375) {
									if (x[1] <= -1.425) {
										if (x[4] <= -0.375) {
											if (x[4] <= -0.475) {
												result[0] = 15.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 10.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 5.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[4] <= -0.375) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[4] <= -0.425) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										if (x[1] <= -1.325) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}
							else {
								if (x[5] <= 0.125) {
									if (x[1] <= -1.075) {
										if (x[4] <= -0.425) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -1.175) {
												if (x[4] <= -0.375) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (x[5] <= -0.125) {
											if (x[1] <= -0.025) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= 0.025) {
													if (x[2] <= -0.025) {
														if (x[4] <= -0.475) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.325) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[4] <= -0.475) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[4] <= -0.375) {
														if (x[1] <= 0.075) {
															if (x[4] <= -0.475) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (0.8202149971562561*x[1]-0.8996735105519107*x[2]+0.02526076505168925*x[4]+0.015717940110800046*x[5]-0.06287176044320018 <= 0) {
																if (x[1] <= 0.125) {
																	if (x[4] <= -0.475) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[4] <= -0.425) {
																	result[0] = 5.0f; result[1] = 20.0f;
																}
																else {
																	if (x[1] <= 0.125) {
																		result[0] = 5.0f; result[1] = 20.0f;
																	}
																	else {
																		if (x[1] <= 0.175) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 5.0f; result[1] = 20.0f;
																		}

																	}

																}

															}

														}

													}
													else {
														if (x[1] <= 0.125) {
															if (x[1] <= 0.075) {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= -0.325) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
															}

														}

													}

												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (7.199794828741225*x[1]-1.2950210691919117*x[2]+4.01935557640641*x[4]-0.16636066984988096*x[5]-0.6654426793995238 <= 0) {
										if (x[1] <= 0.125) {
											if (x[4] <= -0.375) {
												if (x[1] <= 0.075) {
													if (x[1] <= 0.025) {
														if (x[4] <= -0.425) {
															if (x[4] <= -0.475) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= -0.025) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[1] <= -0.025) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 10.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[2] <= 0.025) {
															if (x[4] <= -0.475) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= -0.425) {
																result[0] = 10.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[4] <= -0.475) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.425) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= 0.075) {
													if (x[1] <= -0.025) {
														if (x[4] <= -0.325) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[1] <= 0.025) {
															if (x[2] <= -0.025) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.325) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (0.003986120289571403*x[1]-1.1320756425035623*x[2]+0.2680580827533902*x[4]+0.01993060115086659*x[5]+0.07972240460346636 <= 0) {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.325) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (-5.958074106784273*x[1]+1.4789413363488475*x[2]-2.887670469775193*x[4]-0.0382810094028142*x[5]-0.1531240376112568 <= 0) {
												if (x[1] <= 0.225) {
													if (x[4] <= -0.425) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= 0.175) {
															if (x[4] <= -0.325) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[4] <= -0.425) {
														if (x[1] <= 0.275) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[4] <= -0.325) {
															if (x[4] <= -0.375) {
																if (x[2] <= -0.025) {
																	if (x[1] <= 0.275) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[1] <= 0.275) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[2] <= -0.025) {
													if (x[4] <= -0.425) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 0.425) {
											if (x[4] <= -0.425) {
												if (-0.4965386936299405*x[1]+0.8432984471483863*x[2]+0.17354360297895652*x[4]+0.06439103631257448*x[5]+0.2575641452502979 <= 0) {
													if (x[1] <= 0.375) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[4] <= -0.225) {
							if (x[1] <= -1.125) {
								if (x[1] <= -1.325) {
									if (x[1] <= -1.425) {
										result[0] = 5.0f; result[1] = 0.0f;
									}
									else {
										if (x[1] <= -1.375) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[1] <= -1.225) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (x[5] <= 0.125) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.025) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= 0.025) {
												if (x[2] <= -0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[1] <= 0.125) {
													if (x[1] <= 0.075) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 10.0f;
												}

											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[1] <= 0.325) {
										if (x[1] <= 0.125) {
											if (x[1] <= 0.025) {
												if (x[1] <= -0.025) {
													result[0] = 10.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[1] <= 0.075) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 0.225) {
												if (x[2] <= 0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.175) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[2] <= 0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.275) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 0.375) {
											if (x[2] <= 0.025) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}
						else {
							if (x[1] <= -1.225) {
								if (x[1] <= -1.375) {
									if (x[1] <= -1.425) {
										if (x[4] <= -0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[4] <= -0.175) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[1] <= -1.325) {
										if (x[4] <= -0.175) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[4] <= -0.175) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= 1.375) {
									if (x[5] <= 0.125) {
										if (x[5] <= -0.125) {
											if (x[1] <= -0.125) {
												if (x[1] <= -1.125) {
													if (x[4] <= -0.175) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[1] <= -0.025) {
													if (x[1] <= -0.075) {
														if (x[4] <= -0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= 0.025) {
														if (2.1428139795034875*x[2]-0.9681990248111786*x[4]+0.028109044715355653*x[5]-0.11243617886142261 <= 0) {
															if (x[4] <= -0.075) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[1] <= 0.125) {
															if (x[4] <= -0.125) {
																if (x[1] <= 0.075) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}
															else {
																if (x[1] <= 0.075) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															if (x[4] <= -0.075) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[1] <= -1.125) {
												if (x[4] <= -0.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (7.083909471464525*x[1]-1.0726855421567536*x[2]+1.7836729874248922*x[4]-0.4118905276896416*x[5]-1.6475621107585663 <= 0) {
											if (x[1] <= 0.125) {
												if (x[1] <= 0.025) {
													if (x[1] <= -0.025) {
														if (x[4] <= -0.125) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= -0.075) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 15.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[2] <= -0.025) {
															if (x[4] <= -0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[2] <= 0.025) {
																if (x[4] <= -0.175) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= -0.075) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[4] <= -0.125) {
																	result[0] = 15.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= -0.075) {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}

												}
												else {
													if (x[1] <= 0.075) {
														if (x[2] <= 0.025) {
															if (x[4] <= -0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= -0.125) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[2] <= 0.025) {
															if (x[4] <= -0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.075) {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= -0.125) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[1] <= 0.175) {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.175) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.075) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= -0.125) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[4] <= -0.175) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[4] <= -0.175) {
														if (x[1] <= 0.225) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= 0.275) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 0.225) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= 0.025) {
																if (x[4] <= -0.075) {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= -0.125) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[1] <= 0.375) {
												if (x[4] <= -0.175) {
													if (x[1] <= 0.325) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 1.425) {
										if (x[4] <= -0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}

						}

					}

				}

			}
			else {
				if (x[4] <= 0.675) {
					if (x[4] <= 0.225) {
						if (x[1] <= -1.325) {
							if (x[4] <= 0.075) {
								if (x[1] <= -1.425) {
									result[0] = 0.0f; result[1] = 0.0f;
								}
								else {
									result[0] = 0.0f; result[1] = 0.0f;
								}

							}
							else {
								if (x[1] <= -1.425) {
									result[0] = 0.0f; result[1] = 0.0f;
								}
								else {
									if (x[4] <= 0.125) {
										if (x[1] <= -1.375) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 1.375) {
								if (x[5] <= 0.125) {
									if (x[1] <= -1.225) {
										if (x[4] <= 0.075) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (-1.7938193527492734*x[1]-1.060456018100047*x[2]-0.7859617049853993*x[4]+12.455843782537125*x[5]+3.226560632859421 <= 0) {
											if (x[1] <= 0.075) {
												if (x[2] <= 0.025) {
													if (x[1] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= 0.125) {
															result[0] = 0.0f; result[1] = 20.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}

												}
												else {
													if (x[1] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= 0.175) {
															if (x[1] <= 0.025) {
																if (x[4] <= 0.125) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[1] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= 0.125) {
													if (x[4] <= 0.125) {
														result[0] = 0.0f; result[1] = 20.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 20.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 20.0f;
												}

											}

										}
										else {
											if (x[5] <= -0.125) {
												if (x[1] <= -0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= -0.025) {
														if (x[4] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																if (x[1] <= -0.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= 0.125) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[2] <= -0.025) {
															if (x[4] <= 0.075) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																if (x[4] <= 0.125) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	if (x[4] <= 0.175) {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 20.0f;
																	}

																}

															}

														}
														else {
															if (x[2] <= 0.025) {
																if (x[1] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 20.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (7.56108363384118*x[1]-1.328403164174017*x[2]+2.4314539509116027*x[4]-0.3975677940184894*x[5]-1.5902711760739576 <= 0) {
										if (x[1] <= 0.025) {
											if (x[1] <= -0.025) {
												if (x[4] <= 0.125) {
													if (x[4] <= 0.025) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.075) {
															result[0] = 10.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 10.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= -0.075) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[4] <= 0.025) {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[2] <= -0.025) {
														if (x[4] <= 0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= 0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[4] <= 0.175) {
															if (x[2] <= 0.025) {
																if (x[4] <= 0.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= 0.125) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (4.43597344234213*x[1]-0.9134243156254424*x[2]+2.1735785256097464*x[4]-0.17666330162920368*x[5]-0.7066532065168147 <= 0) {
												if (x[2] <= 0.025) {
													if (x[1] <= 0.125) {
														if (x[4] <= 0.075) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= 0.175) {
																if (x[4] <= 0.125) {
																	if (x[1] <= 0.075) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[2] <= -0.025) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= 0.075) {
														if (x[4] <= 0.075) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[4] <= 0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[4] <= 0.075) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= 0.175) {
														if (x[1] <= 0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= 0.175) {
																	if (x[2] <= 0.025) {
																		if (x[4] <= 0.125) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 0.275) {
											if (x[4] <= 0.075) {
												if (x[2] <= 0.025) {
													if (x[1] <= 0.225) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}
							else {
								if (x[4] <= 0.025) {
									result[0] = 0.0f; result[1] = 0.0f;
								}
								else {
									if (x[1] <= 1.425) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										if (x[4] <= 0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[1] <= 1.375) {
							if (x[1] <= -1.375) {
								if (-1.89422696023074*x[1]-1.3777577541288643e-16*x[2]-2.2088792067346725*x[4]+0.021587623520786553*x[5]-1.921835782960859 <= 0) {
									if (x[1] <= -1.425) {
										if (x[4] <= 0.575) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[1] <= -1.425) {
										if (x[4] <= 0.325) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (x[5] <= 0.125) {
									if (x[5] <= -0.125) {
										if (-9.315915708348912*x[1]+0.7497978981560346*x[2]-1.770005368307992*x[4]-0.06225486888931916*x[5]+0.24901947555727663 <= 0) {
											if (x[4] <= 0.475) {
												if (x[4] <= 0.375) {
													if (x[1] <= 0.025) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}
												else {
													if (x[1] <= -0.025) {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[4] <= 0.425) {
															if (x[1] <= 0.025) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
															}

														}
														else {
															if (x[1] <= 0.025) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= -0.025) {
													if (x[2] <= -0.025) {
														if (x[4] <= 0.575) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= 0.025) {
														if (x[4] <= 0.625) {
															result[0] = 0.0f; result[1] = 20.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 20.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= -0.125) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= 0.625) {
													if (x[1] <= -0.075) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 1.325) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= 0.625) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 0.075) {
										if (x[1] <= -0.025) {
											if (x[4] <= 0.375) {
												if (x[4] <= 0.275) {
													if (x[1] <= -0.075) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[1] <= -0.075) {
													if (x[1] <= -0.125) {
														if (x[4] <= 0.625) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= -0.175) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[4] <= 0.575) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[4] <= 0.475) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= 0.625) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (2.4936013404511885*x[1]-2.4146033686600927*x[2]+3.1519715366432344*x[4]-0.44513189032156236*x[5]-1.7805275612862494 <= 0) {
												if (x[1] <= 0.025) {
													if (x[2] <= 0.025) {
														if (x[4] <= 0.375) {
															if (x[4] <= 0.325) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[4] <= 0.475) {
																if (x[4] <= 0.425) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[4] <= 0.375) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= 0.475) {
																if (x[4] <= 0.425) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= 0.325) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= 0.475) {
																if (x[4] <= 0.425) {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= 0.375) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[4] <= 0.325) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[2] <= 0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 1.325) {
											if (x[1] <= 0.125) {
												if (x[4] <= 0.325) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[4] <= 0.625) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[1] <= 1.425) {
								if (x[4] <= 0.475) {
									result[0] = 0.0f; result[1] = 0.0f;
								}
								else {
									result[0] = 0.0f; result[1] = 0.0f;
								}

							}
							else {
								if (x[4] <= 0.475) {
									if (x[4] <= 0.375) {
										result[0] = 0.0f; result[1] = 10.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 10.0f;
									}

								}
								else {
									if (x[4] <= 0.625) {
										result[0] = 0.0f; result[1] = 20.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 20.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[4] <= 0.925) {
						if (x[1] <= 1.325) {
							if (x[5] <= -0.125) {
								if (x[1] <= -0.175) {
									result[0] = 0.0f; result[1] = 0.0f;
								}
								else {
									if (x[1] <= -0.075) {
										if (x[1] <= -0.125) {
											if (x[4] <= 0.875) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[4] <= 0.725) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 10.0f;
											}

										}

									}
									else {
										if (x[4] <= 0.725) {
											if (x[1] <= -0.025) {
												if (x[2] <= -0.025) {
													result[0] = 0.0f; result[1] = 20.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 20.0f;
											}

										}
										else {
											if (0.03708303145807081*x[1]-1.6071423797884354*x[2]+0.9699022925764242*x[4]+0.18541515452745358*x[5]-0.7416606181098143 <= 0) {
												result[0] = 0.0f; result[1] = 10.0f;
											}
											else {
												if (x[2] <= -0.025) {
													result[0] = 0.0f; result[1] = 20.0f;
												}
												else {
													if (x[4] <= 0.875) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 20.0f;
													}

												}

											}

										}

									}

								}

							}
							else {
								if (x[5] <= 0.125) {
									result[0] = 0.0f; result[1] = 0.0f;
								}
								else {
									if (7.0092651585565555*x[1]+0.4138761329297427*x[2]+1.8369489874916682*x[4]-0.2591803358994013*x[5]-1.0367213435976053 <= 0) {
										if (x[1] <= -0.075) {
											if (x[4] <= 0.775) {
												if (-0.5623955359987738*x[1]+0.6004213508349955*x[2]-0.024210501575905197*x[4]-0.008598692112401952*x[5]-0.03439476844960781 <= 0) {
													if (x[1] <= -0.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= -0.175) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[4] <= 0.875) {
													if (x[1] <= -0.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= -0.175) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[4] <= 0.725) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[2] <= -0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 0.025) {
											if (x[4] <= 0.725) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.025) {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= 0.875) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}
						else {
							if (x[4] <= 0.725) {
								if (x[1] <= 1.425) {
									result[0] = 0.0f; result[1] = 0.0f;
								}
								else {
									result[0] = 0.0f; result[1] = 20.0f;
								}

							}
							else {
								if (x[1] <= 1.375) {
									if (x[4] <= 0.875) {
										result[0] = 0.0f; result[1] = 10.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 10.0f;
									}

								}
								else {
									result[0] = 0.0f; result[1] = 10.0f;
								}

							}

						}

					}
					else {
						if (x[4] <= 1.125) {
							if (x[1] <= 1.325) {
								if (x[5] <= -0.125) {
									if (x[1] <= -0.175) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										if (x[4] <= 0.975) {
											if (x[1] <= -0.125) {
												result[0] = 0.0f; result[1] = 10.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 20.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 20.0f;
										}

									}

								}
								else {
									if (x[5] <= 0.125) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										if (x[1] <= -0.075) {
											if (x[1] <= -0.175) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= 0.975) {
													if (x[1] <= -0.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[1] <= -0.025) {
												if (x[4] <= 0.975) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[4] <= 0.975) {
									if (x[1] <= 1.375) {
										result[0] = 0.0f; result[1] = 10.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 20.0f;
									}

								}
								else {
									result[0] = 0.0f; result[1] = 20.0f;
								}

							}

						}
						else {
							if (x[1] <= 1.325) {
								if (x[5] <= -0.125) {
									if (x[1] <= -0.175) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 20.0f;
									}

								}
								else {
									if (x[5] <= 0.125) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										if (x[1] <= -0.075) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}
							else {
								result[0] = 0.0f; result[1] = 20.0f;
							}

						}

					}

				}

			}

		}
		else {
			if (x[3] <= 0.15) {
				if (x[4] <= -0.225) {
					if (x[4] <= -0.475) {
						if (x[4] <= -0.775) {
							if (x[4] <= -0.975) {
								if (x[1] <= -1.225) {
									if (x[1] <= -1.325) {
										result[0] = 15.0f; result[1] = 0.0f;
									}
									else {
										if (x[4] <= -1.125) {
											if (x[1] <= -1.275) {
												result[0] = 5.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 5.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[4] <= -1.075) {
												if (x[1] <= -1.275) {
													result[0] = 5.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (x[5] <= 0.125) {
										if (x[5] <= -0.125) {
											if (x[1] <= 0.075) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= 0.175) {
													if (x[4] <= -1.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= 0.125) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (7.226338329153901*x[1]-1.2219271926528312*x[2]+0.1587297879441373*x[3]+2.8471347216089513*x[4]+0.39682446394718185*x[5]+1.5872978557887274 <= 0) {
											if (x[1] <= 0.125) {
												result[0] = 15.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= -1.125) {
													if (x[4] <= -1.175) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= 0.175) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -1.075) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -1.025) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (0.3174232440807565*x[1]+0.005865521754675952*x[2]+0.011731043509351904*x[3]+0.17183821254953938*x[4]+0.0293276083363646*x[5]+0.1173104333454584 <= 0) {
															result[0] = 15.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= 0.275) {
												if (x[4] <= -1.125) {
													if (x[4] <= -1.175) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[1] <= -1.175) {
									if (x[1] <= -1.325) {
										if (x[4] <= -0.875) {
											if (x[1] <= -1.375) {
												result[0] = 15.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 10.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[1] <= -1.375) {
												if (x[4] <= -0.825) {
													result[0] = 5.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 5.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[5] <= 0.125) {
										if (x[1] <= -1.075) {
											if (x[4] <= -0.875) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[5] <= -0.125) {
												if (x[1] <= 0.075) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.125) {
														if (x[2] <= 0.025) {
															if (x[4] <= -0.875) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[1] <= 0.175) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.875) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (7.053985235109806*x[1]-1.4098745753938184*x[2]+0.013870552499428044*x[3]+2.958725130414458*x[4]+0.03467638073186707*x[5]+0.13870552292746827 <= 0) {
											if (x[1] <= 0.125) {
												if (x[4] <= -0.875) {
													if (x[4] <= -0.925) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= 0.075) {
															result[0] = 15.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= 0.025) {
																result[0] = 10.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 15.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[1] <= 0.075) {
														if (x[2] <= -0.025) {
															if (x[4] <= -0.825) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.825) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= 0.175) {
													if (x[4] <= -0.925) {
														result[0] = 10.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 0.275) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.875) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (-0.03912653325257109*x[1]+1.1320756229895796*x[2]-0.013042177426950997*x[3]-0.18816744967904012*x[4]-0.03260544308151814*x[5]-0.13042177232607255 <= 0) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[1] <= 0.425) {
												if (x[4] <= -0.875) {
													if (x[2] <= 0.025) {
														if (x[1] <= 0.375) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[1] <= -1.175) {
								if (x[4] <= -0.625) {
									if (x[1] <= -1.375) {
										result[0] = 5.0f; result[1] = 0.0f;
									}
									else {
										if (x[1] <= -1.325) {
											if (x[4] <= -0.725) {
												result[0] = 5.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[1] <= -1.325) {
										if (x[1] <= -1.425) {
											result[0] = 15.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[1] <= -1.225) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= -0.525) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[5] <= 0.125) {
									if (x[1] <= -1.075) {
										if (x[4] <= -0.675) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[5] <= -0.125) {
											if (-7.919798699774463*x[1]-0.8638699029122218*x[2]-0.1292212405926618*x[3]-2.431043284546489*x[4]+0.3230530966677547*x[5]-1.292212386671019 <= 0) {
												if (x[1] <= 0.075) {
													if (x[4] <= -0.725) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[4] <= -0.625) {
														if (0.8215350849037504*x[1]-0.8993220384347702*x[2]-0.005199630471521432*x[3]+0.03249756294958567*x[4]+0.012999075985101801*x[5]-0.051996303940407204 <= 0) {
															if (x[1] <= 0.125) {
																if (x[4] <= -0.725) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= -0.675) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																if (x[1] <= 0.125) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	if (x[1] <= 0.175) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= 0.125) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[1] <= 0.175) {
																if (x[4] <= -0.525) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= -0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.625) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (7.902734205383149*x[1]-1.5685053594474152*x[2]-0.03362390695697467*x[3]+3.531461380212137*x[4]-0.08405976613981933*x[5]-0.3362390645592773 <= 0) {
										if (x[1] <= 0.125) {
											if (x[4] <= -0.625) {
												if (x[4] <= -0.675) {
													if (x[1] <= 0.075) {
														if (x[2] <= 0.025) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 15.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= 0.075) {
														if (x[2] <= 0.025) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 15.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.025) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= 0.075) {
															if (x[4] <= -0.525) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 10.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (-5.295726930535802*x[1]+1.240715050566211*x[2]-0.16899479257529532*x[3]-4.817473981131136*x[4]-0.4224869751426953*x[5]-1.6899479005707811 <= 0) {
												if (x[1] <= 0.175) {
													if (x[4] <= -0.525) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[4] <= -0.625) {
														if (x[4] <= -0.675) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= 0.275) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}
													else {
														if (x[1] <= 0.225) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= 0.025) {
																if (-0.6266351640130646*x[1]+0.0027072488538604843*x[2]-0.011153671167794841*x[3]-0.5093442688960724*x[4]-0.027884177503981634*x[5]-0.11153671001592654 <= 0) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[4] <= -0.625) {
													if (x[1] <= 0.325) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= 0.175) {
														if (x[2] <= 0.025) {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.575) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 0.425) {
											if (x[4] <= -0.675) {
												if (x[2] <= 0.025) {
													if (x[1] <= 0.375) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[1] <= 0.325) {
													if (x[4] <= -0.525) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[1] <= -1.325) {
							if (x[1] <= -1.425) {
								if (x[4] <= -0.375) {
									result[0] = 10.0f; result[1] = 0.0f;
								}
								else {
									result[0] = 5.0f; result[1] = 0.0f;
								}

							}
							else {
								if (x[1] <= -1.375) {
									result[0] = 0.0f; result[1] = 0.0f;
								}
								else {
									if (x[4] <= -0.375) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}

						}
						else {
							if (x[5] <= 0.125) {
								if (x[1] <= -1.225) {
									if (x[4] <= -0.425) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.025) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= 0.125) {
												if (x[1] <= 0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.375) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.275) {
															if (x[1] <= 0.075) {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[1] <= 0.075) {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
															}

														}

													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 10.0f;
											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (7.751040914073389*x[1]-1.3549849560387879*x[2]-0.05729205760766607*x[3]+2.042058705174703*x[4]-0.14323014188485306*x[5]-0.5729205675394122 <= 0) {
									if (x[1] <= 0.075) {
										if (x[1] <= 0.025) {
											if (x[4] <= -0.325) {
												if (x[2] <= -0.025) {
													if (x[4] <= -0.375) {
														result[0] = 10.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 10.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 5.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[2] <= 0.025) {
												if (x[4] <= -0.425) {
													result[0] = 5.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[4] <= -0.375) {
													result[0] = 10.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 5.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (-2.723453136509624*x[1]+1.2654107130271186*x[2]+0.008710535193465676*x[3]-0.6612791598969732*x[4]+0.02177633765915936*x[5]+0.08710535063663744 <= 0) {
											if (x[4] <= -0.275) {
												if (x[2] <= 0.025) {
													if (x[1] <= 0.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.425) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.375) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= -0.325) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[1] <= 0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[4] <= -0.325) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[2] <= 0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}

								}
								else {
									if (x[1] <= 0.275) {
										if (x[4] <= -0.425) {
											if (x[1] <= 0.225) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[2] <= 0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 0.175) {
												if (x[4] <= -0.275) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[4] <= 0.425) {
						if (x[1] <= 1.375) {
							if (x[1] <= -1.375) {
								if (x[4] <= -0.025) {
									if (x[4] <= -0.125) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[4] <= 0.075) {
										if (x[1] <= -1.425) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (x[5] <= 0.125) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.125) {
											if (x[1] <= -1.325) {
												if (x[4] <= -0.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (-8.240028611878746*x[1]+0.662272233240195*x[2]-0.008346302983201314*x[3]-3.61072081987698*x[4]+0.020865757147080482*x[5]-0.08346302858832193 <= 0) {
												if (x[1] <= -0.025) {
													if (x[4] <= 0.225) {
														if (x[4] <= 0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= -0.075) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.175) {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[2] <= -0.025) {
															if (x[1] <= -0.075) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.375) {
																	result[0] = 0.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															if (x[4] <= 0.375) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[1] <= -0.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[4] <= 0.225) {
														if (x[1] <= 0.025) {
															if (x[2] <= 0.025) {
																if (x[2] <= -0.025) {
																	if (x[4] <= 0.075) {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}
																else {
																	if (x[4] <= 0.125) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}

															}
															else {
																if (x[4] <= 0.125) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[4] <= -0.125) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																if (x[4] <= -0.025) {
																	if (x[1] <= 0.075) {
																		if (x[2] <= 0.025) {
																			result[0] = 0.0f; result[1] = 10.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 10.0f;
																}

															}

														}

													}
													else {
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.025) {
													if (x[1] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.125) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (-1.1320756435994996*x[2]+0.001989985418349039*x[3]+0.2919382366098326*x[4]-0.00497496347173813*x[5]+0.01989985388695252 <= 0) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= -1.325) {
											if (x[4] <= -0.175) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (10.302993084965783*x[1]-1.5168811807432705*x[2]-0.06577352584965238*x[3]+2.7653819567495543*x[4]-0.16443381217391767*x[5]-0.6577352486956707 <= 0) {
										if (x[1] <= 0.025) {
											if (x[4] <= 0.275) {
												if (x[1] <= -0.025) {
													if (x[4] <= 0.125) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= -0.075) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[4] <= 0.025) {
														if (-1.3857329709245165*x[2]+0.0006344197550438698*x[3]+0.27673133703452174*x[4]+0.0015860493639759617*x[5]+0.006344197455903847 <= 0) {
															if (x[4] <= -0.075) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[4] <= -0.075) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[2] <= 0.025) {
															if (x[4] <= 0.225) {
																if (x[4] <= 0.125) {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= 0.075) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}

																}
																else {
																	if (x[4] <= 0.175) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= 0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.225) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}

											}
											else {
												if (x[4] <= 0.375) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= -0.075) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[4] <= -0.125) {
												if (x[1] <= 0.075) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
														if (x[2] <= -0.025) {
															if (x[4] <= -0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[4] <= -0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}

									}
									else {
										if (x[1] <= 0.175) {
											if (x[4] <= -0.025) {
												if (x[1] <= 0.125) {
													if (x[4] <= -0.075) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[4] <= -0.175) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.025) {
													if (x[4] <= 0.275) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= 0.375) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}
						else {
							if (x[4] <= 0.225) {
								if (x[4] <= 0.125) {
									result[0] = 0.0f; result[1] = 0.0f;
								}
								else {
									if (x[1] <= 1.425) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (x[1] <= 1.425) {
									result[0] = 0.0f; result[1] = 0.0f;
								}
								else {
									if (x[4] <= 0.375) {
										result[0] = 0.0f; result[1] = 10.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 10.0f;
									}

								}

							}

						}

					}
					else {
						if (x[4] <= 0.475) {
							if (x[1] <= 1.425) {
								if (x[5] <= 0.125) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.075) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 10.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[1] <= 0.025) {
										if (x[1] <= -0.075) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								result[0] = 0.0f; result[1] = 10.0f;
							}

						}
						else {
							if (x[1] <= 1.375) {
								if (x[5] <= -0.125) {
									if (x[1] <= -0.125) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 10.0f;
									}

								}
								else {
									if (x[1] <= -0.075) {
										if (x[5] <= 0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								result[0] = 0.0f; result[1] = 10.0f;
							}

						}

					}

				}

			}
			else {
				if (x[4] <= -0.025) {
					if (x[1] <= -1.075) {
						if (9.368183908532636*x[1]+1.355679301484e-16*x[2]+2.8576369093374194*x[3]+3.8584069409233526*x[4]-0.046140651712999414*x[5]+14.288184333774689 <= 0) {
							if (x[1] <= -1.375) {
								result[0] = 5.0f; result[1] = 0.0f;
							}
							else {
								if (x[4] <= -0.625) {
									if (x[1] <= -1.325) {
										result[0] = 5.0f; result[1] = 0.0f;
									}
									else {
										if (x[4] <= -0.725) {
											if (x[1] <= -1.275) {
												result[0] = 5.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= -0.875) {
													if (x[1] <= -1.175) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -1.125) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									result[0] = 0.0f; result[1] = 0.0f;
								}

							}

						}
						else {
							if (x[1] <= -1.375) {
								if (x[4] <= -0.225) {
									if (x[1] <= -1.425) {
										result[0] = 5.0f; result[1] = 0.0f;
									}
									else {
										if (x[4] <= -0.375) {
											result[0] = 5.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									result[0] = 0.0f; result[1] = 0.0f;
								}

							}
							else {
								if (x[4] <= -0.875) {
									if (x[1] <= -1.175) {
										result[0] = 5.0f; result[1] = 0.0f;
									}
									else {
										if (x[4] <= -1.125) {
											result[0] = 5.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									result[0] = 0.0f; result[1] = 0.0f;
								}

							}

						}

					}
					else {
						if (x[5] <= 0.125) {
							if (x[5] <= -0.125) {
								if (x[1] <= -0.025) {
									result[0] = 0.0f; result[1] = 0.0f;
								}
								else {
									if (-6.79795160801826*x[1]-0.4163330100505566*x[2]-0.12964207805973255*x[3]-2.554329765642753*x[4]+0.16205259516001266*x[5]-0.6482103806400507 <= 0) {
										if (x[4] <= -0.375) {
											if (x[1] <= 0.075) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= -0.525) {
													if (x[1] <= 0.15) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[1] <= 0.075) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= -1.025) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= 0.175) {
													if (x[4] <= -0.875) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.775) {
															if (x[1] <= 0.125) {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}

								}

							}
							else {
								result[0] = 0.0f; result[1] = 0.0f;
							}

						}
						else {
							if (10.451641767990777*x[1]-3.0861761443517075*x[2]+0.15759374634900788*x[3]+3.9396823407353185*x[4]+0.19699218000091293*x[5]+0.7879687200036517 <= 0) {
								if (x[4] <= -0.875) {
									if (x[1] <= 0.275) {
										result[0] = 5.0f; result[1] = 0.0f;
									}
									else {
										if (x[4] <= -1.125) {
											result[0] = 5.0f; result[1] = 0.0f;
										}
										else {
											if (x[2] <= 0.025) {
												if (x[2] <= -0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -1.075) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												result[0] = 5.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									if (x[1] <= 0.075) {
										result[0] = 5.0f; result[1] = 0.0f;
									}
									else {
										if (x[1] <= 0.225) {
											if (x[2] <= 0.025) {
												if (x[1] <= 0.175) {
													if (x[4] <= -0.725) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (0.8878707671821657*x[1]-0.2952743668345128*x[2]+0.008558613243611747*x[3]+0.24446725597792568*x[4]+0.010698266395094629*x[5]+0.042793065580378514 <= 0) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.525) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}

												}
												else {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.825) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[4] <= -0.625) {
													result[0] = 5.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.125) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= 0.425) {
									if (x[1] <= 0.075) {
										if (x[4] <= -0.225) {
											if (x[4] <= -0.275) {
												if (x[2] <= -0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.325) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												result[0] = 5.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[1] <= 0.025) {
												if (x[2] <= -0.025) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.075) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (x[4] <= -0.725) {
											if (x[1] <= 0.225) {
												result[0] = 5.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= -0.875) {
													if (x[1] <= 0.325) {
														if (x[2] <= 0.025) {
															if (x[1] <= 0.275) {
																result[0] = 5.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.975) {
																	if (x[4] <= -1.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[4] <= -1.125) {
															if (x[2] <= 0.025) {
																if (x[1] <= 0.375) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 0.125) {
												if (x[4] <= -0.375) {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.475) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}

								}
								else {
									result[0] = 0.0f; result[1] = 0.0f;
								}

							}

						}

					}

				}
				else {
					result[0] = 0.0f; result[1] = 0.0f;
				}

			}

		}

	}

}