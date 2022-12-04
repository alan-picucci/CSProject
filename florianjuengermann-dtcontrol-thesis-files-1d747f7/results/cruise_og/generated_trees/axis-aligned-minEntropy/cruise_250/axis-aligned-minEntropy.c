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
			if (x[3] <= 13.0) {
				if (x[2] <= 59.5) {
					if (x[2] <= 15.5) {
						if (x[2] <= 8.5) {
							if (x[2] <= 7.5) {
								if (x[5] <= 13.0) {
									if (x[5] <= -3.0) {
										return -2.0f;
									}
									else {
										if (x[3] <= -3.0) {
											return 0.0f;
										}
										else {
											if (x[3] <= 11.0) {
												if (x[5] <= 11.0) {
													if (x[3] <= 9.0) {
														if (x[5] <= 9.0) {
															if (x[3] <= 7.0) {
																if (x[5] <= 7.0) {
																	if (x[3] <= 5.0) {
																		if (x[5] <= 5.0) {
																			if (x[3] <= 3.0) {
																				if (x[5] <= 3.0) {
																					if (x[3] <= 1.0) {
																						if (x[5] <= 1.0) {
																							if (x[3] <= -1.0) {
																								if (x[5] <= -1.0) {
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
																							return 0.0f;
																						}

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
																				return -2.0f;
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
																	return 0.0f;
																}

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
														return -2.0f;
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
									return 0.0f;
								}

							}
							else {
								if (x[5] <= -1.0) {
									if (x[3] <= -3.0) {
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
									if (x[3] <= -3.0) {
										return 0.0f;
									}
									else {
										if (x[5] <= 15.0) {
											if (x[3] <= 11.0) {
												if (x[5] <= 13.0) {
													if (x[3] <= 9.0) {
														if (x[5] <= 11.0) {
															if (x[3] <= 7.0) {
																if (x[5] <= 9.0) {
																	if (x[3] <= 5.0) {
																		if (x[5] <= 7.0) {
																			if (x[3] <= 3.0) {
																				if (x[5] <= 5.0) {
																					if (x[3] <= 1.0) {
																						if (x[5] <= 1.0) {
																							if (x[3] <= -1.0) {
																								return 0.0f;
																							}
																							else {
																								return -2.0f;
																							}

																						}
																						else {
																							if (x[3] <= -1.0) {
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
															return 0.0f;
														}

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

							}

						}
						else {
							if (x[3] <= -3.0) {
								if (x[2] <= 11.5) {
									if (x[5] <= -3.0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

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
								if (x[5] <= -1.0) {
									if (x[3] <= -1.0) {
										if (x[2] <= 13.5) {
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
												if (x[2] <= 9.5) {
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
									if (x[5] <= 13.0) {
										if (x[3] <= 9.0) {
											if (x[5] <= 9.0) {
												if (x[3] <= 5.0) {
													if (x[5] <= 5.0) {
														if (x[3] <= 1.0) {
															if (x[2] <= 11.5) {
																if (x[5] <= 1.0) {
																	if (x[3] <= -1.0) {
																		if (x[2] <= 10.5) {
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
																	if (x[3] <= -1.0) {
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

															}
															else {
																if (x[3] <= -1.0) {
																	return 0.0f;
																}
																else {
																	if (x[5] <= 1.0) {
																		return 0.0f;
																	}
																	else {
																		if (x[2] <= 12.5) {
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

														}
														else {
															if (x[2] <= 14.5) {
																if (x[3] <= 3.0) {
																	if (x[5] <= 3.0) {
																		if (x[2] <= 13.5) {
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
																		return 0.0f;
																	}

																}
																else {
																	return -2.0f;
																}

															}
															else {
																if (x[5] <= 3.0) {
																	if (x[3] <= 3.0) {
																		if (x[5] <= 1.0) {
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
																	if (x[3] <= 3.0) {
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
														if (x[3] <= 3.0) {
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
												else {
													if (x[3] <= 7.0) {
														if (x[5] <= 7.0) {
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
												if (x[3] <= 7.0) {
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

										}
										else {
											if (x[3] <= 11.0) {
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
									else {
										if (x[3] <= 11.0) {
											return 0.0f;
										}
										else {
											if (x[5] <= 15.0) {
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
						if (x[3] <= 3.0) {
							if (x[2] <= 29.5) {
								if (x[5] <= 1.0) {
									if (x[3] <= -1.0) {
										if (x[2] <= 18.5) {
											if (x[5] <= -3.0) {
												if (x[3] <= -3.0) {
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
											if (x[2] <= 19.5) {
												if (x[5] <= -5.0) {
													if (x[3] <= -3.0) {
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
										if (x[3] <= 1.0) {
											if (x[2] <= 20.5) {
												if (x[2] <= 19.5) {
													if (x[5] <= -3.0) {
														return -2.0f;
													}
													else {
														if (x[2] <= 16.5) {
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
													if (x[5] <= -5.0) {
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

											}
											else {
												if (x[5] <= -1.0) {
													if (x[2] <= 27.5) {
														if (x[5] <= -3.0) {
															return 0.0f;
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
													else {
														if (x[5] <= -5.0) {
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
												if (x[2] <= 20.5) {
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
									if (x[5] <= 3.0) {
										if (x[3] <= 1.0) {
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
								if (x[2] <= 38.5) {
									if (x[3] <= 1.0) {
										return 0.0f;
									}
									else {
										if (x[5] <= -3.0) {
											return 0.0f;
										}
										else {
											if (x[5] <= -1.0) {
												if (x[2] <= 35.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
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

								}
								else {
									if (x[2] <= 39.5) {
										if (x[5] <= -5.0) {
											if (x[3] <= 1.0) {
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
							if (x[5] <= 7.0) {
								if (x[3] <= 7.0) {
									if (x[2] <= 52.5) {
										if (x[5] <= 3.0) {
											if (x[2] <= 36.5) {
												if (x[5] <= -1.0) {
													return -2.0f;
												}
												else {
													if (x[3] <= 5.0) {
														if (x[2] <= 24.5) {
															return -2.0f;
														}
														else {
															if (x[5] <= 1.0) {
																if (x[2] <= 31.5) {
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
												if (x[3] <= 5.0) {
													if (x[2] <= 40.5) {
														if (x[5] <= 1.0) {
															if (x[5] <= -3.0) {
																if (x[2] <= 39.5) {
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
															return 0.0f;
														}

													}
													else {
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
															if (x[2] <= 43.5) {
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
													if (x[2] <= 51.5) {
														if (x[5] <= 1.0) {
															if (x[5] <= -1.0) {
																if (x[2] <= 49.5) {
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
														if (x[5] <= -3.0) {
															return -2.0f;
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
										else {
											if (x[2] <= 28.5) {
												if (x[3] <= 5.0) {
													if (x[5] <= 5.0) {
														if (x[2] <= 27.5) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}
													else {
														if (x[2] <= 16.5) {
															return 0.0f;
														}
														else {
															return 0.0f;
														}

													}

												}
												else {
													if (x[5] <= 5.0) {
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
												if (x[3] <= 5.0) {
													return 0.0f;
												}
												else {
													if (x[2] <= 42.5) {
														if (x[5] <= 5.0) {
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
										if (x[5] <= -5.0) {
											if (x[3] <= 5.0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 53.5) {
													return -2.0f;
												}
												else {
													return 0.0f;
												}

											}

										}
										else {
											if (x[3] <= 5.0) {
												return 0.0f;
											}
											else {
												if (x[5] <= 1.0) {
													if (x[2] <= 58.5) {
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

										}

									}

								}
								else {
									if (x[5] <= 5.0) {
										if (x[5] <= 1.0) {
											return -2.0f;
										}
										else {
											if (x[3] <= 9.0) {
												if (x[2] <= 43.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= 3.0) {
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
											else {
												return -2.0f;
											}

										}

									}
									else {
										if (x[2] <= 48.5) {
											if (x[3] <= 9.0) {
												if (x[2] <= 32.5) {
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
											if (x[3] <= 9.0) {
												return 0.0f;
											}
											else {
												if (x[3] <= 11.0) {
													if (x[2] <= 49.5) {
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

								}

							}
							else {
								if (x[5] <= 13.0) {
									if (x[3] <= 9.0) {
										if (x[2] <= 19.5) {
											if (x[3] <= 7.0) {
												if (x[5] <= 9.0) {
													if (x[3] <= 5.0) {
														return 0.0f;
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
												else {
													return 0.0f;
												}

											}
											else {
												if (x[5] <= 9.0) {
													return -2.0f;
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

										}
										else {
											if (x[3] <= 7.0) {
												return 0.0f;
											}
											else {
												if (x[5] <= 9.0) {
													if (x[2] <= 35.5) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[2] <= 20.5) {
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

									}
									else {
										if (x[5] <= 11.0) {
											if (x[2] <= 39.5) {
												if (x[3] <= 11.0) {
													if (x[5] <= 9.0) {
														if (x[2] <= 36.5) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

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
													if (x[5] <= 9.0) {
														if (x[2] <= 55.5) {
															return -2.0f;
														}
														else {
															return 0.0f;
														}

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

											}

										}
										else {
											if (x[2] <= 23.5) {
												if (x[3] <= 11.0) {
													if (x[2] <= 22.5) {
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
													if (x[2] <= 43.5) {
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
									if (x[2] <= 24.5) {
										if (x[3] <= 11.0) {
											return 0.0f;
										}
										else {
											if (x[5] <= 15.0) {
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
					if (x[2] <= 102.5) {
						if (x[3] <= 9.0) {
							if (x[3] <= 7.0) {
								if (x[2] <= 66.5) {
									if (x[3] <= 5.0) {
										return 0.0f;
									}
									else {
										if (x[5] <= -1.0) {
											if (x[5] <= -3.0) {
												return 0.0f;
											}
											else {
												if (x[2] <= 63.5) {
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
									if (x[2] <= 67.5) {
										if (x[5] <= -5.0) {
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
									else {
										return 0.0f;
									}

								}

							}
							else {
								if (x[5] <= -1.0) {
									if (x[2] <= 68.5) {
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
										if (x[2] <= 84.5) {
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
									if (x[5] <= 3.0) {
										if (x[2] <= 75.5) {
											if (x[2] <= 68.5) {
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
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[5] <= 5.0) {
								if (x[2] <= 78.5) {
									if (x[5] <= 1.0) {
										if (x[2] <= 76.5) {
											return -2.0f;
										}
										else {
											if (x[5] <= -1.0) {
												return -2.0f;
											}
											else {
												if (x[3] <= 11.0) {
													return 0.0f;
												}
												else {
													return -2.0f;
												}

											}

										}

									}
									else {
										if (x[3] <= 11.0) {
											if (x[2] <= 69.5) {
												if (x[5] <= 3.0) {
													return -2.0f;
												}
												else {
													if (x[2] <= 60.5) {
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
									if (x[3] <= 11.0) {
										if (x[2] <= 85.5) {
											if (x[5] <= 3.0) {
												if (x[5] <= -1.0) {
													if (x[5] <= -3.0) {
														if (x[2] <= 84.5) {
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
														if (x[2] <= 81.5) {
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
										else {
											if (x[5] <= 1.0) {
												if (x[2] <= 94.5) {
													return 0.0f;
												}
												else {
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
														return 0.0f;
													}

												}

											}
											else {
												if (x[2] <= 87.5) {
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
										if (x[2] <= 99.5) {
											if (x[5] <= 3.0) {
												if (x[5] <= 1.0) {
													if (x[2] <= 95.5) {
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
													if (x[2] <= 88.5) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}

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
											if (x[5] <= 3.0) {
												if (x[5] <= -3.0) {
													return -2.0f;
												}
												else {
													if (x[2] <= 100.5) {
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
												return 0.0f;
											}

										}

									}

								}

							}
							else {
								if (x[5] <= 7.0) {
									if (x[2] <= 68.5) {
										if (x[3] <= 11.0) {
											if (x[2] <= 67.5) {
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
											if (x[2] <= 88.5) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									if (x[5] <= 9.0) {
										if (x[2] <= 75.5) {
											if (x[3] <= 11.0) {
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
											if (x[5] <= 11.0) {
												if (x[3] <= 11.0) {
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

					}
					else {
						if (x[2] <= 104.5) {
							if (x[3] <= 11.0) {
								if (x[5] <= -5.0) {
									if (x[3] <= 9.0) {
										return 0.0f;
									}
									else {
										if (x[2] <= 103.5) {
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
								if (x[5] <= 3.0) {
									if (x[5] <= -3.0) {
										if (x[2] <= 103.5) {
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
									return 0.0f;
								}

							}

						}
						else {
							if (x[3] <= 11.0) {
								return 0.0f;
							}
							else {
								if (x[2] <= 120.5) {
									if (x[5] <= -1.0) {
										return 0.0f;
									}
									else {
										if (x[5] <= 1.0) {
											if (x[2] <= 115.5) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[5] <= 3.0) {
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

								}
								else {
									if (x[2] <= 123.5) {
										if (x[5] <= -3.0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[2] <= 124.5) {
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

						}

					}

				}

			}
			else {
				if (x[2] <= 169.5) {
					if (x[5] <= 7.0) {
						if (x[2] <= 136.5) {
							if (x[3] <= 15.0) {
								if (x[2] <= 111.5) {
									if (x[5] <= 3.0) {
										if (x[2] <= 109.5) {
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
										if (x[2] <= 89.5) {
											return -2.0f;
										}
										else {
											if (x[2] <= 100.5) {
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

								}
								else {
									if (x[5] <= 1.0) {
										if (x[2] <= 125.5) {
											if (x[5] <= -1.0) {
												if (x[2] <= 121.5) {
													return -2.0f;
												}
												else {
													if (x[5] <= -3.0) {
														if (x[2] <= 124.5) {
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
												if (x[2] <= 116.5) {
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
										if (x[5] <= 5.0) {
											if (x[2] <= 122.5) {
												return 0.0f;
											}
											else {
												if (x[5] <= 3.0) {
													if (x[2] <= 131.5) {
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
								if (x[5] <= 3.0) {
									if (x[2] <= 132.5) {
										return -2.0f;
									}
									else {
										if (x[5] <= 1.0) {
											return -2.0f;
										}
										else {
											if (x[3] <= 17.0) {
												return 0.0f;
											}
											else {
												return -2.0f;
											}

										}

									}

								}
								else {
									if (x[3] <= 17.0) {
										if (x[2] <= 112.5) {
											return -2.0f;
										}
										else {
											if (x[2] <= 123.5) {
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

							}

						}
						else {
							if (x[3] <= 17.0) {
								if (x[2] <= 148.5) {
									if (x[3] <= 15.0) {
										if (x[5] <= -1.0) {
											if (x[2] <= 146.5) {
												if (x[2] <= 143.5) {
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
												if (x[5] <= -5.0) {
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

										}
										else {
											if (x[2] <= 138.5) {
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
										if (x[5] <= 5.0) {
											if (x[2] <= 147.5) {
												if (x[5] <= 1.0) {
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
												if (x[5] <= -5.0) {
													return -2.0f;
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
											return 0.0f;
										}

									}

								}
								else {
									if (x[3] <= 15.0) {
										return 0.0f;
									}
									else {
										if (x[5] <= 3.0) {
											if (x[5] <= 1.0) {
												if (x[2] <= 163.5) {
													return 0.0f;
												}
												else {
													if (x[5] <= -1.0) {
														if (x[2] <= 168.5) {
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

							}
							else {
								if (x[5] <= 5.0) {
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
										if (x[2] <= 148.5) {
											return -2.0f;
										}
										else {
											if (x[2] <= 157.5) {
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

									}

								}
								else {
									if (x[2] <= 137.5) {
										return -2.0f;
									}
									else {
										if (x[2] <= 163.5) {
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
						if (x[2] <= 109.5) {
							if (x[5] <= 15.0) {
								if (x[2] <= 66.5) {
									if (x[5] <= 13.0) {
										if (x[3] <= 15.0) {
											if (x[2] <= 44.5) {
												return -2.0f;
											}
											else {
												if (x[5] <= 11.0) {
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
													return 0.0f;
												}

											}

										}
										else {
											return -2.0f;
										}

									}
									else {
										if (x[2] <= 47.5) {
											if (x[3] <= 15.0) {
												if (x[2] <= 25.5) {
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
											if (x[3] <= 15.0) {
												return 0.0f;
											}
											else {
												if (x[3] <= 17.0) {
													if (x[2] <= 48.5) {
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

								}
								else {
									if (x[3] <= 15.0) {
										if (x[2] <= 76.5) {
											if (x[5] <= 9.0) {
												return -2.0f;
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
											if (x[5] <= 9.0) {
												if (x[2] <= 98.5) {
													return 0.0f;
												}
												else {
													return 0.0f;
												}

											}
											else {
												if (x[2] <= 83.5) {
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
										if (x[5] <= 11.0) {
											if (x[2] <= 108.5) {
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
											else {
												if (x[3] <= 17.0) {
													if (x[5] <= 9.0) {
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

										}
										else {
											if (x[3] <= 17.0) {
												if (x[2] <= 67.5) {
													if (x[5] <= 13.0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[2] <= 91.5) {
														if (x[5] <= 13.0) {
															return 0.0f;
														}
														else {
															if (x[2] <= 72.5) {
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
												if (x[2] <= 99.5) {
													if (x[2] <= 92.5) {
														if (x[5] <= 13.0) {
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
													else {
														return 0.0f;
													}

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

										}

									}

								}

							}
							else {
								if (x[2] <= 52.5) {
									if (x[3] <= 15.0) {
										if (x[2] <= 26.5) {
											if (x[5] <= 17.0) {
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
										if (x[5] <= 17.0) {
											if (x[2] <= 51.5) {
												if (x[3] <= 17.0) {
													if (x[2] <= 27.5) {
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
													return -2.0f;
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

										}

									}

								}
								else {
									if (x[3] <= 17.0) {
										return 0.0f;
									}
									else {
										if (x[5] <= 17.0) {
											if (x[2] <= 78.5) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[2] <= 55.5) {
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

						}
						else {
							if (x[5] <= 9.0) {
								if (x[2] <= 124.5) {
									if (x[3] <= 17.0) {
										if (x[3] <= 15.0) {
											return 0.0f;
										}
										else {
											if (x[2] <= 123.5) {
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
									if (x[3] <= 17.0) {
										return 0.0f;
									}
									else {
										if (x[2] <= 150.5) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								if (x[5] <= 11.0) {
									if (x[3] <= 17.0) {
										return 0.0f;
									}
									else {
										if (x[2] <= 135.5) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (x[2] <= 118.5) {
										if (x[5] <= 13.0) {
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
									else {
										return 0.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[2] <= 173.5) {
						if (x[5] <= -3.0) {
							if (x[3] <= 17.0) {
								if (x[3] <= 15.0) {
									return 0.0f;
								}
								else {
									if (x[2] <= 171.5) {
										return 0.0f;
									}
									else {
										if (x[5] <= -5.0) {
											if (x[2] <= 172.5) {
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

						}
						else {
							if (x[3] <= 17.0) {
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
						if (x[5] <= 1.0) {
							if (x[3] <= 17.0) {
								return 0.0f;
							}
							else {
								if (x[2] <= 190.5) {
									return 0.0f;
								}
								else {
									if (x[2] <= 195.5) {
										if (x[5] <= -1.0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[2] <= 197.5) {
											if (x[5] <= -3.0) {
												return 0.0f;
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

							}

						}
						else {
							if (x[5] <= 3.0) {
								if (x[2] <= 183.5) {
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
							else {
								if (x[2] <= 174.5) {
									if (x[5] <= 5.0) {
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
			if (x[5] <= 3.0) {
				if (x[2] <= 191.5) {
					if (x[2] <= 184.5) {
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
					if (x[5] <= -1.0) {
						if (x[2] <= 196.5) {
							return -2.0f;
						}
						else {
							if (x[2] <= 200.5) {
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
				if (x[2] <= 164.5) {
					if (x[5] <= 7.0) {
						return -2.0f;
					}
					else {
						if (x[2] <= 31.5) {
							return -2.0f;
						}
						else {
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
											return 0.0f;
										}

									}
									else {
										return 0.0f;
									}

								}

							}
							else {
								if (x[2] <= 100.5) {
									if (x[5] <= 15.0) {
										return -2.0f;
									}
									else {
										if (x[2] <= 79.5) {
											if (x[5] <= 19.0) {
												if (x[2] <= 56.5) {
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
										if (x[2] <= 119.5) {
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
					if (x[5] <= 5.0) {
						if (x[2] <= 175.5) {
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