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
					if (x[3] <= -0.25) {
						if (x[0] <= -0.025) {
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
									if (x[1] <= 0.125) {
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

									}
									else {
										if (x[1] <= 0.175) {
											if (x[2] <= 0.025) {
												if (x[4] <= -1.175) {
													result[0] = 10.0f; result[1] = 10.0f;
												}
												else {
													result[0] = 10.0f; result[1] = 10.0f;
												}

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
										else {
											result[0] = 10.0f; result[1] = 10.0f;
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
										result[0] = 10.0f; result[1] = 0.0f;
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
									if (x[1] <= 0.125) {
										if (x[2] <= -0.025) {
											if (x[1] <= 0.075) {
												if (x[1] <= 0.025) {
													result[0] = 20.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -1.175) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 10.0f; result[1] = 0.0f;
													}

												}

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
													if (x[4] <= -1.175) {
														result[0] = 15.0f; result[1] = 0.0f;
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
										if (x[1] <= 0.175) {
											if (x[2] <= 0.025) {
												if (x[4] <= -1.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[4] <= -1.125) {
													result[0] = 5.0f; result[1] = 0.0f;
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

							}

						}

					}
					else {
						if (x[1] <= -1.175) {
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
									if (x[4] <= -1.075) {
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
									else {
										result[0] = 10.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (x[3] <= -0.15) {
									if (x[4] <= -1.075) {
										if (x[1] <= -1.225) {
											if (x[4] <= -1.125) {
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
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[4] <= -1.075) {
										if (x[1] <= -1.225) {
											if (x[4] <= -1.125) {
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
								if (x[1] <= -1.075) {
									if (x[4] <= -1.125) {
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

							}
							else {
								if (x[1] <= 0.325) {
									if (x[1] <= 0.125) {
										if (x[2] <= -0.025) {
											if (x[3] <= -0.15) {
												if (x[4] <= -1.075) {
													if (x[1] <= 0.075) {
														if (x[4] <= -1.175) {
															result[0] = 15.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 10.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[4] <= -1.175) {
															result[0] = 10.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 0.025) {
														result[0] = 20.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= 0.075) {
															if (x[4] <= -1.025) {
																result[0] = 10.0f; result[1] = 0.0f;
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
											else {
												if (x[4] <= -1.075) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.075) {
														if (x[4] <= -1.025) {
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

											}

										}
										else {
											if (x[4] <= -1.075) {
												if (x[4] <= -1.125) {
													if (x[1] <= 0.075) {
														result[0] = 20.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
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
														else {
															result[0] = 20.0f; result[1] = 0.0f;
														}

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
															if (x[3] <= -0.15) {
																result[0] = 10.0f; result[1] = 0.0f;
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
										if (x[3] <= -0.15) {
											if (x[1] <= 0.175) {
												if (x[4] <= -1.175) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
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
														if (x[4] <= -1.125) {
															result[0] = 5.0f; result[1] = 0.0f;
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
												if (x[4] <= -1.125) {
													if (x[1] <= 0.275) {
														if (x[1] <= 0.225) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -1.175) {
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
												else {
													if (x[1] <= 0.225) {
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
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[1] <= 0.175) {
												if (x[4] <= -1.125) {
													if (x[4] <= -1.175) {
														if (x[2] <= 0.025) {
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
												if (x[4] <= -1.125) {
													if (x[1] <= 0.275) {
														if (x[1] <= 0.225) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -1.175) {
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
												else {
													if (x[1] <= 0.275) {
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
													else {
														if (x[2] <= 0.025) {
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
									if (x[1] <= 0.425) {
										if (x[4] <= -1.125) {
											if (x[3] <= -0.15) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
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
					if (x[3] <= -0.25) {
						if (x[0] <= -0.025) {
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
												if (x[1] <= 0.025) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
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
													else {
														result[0] = 15.0f; result[1] = 0.0f;
													}

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
												if (x[4] <= -0.875) {
													if (x[4] <= -0.925) {
														result[0] = 10.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 10.0f; result[1] = 10.0f;
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
						else {
							if (x[1] <= -1.325) {
								if (x[1] <= -1.375) {
									if (x[4] <= -0.875) {
										result[0] = 10.0f; result[1] = 0.0f;
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
								if (x[5] <= 0.125) {
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
													if (x[4] <= -0.825) {
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
									if (x[1] <= 0.125) {
										if (x[1] <= 0.075) {
											if (x[4] <= -0.925) {
												if (x[2] <= -0.025) {
													if (x[1] <= 0.025) {
														result[0] = 20.0f; result[1] = 0.0f;
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
														result[0] = 20.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.025) {
													result[0] = 15.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.875) {
															if (x[2] <= -0.025) {
																result[0] = 5.0f; result[1] = 0.0f;
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
														result[0] = 15.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[2] <= -0.025) {
												if (x[4] <= -0.825) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[2] <= 0.025) {
													result[0] = 5.0f; result[1] = 0.0f;
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

										}

									}
									else {
										if (x[1] <= 0.175) {
											if (x[2] <= 0.025) {
												if (x[4] <= -0.925) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[4] <= -0.875) {
													if (x[4] <= -0.925) {
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
						if (x[1] <= -1.175) {
							if (x[1] <= -1.325) {
								if (x[4] <= -0.875) {
									if (x[1] <= -1.375) {
										result[0] = 10.0f; result[1] = 0.0f;
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
									if (x[1] <= -1.225) {
										if (x[4] <= -0.875) {
											result[0] = 0.0f; result[1] = 0.0f;
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
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[4] <= -0.875) {
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

						}
						else {
							if (x[5] <= 0.125) {
								if (x[1] <= -1.075) {
									if (x[3] <= -0.15) {
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
													if (x[2] <= 0.025) {
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

							}
							else {
								if (x[1] <= 0.275) {
									if (x[1] <= 0.125) {
										if (x[4] <= -0.875) {
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
										else {
											if (x[1] <= 0.075) {
												if (x[2] <= 0.025) {
													if (x[1] <= 0.025) {
														if (x[4] <= -0.825) {
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
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[2] <= -0.025) {
													if (x[3] <= -0.15) {
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
												else {
													result[0] = 5.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[3] <= -0.15) {
											if (x[4] <= -0.925) {
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
												if (x[1] <= 0.175) {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.825) {
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
													if (x[4] <= -0.875) {
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
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= 0.225) {
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
												if (x[4] <= -0.875) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.225) {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= 0.025) {
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
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= -0.875) {
												if (x[1] <= 0.375) {
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
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
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

			}
			else {
				if (x[4] <= -0.525) {
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
								if (x[0] <= -0.025) {
									if (x[3] <= -0.25) {
										result[0] = 15.0f; result[1] = 0.0f;
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
									if (x[1] <= -1.375) {
										if (x[4] <= -0.625) {
											if (x[3] <= -0.25) {
												if (x[0] <= -0.025) {
													result[0] = 10.0f; result[1] = 10.0f;
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
											if (x[0] <= -0.025) {
												if (x[3] <= -0.25) {
													result[0] = 10.0f; result[1] = 10.0f;
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
											if (x[0] <= -0.025) {
												if (x[3] <= -0.25) {
													result[0] = 10.0f; result[1] = 10.0f;
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
											if (x[0] <= -0.025) {
												if (x[3] <= -0.25) {
													result[0] = 5.0f; result[1] = 10.0f;
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
						if (x[3] <= -0.25) {
							if (x[0] <= -0.025) {
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
													if (x[1] <= 0.125) {
														if (x[2] <= 0.025) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															if (x[4] <= -0.725) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 5.0f; result[1] = 10.0f;
															}

														}

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
												else {
													if (x[1] <= 0.125) {
														if (x[2] <= 0.025) {
															result[0] = 10.0f; result[1] = 20.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 10.0f;
														}

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
							else {
								if (x[5] <= 0.125) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.025) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= 0.075) {
												if (x[1] <= 0.025) {
													if (x[2] <= -0.025) {
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
													if (x[4] <= -0.725) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															if (x[4] <= -0.625) {
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
												if (x[4] <= -0.625) {
													if (x[1] <= 0.125) {
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
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
													else {
														if (x[1] <= 0.175) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 10.0f;
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
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[1] <= 0.125) {
										if (x[1] <= 0.075) {
											if (x[1] <= 0.025) {
												if (x[4] <= -0.575) {
													if (x[4] <= -0.625) {
														if (x[4] <= -0.675) {
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
															if (x[1] <= -0.025) {
																result[0] = 20.0f; result[1] = 0.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 10.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 20.0f; result[1] = 0.0f;
																}

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
												if (x[4] <= -0.625) {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.725) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[4] <= -0.675) {
															result[0] = 15.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 10.0f; result[1] = 0.0f;
														}

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
															result[0] = 10.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[4] <= -0.625) {
												if (x[4] <= -0.725) {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[2] <= -0.025) {
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
										if (x[1] <= 0.175) {
											if (x[2] <= 0.025) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= -0.675) {
													if (x[4] <= -0.725) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

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
								if (x[1] <= -1.175) {
									if (x[3] <= -0.15) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										if (x[4] <= -0.625) {
											if (x[1] <= -1.225) {
												if (x[4] <= -0.725) {
													if (x[1] <= -1.275) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[1] <= -1.275) {
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
										if (x[1] <= 0.025) {
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
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[4] <= -0.625) {
												if (x[1] <= 0.125) {
													if (x[4] <= -0.725) {
														if (x[1] <= 0.075) {
															if (x[2] <= 0.025) {
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

												}
												else {
													if (x[1] <= 0.175) {
														if (x[3] <= -0.15) {
															result[0] = 0.0f; result[1] = 0.0f;
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
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
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
															if (x[3] <= -0.15) {
																result[0] = 0.0f; result[1] = 0.0f;
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

									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

							}
							else {
								if (x[1] <= 0.175) {
									if (x[1] <= 0.075) {
										if (x[4] <= -0.625) {
											if (x[1] <= 0.025) {
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
																result[0] = 15.0f; result[1] = 0.0f;
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
												if (x[2] <= 0.025) {
													if (x[4] <= -0.725) {
														result[0] = 5.0f; result[1] = 0.0f;
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
													result[0] = 15.0f; result[1] = 0.0f;
												}

											}

										}
										else {
											if (x[1] <= 0.025) {
												if (x[4] <= -0.575) {
													result[0] = 15.0f; result[1] = 0.0f;
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
												if (x[3] <= -0.15) {
													if (x[2] <= 0.025) {
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

										}

									}
									else {
										if (x[1] <= 0.125) {
											if (x[4] <= -0.625) {
												if (x[4] <= -0.725) {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[3] <= -0.15) {
														if (x[4] <= -0.675) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
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
											else {
												if (x[3] <= -0.15) {
													if (x[2] <= 0.025) {
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
														if (x[2] <= 0.025) {
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
										else {
											if (x[3] <= -0.15) {
												if (x[4] <= -0.675) {
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
												else {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.625) {
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

												}

											}
											else {
												if (x[4] <= -0.625) {
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
														if (x[4] <= -0.575) {
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
									if (x[1] <= 0.325) {
										if (x[3] <= -0.15) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= -0.625) {
												if (x[1] <= 0.275) {
													if (x[4] <= -0.725) {
														if (x[1] <= 0.225) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[1] <= 0.225) {
															if (x[4] <= -0.675) {
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

				}
				else {
					if (x[3] <= -0.25) {
						if (x[0] <= -0.025) {
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
													if (x[1] <= 0.125) {
														if (x[2] <= 0.025) {
															result[0] = 5.0f; result[1] = 20.0f;
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
														if (x[1] <= 0.175) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 5.0f; result[1] = 20.0f;
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
									if (x[1] <= 0.125) {
										if (x[1] <= 0.075) {
											if (x[4] <= -0.375) {
												if (x[1] <= 0.025) {
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
													if (x[2] <= 0.025) {
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
														if (x[4] <= -0.425) {
															result[0] = 15.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 15.0f; result[1] = 0.0f;
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
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= -0.025) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															if (x[2] <= 0.025) {
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
										else {
											if (x[4] <= -0.375) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
												if (x[2] <= 0.025) {
													result[0] = 5.0f; result[1] = 10.0f;
												}
												else {
													if (x[4] <= -0.325) {
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
						else {
							if (x[1] <= -1.325) {
								if (x[4] <= -0.375) {
									if (x[1] <= -1.425) {
										if (x[4] <= -0.475) {
											result[0] = 15.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 10.0f; result[1] = 0.0f;
										}

									}
									else {
										if (x[1] <= -1.375) {
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

							}
							else {
								if (x[5] <= 0.125) {
									if (x[5] <= -0.125) {
										if (x[1] <= 0.025) {
											if (x[1] <= -0.025) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[2] <= -0.025) {
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
											if (x[1] <= 0.075) {
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
															result[0] = 0.0f; result[1] = 0.0f;
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
														result[0] = 0.0f; result[1] = 10.0f;
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
										if (x[1] <= 0.075) {
											if (x[4] <= -0.375) {
												if (x[1] <= 0.025) {
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
																	result[0] = 10.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 15.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[1] <= -0.025) {
																result[0] = 10.0f; result[1] = 0.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[2] <= -0.025) {
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
														if (x[4] <= -0.475) {
															result[0] = 10.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.425) {
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
														result[0] = 5.0f; result[1] = 0.0f;
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
																result[0] = 5.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}

										}
										else {
											if (x[4] <= -0.375) {
												result[0] = 0.0f; result[1] = 0.0f;
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
										if (x[1] <= 0.175) {
											if (x[2] <= 0.025) {
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
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}

						}

					}
					else {
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
								if (x[3] <= -0.15) {
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
							if (x[1] <= -1.225) {
								if (x[4] <= -0.375) {
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
											if (x[4] <= -0.425) {
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

								}
								else {
									result[0] = 0.0f; result[1] = 0.0f;
								}

							}
							else {
								if (x[5] <= 0.125) {
									if (x[1] <= -0.075) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										if (x[5] <= -0.125) {
											if (x[1] <= 0.025) {
												if (x[3] <= -0.15) {
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
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[4] <= -0.475) {
														if (x[1] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[2] <= -0.025) {
															if (x[1] <= -0.025) {
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
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[4] <= -0.375) {
													if (x[1] <= 0.125) {
														if (x[4] <= -0.475) {
															if (x[1] <= 0.075) {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}
															else {
																if (x[2] <= 0.025) {
																	result[0] = 5.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[1] <= 0.075) {
																if (x[2] <= 0.025) {
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
																if (x[2] <= 0.025) {
																	result[0] = 5.0f; result[1] = 20.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 0.175) {
															if (x[3] <= -0.15) {
																result[0] = 0.0f; result[1] = 0.0f;
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
														if (x[3] <= -0.15) {
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
								else {
									if (x[1] <= 0.175) {
										if (x[1] <= 0.075) {
											if (x[4] <= -0.375) {
												if (x[1] <= 0.025) {
													if (x[4] <= -0.475) {
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
													else {
														if (x[1] <= -0.025) {
															if (x[3] <= -0.15) {
																if (x[4] <= -0.425) {
																	result[0] = 10.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 10.0f; result[1] = 0.0f;
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
															if (x[4] <= -0.475) {
																if (x[2] <= -0.025) {
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
															if (x[3] <= -0.15) {
																if (x[4] <= -0.475) {
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
												if (x[1] <= 0.025) {
													if (x[1] <= -0.075) {
														result[0] = 15.0f; result[1] = 0.0f;
													}
													else {
														if (x[3] <= -0.15) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[1] <= -0.025) {
																if (x[4] <= -0.325) {
																	result[0] = 5.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}
															else {
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

														}

													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[3] <= -0.15) {
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
														result[0] = 5.0f; result[1] = 0.0f;
													}

												}

											}

										}
										else {
											if (x[4] <= -0.375) {
												if (x[3] <= -0.15) {
													if (x[1] <= 0.125) {
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
													if (x[1] <= 0.125) {
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

											}
											else {
												if (x[1] <= 0.125) {
													if (x[2] <= 0.025) {
														if (x[2] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[3] <= -0.15) {
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
														if (x[3] <= -0.15) {
															if (x[4] <= -0.325) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

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
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 1.425) {
											if (x[1] <= 0.275) {
												if (x[3] <= -0.15) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.425) {
														if (x[1] <= 0.225) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.475) {
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
															if (x[4] <= -0.375) {
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
						if (x[0] <= -0.025) {
							if (x[3] <= -0.25) {
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
												if (x[1] <= -0.075) {
													if (x[1] <= -0.125) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
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

												}
												else {
													if (x[1] <= 0.025) {
														if (x[4] <= -0.025) {
															if (x[1] <= -0.025) {
																if (x[2] <= 0.025) {
																	if (x[4] <= -0.225) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		if (x[2] <= -0.025) {
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

																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}
															else {
																if (x[4] <= -0.225) {
																	if (x[2] <= -0.025) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}

																}
																else {
																	if (x[2] <= -0.025) {
																		if (x[4] <= -0.075) {
																			result[0] = 5.0f; result[1] = 10.0f;
																		}
																		else {
																			result[0] = 5.0f; result[1] = 10.0f;
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
															if (x[1] <= -0.025) {
																if (x[2] <= -0.025) {
																	if (x[4] <= 0.125) {
																		if (x[4] <= 0.025) {
																			result[0] = 5.0f; result[1] = 10.0f;
																		}
																		else {
																			result[0] = 5.0f; result[1] = 10.0f;
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
																	if (x[2] <= 0.025) {
																		if (x[4] <= 0.025) {
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
																if (x[2] <= -0.025) {
																	if (x[4] <= 0.075) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		if (x[4] <= 0.125) {
																			result[0] = 0.0f; result[1] = 20.0f;
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
																	if (x[4] <= 0.225) {
																		if (x[2] <= 0.025) {
																			result[0] = 5.0f; result[1] = 10.0f;
																		}
																		else {
																			if (x[4] <= 0.125) {
																				if (x[4] <= 0.025) {
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
																		result[0] = 5.0f; result[1] = 10.0f;
																	}

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

											}
											else {
												result[0] = 5.0f; result[1] = 10.0f;
											}

										}
										else {
											if (x[1] <= 0.075) {
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
													if (x[4] <= 0.075) {
														if (x[1] <= 0.025) {
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
																if (x[4] <= -0.125) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	if (x[2] <= -0.025) {
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

															}
															else {
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

														}

													}
													else {
														if (x[4] <= 0.225) {
															if (x[1] <= 0.025) {
																if (x[2] <= 0.025) {
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
																if (x[2] <= -0.025) {
																	if (x[4] <= 0.125) {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}
																	else {
																		result[0] = 5.0f; result[1] = 10.0f;
																	}

																}
																else {
																	if (x[4] <= 0.125) {
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
															if (x[2] <= 0.025) {
																result[0] = 5.0f; result[1] = 10.0f;
															}
															else {
																if (x[1] <= 0.025) {
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
												if (x[1] <= 0.125) {
													if (x[2] <= 0.025) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														if (x[4] <= -0.075) {
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
											if (x[4] <= 0.075) {
												if (x[1] <= -1.425) {
													if (x[4] <= -0.025) {
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

									}
									else {
										if (x[1] <= 1.375) {
											if (x[5] <= -0.125) {
												if (x[1] <= -0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= -0.025) {
														if (x[4] <= -0.025) {
															if (x[1] <= -0.075) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.225) {
																	result[0] = 0.0f; result[1] = 0.0f;
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
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= -0.075) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[2] <= -0.025) {
																	if (x[4] <= 0.125) {
																		if (x[4] <= 0.025) {
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
																		if (x[4] <= 0.025) {
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
														if (x[4] <= -0.025) {
															if (x[1] <= 0.025) {
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
																		if (x[4] <= -0.075) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		if (x[4] <= -0.125) {
																			if (x[2] <= 0.025) {
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
																		result[0] = 0.0f; result[1] = 10.0f;
																	}

																}

															}

														}
														else {
															if (x[1] <= 0.025) {
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
																		if (x[4] <= 0.125) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		if (x[4] <= 0.125) {
																			if (x[4] <= 0.025) {
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
																		result[0] = 0.0f; result[1] = 0.0f;
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

												}

											}
											else {
												if (x[5] <= 0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.075) {
														if (x[1] <= -0.025) {
															if (x[4] <= 0.125) {
																if (x[4] <= -0.125) {
																	if (x[4] <= -0.225) {
																		if (x[1] <= -0.075) {
																			result[0] = 15.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 5.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		if (x[1] <= -0.075) {
																			if (x[1] <= -0.125) {
																				result[0] = 20.0f; result[1] = 0.0f;
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
																		else {
																			if (x[2] <= -0.025) {
																				result[0] = 0.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 20.0f; result[1] = 0.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[1] <= -0.075) {
																		if (x[1] <= -0.125) {
																			if (x[4] <= 0.075) {
																				result[0] = 15.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 10.0f; result[1] = 0.0f;
																			}

																		}
																		else {
																			if (x[4] <= 0.025) {
																				if (x[4] <= -0.075) {
																					result[0] = 15.0f; result[1] = 0.0f;
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
																		if (x[2] <= -0.025) {
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
																				result[0] = 15.0f; result[1] = 0.0f;
																			}
																			else {
																				result[0] = 10.0f; result[1] = 0.0f;
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
															if (x[4] <= 0.075) {
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
																				if (x[2] <= 0.025) {
																					result[0] = 0.0f; result[1] = 0.0f;
																				}
																				else {
																					result[0] = 20.0f; result[1] = 0.0f;
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
																		if (x[2] <= 0.025) {
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
																					result[0] = 0.0f; result[1] = 0.0f;
																				}
																				else {
																					result[0] = 0.0f; result[1] = 0.0f;
																				}

																			}

																		}
																		else {
																			if (x[4] <= -0.075) {
																				if (x[4] <= -0.125) {
																					result[0] = 15.0f; result[1] = 0.0f;
																				}
																				else {
																					result[0] = 10.0f; result[1] = 0.0f;
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
																		if (x[2] <= 0.025) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
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

																	}

																}

															}
															else {
																if (x[1] <= 0.025) {
																	if (x[2] <= 0.025) {
																		if (x[4] <= 0.125) {
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
																				if (x[4] <= 0.175) {
																					result[0] = 0.0f; result[1] = 0.0f;
																				}
																				else {
																					result[0] = 0.0f; result[1] = 0.0f;
																				}

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

													}
													else {
														if (x[1] <= 0.125) {
															if (x[4] <= -0.225) {
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
																	if (x[4] <= 0.025) {
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
									if (x[4] <= 0.225) {
										if (x[4] <= 0.125) {
											if (x[1] <= -1.425) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
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
											if (x[1] <= -1.425) {
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
									if (x[1] <= 1.375) {
										if (x[5] <= 0.125) {
											if (x[5] <= -0.125) {
												if (x[1] <= -0.075) {
													if (x[1] <= -0.125) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[3] <= -0.25) {
																if (x[2] <= -0.025) {
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
													if (x[1] <= 0.025) {
														if (x[4] <= -0.075) {
															if (x[4] <= -0.225) {
																if (x[2] <= -0.025) {
																	if (x[1] <= -0.025) {
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
																	if (x[2] <= 0.025) {
																		if (x[4] <= -0.125) {
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
																		if (x[3] <= -0.25) {
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
																		if (x[4] <= -0.125) {
																			if (x[2] <= 0.025) {
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
															if (x[1] <= -0.025) {
																if (x[2] <= -0.025) {
																	if (x[4] <= 0.025) {
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
																	if (x[2] <= 0.025) {
																		if (x[4] <= 0.025) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}

																	}
																	else {
																		if (x[4] <= -0.025) {
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
																if (x[1] <= 0.075) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 10.0f;
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
																else {
																	if (x[1] <= 0.125) {
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

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											if (x[1] <= 0.075) {
												if (x[1] <= -0.025) {
													if (x[4] <= 0.025) {
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

													}
													else {
														if (x[4] <= 0.125) {
															if (x[1] <= -0.125) {
																if (x[3] <= -0.25) {
																	if (x[4] <= 0.075) {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 10.0f; result[1] = 0.0f;
																	}

																}
																else {
																	if (x[4] <= 0.075) {
																		result[0] = 15.0f; result[1] = 0.0f;
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
														else {
															if (x[1] <= -0.075) {
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
																	result[0] = 5.0f; result[1] = 0.0f;
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
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}

														}

													}

												}
												else {
													if (x[4] <= -0.125) {
														if (x[4] <= -0.225) {
															if (x[1] <= 0.025) {
																result[0] = 5.0f; result[1] = 0.0f;
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
																	result[0] = 5.0f; result[1] = 0.0f;
																}

															}

														}
														else {
															if (x[1] <= 0.025) {
																if (x[2] <= 0.025) {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= -0.175) {
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
																	if (x[4] <= -0.175) {
																		result[0] = 20.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 15.0f; result[1] = 0.0f;
																	}

																}

															}
															else {
																if (x[2] <= 0.025) {
																	if (x[3] <= -0.25) {
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
																	result[0] = 0.0f; result[1] = 0.0f;
																}

															}

														}

													}
													else {
														if (x[1] <= 0.025) {
															if (x[4] <= 0.075) {
																if (x[2] <= -0.025) {
																	if (x[4] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}
																else {
																	if (x[2] <= 0.025) {
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
																	else {
																		if (x[4] <= -0.075) {
																			result[0] = 10.0f; result[1] = 0.0f;
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
																	if (x[4] <= 0.125) {
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
																			if (x[4] <= 0.175) {
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
														else {
															if (x[4] <= 0.125) {
																if (x[2] <= 0.025) {
																	if (x[3] <= -0.25) {
																		if (x[4] <= -0.025) {
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
																	if (x[4] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

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

													}

												}

											}
											else {
												if (x[1] <= 0.125) {
													if (x[4] <= -0.075) {
														if (x[2] <= 0.025) {
															if (x[4] <= -0.225) {
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
															if (x[4] <= -0.225) {
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
														if (x[2] <= 0.025) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= 0.025) {
																if (x[3] <= -0.25) {
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
													result[0] = 0.0f; result[1] = 0.0f;
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

						}

					}
					else {
						if (x[0] <= -0.025) {
							if (x[3] <= -0.25) {
								if (x[1] <= 1.325) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.125) {
											if (x[1] <= -0.175) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
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

										}
										else {
											if (x[1] <= -0.025) {
												if (x[1] <= -0.075) {
													if (x[4] <= 0.375) {
														result[0] = 5.0f; result[1] = 10.0f;
													}
													else {
														if (x[2] <= 0.025) {
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
												else {
													if (x[2] <= -0.025) {
														if (x[4] <= 0.475) {
															result[0] = 5.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

													}
													else {
														if (x[2] <= 0.025) {
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
							else {
								if (x[1] <= 1.325) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.075) {
											if (x[1] <= -0.175) {
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
												if (x[4] <= 0.375) {
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
										else {
											if (x[1] <= -0.025) {
												if (x[2] <= -0.025) {
													if (x[4] <= 0.375) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														if (x[4] <= 0.475) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 10.0f;
														}

													}

												}
												else {
													if (x[2] <= 0.025) {
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
											else {
												if (x[1] <= 0.075) {
													if (x[4] <= 0.375) {
														if (x[1] <= 0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 10.0f;
														}

													}
													else {
														if (x[4] <= 0.475) {
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
									else {
										if (x[1] <= 0.025) {
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
															result[0] = 5.0f; result[1] = 0.0f;
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
													else {
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 15.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															if (x[4] <= 0.475) {
																if (x[1] <= -0.075) {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		result[0] = 15.0f; result[1] = 0.0f;
																	}

																}
																else {
																	if (x[2] <= -0.025) {
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
																if (x[1] <= -0.075) {
																	if (x[2] <= -0.025) {
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

												}
												else {
													if (x[2] <= 0.025) {
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

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[1] <= 1.375) {
										if (x[4] <= 0.375) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
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

							}

						}
						else {
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
												if (x[4] <= 0.375) {
													result[0] = 0.0f; result[1] = 0.0f;
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
												if (x[2] <= 0.025) {
													if (x[2] <= -0.025) {
														if (x[4] <= 0.475) {
															if (x[3] <= -0.25) {
																result[0] = 0.0f; result[1] = 10.0f;
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
															result[0] = 0.0f; result[1] = 10.0f;
														}

													}
													else {
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
										if (x[1] <= 0.025) {
											if (x[1] <= -0.025) {
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
														if (x[3] <= -0.25) {
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

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= 1.375) {
									if (x[4] <= 0.375) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
									if (x[1] <= 1.425) {
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
								if (x[4] <= 0.075) {
									if (x[1] <= -1.425) {
										if (x[4] <= -0.025) {
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
													if (x[1] <= -0.025) {
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
														if (x[4] <= -0.125) {
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
																		result[0] = 0.0f; result[1] = 0.0f;
																	}

																}

															}

														}
														else {
															if (x[2] <= 0.025) {
																if (x[4] <= -0.025) {
																	if (x[2] <= -0.025) {
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
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 10.0f;
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
																	result[0] = 0.0f; result[1] = 0.0f;
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
									if (x[1] <= 0.125) {
										if (x[1] <= 0.025) {
											if (x[1] <= -0.025) {
												if (x[4] <= 0.125) {
													if (x[4] <= -0.125) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= 0.025) {
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
														else {
															if (x[1] <= -0.125) {
																result[0] = 15.0f; result[1] = 0.0f;
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
												if (x[4] <= 0.025) {
													if (x[2] <= -0.025) {
														if (x[4] <= -0.125) {
															if (x[4] <= -0.225) {
																result[0] = 5.0f; result[1] = 0.0f;
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
															if (x[4] <= -0.175) {
																result[0] = 5.0f; result[1] = 0.0f;
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
															if (x[4] <= -0.075) {
																if (x[4] <= -0.125) {
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

													}

												}
												else {
													if (x[2] <= 0.025) {
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
															if (x[2] <= -0.025) {
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
													else {
														if (x[4] <= 0.075) {
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
											if (x[4] <= -0.125) {
												if (x[4] <= -0.225) {
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
												if (x[1] <= 0.075) {
													if (x[4] <= 0.075) {
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
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= 0.025) {
															if (x[4] <= -0.025) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
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
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[4] <= 0.175) {
															if (x[4] <= 0.025) {
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
										if (x[1] <= 0.225) {
											if (x[4] <= -0.175) {
												if (x[1] <= 0.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.225) {
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
												if (x[4] <= -0.125) {
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
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 15.0f; result[1] = 0.0f;
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
																result[0] = 15.0f; result[1] = 0.0f;
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
													if (x[1] <= -0.125) {
														if (x[1] <= -0.175) {
															result[0] = 15.0f; result[1] = 0.0f;
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
															result[0] = 15.0f; result[1] = 0.0f;
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
							if (x[3] <= -0.25) {
								if (x[0] <= -0.025) {
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
								else {
									if (x[1] <= 1.325) {
										if (x[5] <= -0.125) {
											if (x[1] <= -0.125) {
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
											else {
												if (x[1] <= -0.025) {
													if (x[4] <= 0.725) {
														if (x[4] <= 0.625) {
															if (x[1] <= -0.075) {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
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
														else {
															if (x[2] <= -0.025) {
																if (x[1] <= -0.075) {
																	result[0] = 0.0f; result[1] = 0.0f;
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
																if (x[1] <= -0.075) {
																	if (x[2] <= 0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= 0.675) {
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
														if (x[2] <= -0.025) {
															if (x[1] <= -0.075) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 20.0f;
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
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.025) {
													if (x[4] <= 0.625) {
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 10.0f; result[1] = 0.0f;
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
								if (x[4] <= 0.675) {
									if (x[1] <= 1.325) {
										if (x[5] <= -0.125) {
											if (x[1] <= -0.175) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.125) {
													if (x[2] <= -0.025) {
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
													if (x[1] <= -0.025) {
														if (x[1] <= -0.075) {
															if (x[4] <= 0.625) {
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
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 10.0f;
															}
															else {
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

														}

													}
													else {
														if (x[4] <= 0.625) {
															if (x[1] <= 0.075) {
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
													if (x[4] <= 0.625) {
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 10.0f; result[1] = 0.0f;
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
																result[0] = 0.0f; result[1] = 0.0f;
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
									if (x[4] <= 0.725) {
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
												if (x[5] <= 0.125) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= -0.025) {
														if (x[1] <= -0.075) {
															if (x[1] <= -0.125) {
																if (x[1] <= -0.175) {
																	result[0] = 5.0f; result[1] = 0.0f;
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
																	result[0] = 5.0f; result[1] = 0.0f;
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

							}

						}
						else {
							if (x[3] <= -0.25) {
								if (x[0] <= -0.025) {
									if (x[1] <= 1.325) {
										if (x[5] <= -0.125) {
											if (x[1] <= -0.125) {
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
												if (x[1] <= -0.075) {
													if (x[2] <= 0.025) {
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
														if (x[1] <= -0.025) {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
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

										}
										else {
											if (x[5] <= 0.125) {
												result[0] = 5.0f; result[1] = 10.0f;
											}
											else {
												if (x[1] <= -0.075) {
													if (x[4] <= 0.875) {
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 10.0f; result[1] = 10.0f;
															}
															else {
																if (x[4] <= 0.825) {
																	result[0] = 5.0f; result[1] = 10.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 10.0f;
																}

															}

														}
														else {
															if (x[2] <= -0.025) {
																if (x[4] <= 0.825) {
																	result[0] = 5.0f; result[1] = 10.0f;
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
											if (x[1] <= -0.125) {
												if (x[1] <= -0.175) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= 0.925) {
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
												if (x[4] <= 0.925) {
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
														if (x[1] <= -0.025) {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
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

														}
														else {
															result[0] = 0.0f; result[1] = 20.0f;
														}

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
											if (x[5] <= 0.125) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= -0.075) {
													if (x[4] <= 0.875) {
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.825) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 0.0f; result[1] = 0.0f;
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
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= 0.925) {
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
														if (x[1] <= -0.025) {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 20.0f;
															}
															else {
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
														if (x[1] <= -0.075) {
															if (x[4] <= 0.625) {
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
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 10.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
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
																result[0] = 10.0f; result[1] = 0.0f;
															}

														}

													}
													else {
														if (x[1] <= -0.125) {
															if (x[1] <= -0.175) {
																result[0] = 5.0f; result[1] = 0.0f;
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
																result[0] = 5.0f; result[1] = 0.0f;
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
													if (x[1] <= -0.125) {
														if (x[1] <= -0.175) {
															result[0] = 5.0f; result[1] = 0.0f;
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
															result[0] = 5.0f; result[1] = 0.0f;
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
													if (x[1] <= -0.125) {
														if (x[1] <= -0.175) {
															result[0] = 5.0f; result[1] = 0.0f;
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
															result[0] = 5.0f; result[1] = 0.0f;
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
						if (x[3] <= -0.15) {
							if (x[4] <= 1.175) {
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
															if (x[4] <= 1.125) {
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

									}
									else {
										if (x[5] <= 0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.075) {
												if (x[1] <= -0.175) {
													if (x[4] <= 1.075) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[4] <= 1.125) {
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
										if (x[1] <= -0.125) {
											if (x[1] <= -0.175) {
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
						else {
							if (x[4] <= 1.125) {
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
														result[0] = 0.0f; result[1] = 10.0f;
													}

												}
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}
											else {
												if (x[2] <= -0.025) {
													if (x[1] <= -0.075) {
														result[0] = 0.0f; result[1] = 20.0f;
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
										if (x[5] <= 0.125) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -0.075) {
												if (x[1] <= -0.175) {
													if (x[4] <= 1.075) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[4] <= 1.075) {
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
											if (x[1] <= -0.125) {
												if (x[4] <= 1.175) {
													if (x[2] <= -0.025) {
														result[0] = 0.0f; result[1] = 10.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

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
								if (x[1] <= 0.325) {
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
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}

											}
											else {
												if (x[1] <= 0.275) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
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
									if (x[1] <= 0.275) {
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
													if (x[2] <= 0.025) {
														if (x[2] <= -0.025) {
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
													if (x[1] <= 0.225) {
														if (x[2] <= 0.025) {
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
											if (x[2] <= 0.025) {
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
											if (x[1] <= 0.075) {
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
											else {
												if (x[4] <= -0.625) {
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
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 10.0f;
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
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[1] <= 0.325) {
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
															result[0] = 15.0f; result[1] = 0.0f;
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

											}

										}
										else {
											if (x[1] <= 0.175) {
												if (x[4] <= -0.675) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.625) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
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
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	result[0] = 5.0f; result[1] = 20.0f;
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
									if (x[1] <= 0.275) {
										if (x[1] <= 0.075) {
											if (x[4] <= -0.375) {
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
														if (x[2] <= 0.025) {
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
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= 0.125) {
												if (x[4] <= -0.425) {
													if (x[4] <= -0.475) {
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
													if (x[2] <= 0.025) {
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
											else {
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
														if (x[2] <= 0.025) {
															if (x[4] <= -0.325) {
																if (x[2] <= -0.025) {
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
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														if (x[1] <= 0.225) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
															if (x[2] <= 0.025) {
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
										if (x[1] <= 0.425) {
											if (x[4] <= -0.425) {
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
													if (x[4] <= -0.375) {
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
														if (x[2] <= -0.025) {
															if (x[4] <= -0.075) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
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
										if (x[1] <= 0.275) {
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
																result[0] = 0.0f; result[1] = 0.0f;
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
													if (x[1] <= 0.025) {
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
														if (x[4] <= 0.125) {
															if (x[1] <= 0.125) {
																if (x[1] <= 0.075) {
																	if (x[2] <= 0.025) {
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
																result[0] = 0.0f; result[1] = 20.0f;
															}

														}
														else {
															if (x[1] <= 0.075) {
																if (x[2] <= 0.025) {
																	result[0] = 0.0f; result[1] = 20.0f;
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
																result[0] = 0.0f; result[1] = 20.0f;
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
									if (x[1] <= 0.175) {
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
											if (x[1] <= 0.125) {
												if (x[4] <= 0.125) {
													if (x[2] <= 0.025) {
														if (x[4] <= 0.075) {
															result[0] = 0.0f; result[1] = 0.0f;
														}
														else {
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
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}
												else {
													if (x[1] <= 0.075) {
														if (x[4] <= 0.175) {
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
												if (x[2] <= 0.025) {
													if (x[4] <= 0.075) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= 0.175) {
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

										}

									}
									else {
										if (x[1] <= 0.275) {
											if (x[4] <= 0.075) {
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
								if (x[4] <= 0.325) {
									if (x[1] <= -1.425) {
										result[0] = 0.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}
								else {
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

							}
							else {
								if (x[5] <= 0.125) {
									if (x[5] <= -0.125) {
										if (x[1] <= -0.075) {
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
										else {
											if (x[4] <= 0.475) {
												if (x[1] <= -0.025) {
													if (x[2] <= -0.025) {
														if (x[4] <= 0.375) {
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
													if (x[4] <= 0.375) {
														if (x[1] <= 0.025) {
															result[0] = 0.0f; result[1] = 10.0f;
														}
														else {
															result[0] = 0.0f; result[1] = 10.0f;
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
											if (x[1] <= 0.025) {
												if (x[4] <= 0.375) {
													if (x[2] <= 0.025) {
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
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= 0.575) {
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
														else {
															if (x[2] <= -0.025) {
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
														if (x[4] <= 0.625) {
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
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[4] <= 0.325) {
													if (x[2] <= 0.025) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[4] <= 0.575) {
														if (x[2] <= 0.025) {
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
							else {
								if (x[5] <= 0.125) {
									result[0] = 0.0f; result[1] = 0.0f;
								}
								else {
									if (x[1] <= -0.025) {
										if (x[1] <= -0.075) {
											if (x[4] <= 0.775) {
												if (x[1] <= -0.125) {
													if (x[1] <= -0.175) {
														result[0] = 5.0f; result[1] = 0.0f;
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
														result[0] = 5.0f; result[1] = 0.0f;
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
													if (x[4] <= 0.875) {
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
											if (x[4] <= 0.725) {
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
										if (x[1] <= 0.275) {
											if (x[1] <= 0.125) {
												result[0] = 15.0f; result[1] = 0.0f;
											}
											else {
												if (x[4] <= -1.125) {
													if (x[1] <= 0.225) {
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

												}
												else {
													if (x[1] <= 0.175) {
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
															if (x[4] <= -1.025) {
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
															if (x[4] <= -1.075) {
																if (x[1] <= 0.225) {
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

											}

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
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
										if (x[1] <= 0.375) {
											if (x[1] <= 0.175) {
												if (x[4] <= -0.875) {
													if (x[1] <= 0.125) {
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

												}
												else {
													if (x[1] <= 0.125) {
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
												if (x[1] <= 0.275) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.875) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[1] <= 0.325) {
															if (x[2] <= -0.025) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[2] <= 0.025) {
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
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}

												}

											}

										}
										else {
											if (x[1] <= 0.425) {
												if (x[2] <= 0.025) {
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
											if (x[1] <= -0.025) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[1] <= 0.075) {
													if (x[4] <= -0.625) {
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
													else {
														result[0] = 0.0f; result[1] = 0.0f;
													}

												}
												else {
													if (x[4] <= -0.625) {
														if (x[1] <= 0.125) {
															if (x[2] <= 0.025) {
																result[0] = 0.0f; result[1] = 10.0f;
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
														else {
															if (x[1] <= 0.175) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																result[0] = 0.0f; result[1] = 10.0f;
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

										}
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}
								else {
									if (x[1] <= 0.325) {
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
															if (x[2] <= -0.025) {
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
												if (x[1] <= 0.175) {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.525) {
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
												else {
													if (x[1] <= 0.225) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.525) {
															if (x[1] <= 0.275) {
																result[0] = 0.0f; result[1] = 0.0f;
															}
															else {
																if (x[4] <= -0.575) {
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
								if (x[1] <= 0.175) {
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
										if (x[1] <= 0.125) {
											if (x[4] <= -0.375) {
												result[0] = 0.0f; result[1] = 0.0f;
											}
											else {
												if (x[2] <= 0.025) {
													if (x[4] <= -0.275) {
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
												if (x[4] <= -0.425) {
													result[0] = 0.0f; result[1] = 0.0f;
												}
												else {
													if (x[4] <= -0.275) {
														if (x[4] <= -0.325) {
															if (x[2] <= -0.025) {
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
												if (x[4] <= -0.375) {
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
											if (x[4] <= 0.225) {
												if (x[1] <= -0.025) {
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
													if (x[1] <= 0.025) {
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
															if (x[2] <= 0.025) {
																if (x[4] <= 0.125) {
																	if (x[2] <= -0.025) {
																		if (x[4] <= -0.025) {
																			result[0] = 0.0f; result[1] = 0.0f;
																		}
																		else {
																			if (x[4] <= 0.075) {
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
																	result[0] = 0.0f; result[1] = 10.0f;
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

											}
											else {
												if (x[1] <= -0.025) {
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
												else {
													result[0] = 0.0f; result[1] = 10.0f;
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
									if (x[1] <= 0.125) {
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
														if (x[2] <= -0.025) {
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
														if (x[4] <= 0.225) {
															if (x[2] <= 0.025) {
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
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}

													}

												}

											}
											else {
												if (x[1] <= -0.025) {
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

										}
										else {
											if (x[4] <= -0.025) {
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
													if (x[1] <= 0.075) {
														result[0] = 0.0f; result[1] = 0.0f;
													}
													else {
														if (x[4] <= -0.075) {
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
												if (x[4] <= 0.075) {
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
												else {
													result[0] = 0.0f; result[1] = 0.0f;
												}

											}

										}

									}
									else {
										if (x[1] <= 0.175) {
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
						if (x[4] <= -0.725) {
							if (x[1] <= -1.175) {
								if (x[4] <= -0.875) {
									result[0] = 5.0f; result[1] = 0.0f;
								}
								else {
									if (x[1] <= -1.275) {
										result[0] = 5.0f; result[1] = 0.0f;
									}
									else {
										result[0] = 0.0f; result[1] = 0.0f;
									}

								}

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
							if (x[1] <= -1.325) {
								if (x[4] <= -0.225) {
									if (x[1] <= -1.375) {
										if (x[4] <= -0.375) {
											result[0] = 5.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= -1.425) {
												result[0] = 5.0f; result[1] = 0.0f;
											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}

									}
									else {
										if (x[4] <= -0.625) {
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
									if (x[4] <= -0.275) {
										if (x[1] <= 0.025) {
											result[0] = 0.0f; result[1] = 0.0f;
										}
										else {
											if (x[4] <= -0.375) {
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
																if (x[4] <= -0.525) {
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
							if (x[1] <= 0.375) {
								if (x[4] <= -0.725) {
									if (x[1] <= 0.275) {
										if (x[4] <= -0.875) {
											result[0] = 5.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= 0.225) {
												if (x[1] <= 0.175) {
													result[0] = 5.0f; result[1] = 0.0f;
												}
												else {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.775) {
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

									}
									else {
										if (x[4] <= -1.125) {
											result[0] = 5.0f; result[1] = 0.0f;
										}
										else {
											if (x[1] <= 0.325) {
												if (x[4] <= -0.875) {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.975) {
															if (x[4] <= -1.025) {
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
									if (x[1] <= 0.125) {
										if (x[4] <= -0.225) {
											if (x[1] <= 0.075) {
												if (x[4] <= -0.375) {
													result[0] = 5.0f; result[1] = 0.0f;
												}
												else {
													if (x[1] <= 0.025) {
														result[0] = 5.0f; result[1] = 0.0f;
													}
													else {
														if (x[2] <= 0.025) {
															if (x[4] <= -0.275) {
																if (x[2] <= -0.025) {
																	result[0] = 0.0f; result[1] = 0.0f;
																}
																else {
																	if (x[4] <= -0.325) {
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
														else {
															result[0] = 5.0f; result[1] = 0.0f;
														}

													}

												}

											}
											else {
												if (x[4] <= -0.375) {
													if (x[2] <= 0.025) {
														if (x[4] <= -0.625) {
															result[0] = 5.0f; result[1] = 0.0f;
														}
														else {
															if (x[4] <= -0.475) {
																if (x[4] <= -0.525) {
																	if (x[2] <= -0.025) {
																		result[0] = 0.0f; result[1] = 0.0f;
																	}
																	else {
																		if (x[4] <= -0.575) {
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
													result[0] = 0.0f; result[1] = 0.0f;
												}

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
										if (x[4] <= -0.625) {
											if (x[1] <= 0.175) {
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
										else {
											result[0] = 0.0f; result[1] = 0.0f;
										}

									}

								}

							}
							else {
								if (x[1] <= 0.425) {
									if (x[4] <= -1.125) {
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