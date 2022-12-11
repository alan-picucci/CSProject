#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {3.12f,-0.9f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 3.16) {
		if (x[1] <= 0.75) {
			if (x[1] <= -0.45) {
				if (x[1] <= -0.65) {
					if (x[0] <= 3.08) {
						if (x[0] <= 3.0) {
							return 2.4f;
						}
						else {
							if (x[1] <= -0.75) {
								return 2.3f;
							}
							else {
								return 0.2f;
							}

						}

					}
					else {
						if (x[1] <= -0.85) {
							return 2.2f;
						}
						else {
							if (x[1] <= -0.75) {
								return 0.1f;
							}
							else {
								return 0.0f;
							}

						}

					}

				}
				else {
					if (x[0] <= 2.92) {
						if (x[0] <= 2.84) {
							return 2.7f;
						}
						else {
							if (x[1] <= -0.55) {
								return 2.5f;
							}
							else {
								return 0.4f;
							}

						}

					}
					else {
						if (x[0] <= 3.0) {
							if (x[1] <= -0.55) {
								return 0.3f;
							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[0] <= 3.08) {
								if (x[1] <= -0.55) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								if (x[1] <= -0.55) {
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
				if (x[1] <= 0.15) {
					if (x[0] <= 2.76) {
						if (x[0] <= 2.6) {
							if (x[1] <= -0.05) {
								if (x[0] <= 2.52) {
									return 3.6f;
								}
								else {
									if (x[1] <= -0.15) {
										return 3.3f;
									}
									else {
										return 0.8f;
									}

								}

							}
							else {
								if (x[1] <= 0.05) {
									if (x[0] <= 2.44) {
										return 3.9f;
									}
									else {
										if (x[0] <= 2.52) {
											return 0.9f;
										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (x[0] <= 2.52) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= -0.25) {
								if (x[0] <= 2.68) {
									return 3.1f;
								}
								else {
									if (x[1] <= -0.35) {
										return 2.9f;
									}
									else {
										return 0.6f;
									}

								}

							}
							else {
								if (x[1] <= -0.05) {
									if (x[0] <= 2.68) {
										if (x[1] <= -0.15) {
											return 0.7f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[1] <= -0.15) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (2.3320910341791654*x[0]*x[0]+2.3985709964193482*x[0]*x[1]+68.3388317287803*x[1]*x[1]+12.50000825456807*x[0]+6.833883274710825*x[1]-50.2537658564895 <= 0) {
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
						if (x[1] <= -0.15) {
							if (x[0] <= 2.92) {
								if (x[1] <= -0.35) {
									if (x[0] <= 2.84) {
										return 0.5f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[0] <= 2.84) {
										if (x[1] <= -0.25) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[1] <= -0.25) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}

								}

							}
							else {
								if (2.06573630638801*x[0]*x[0]+1.0952889767991545*x[0]*x[1]-16.083384451343232*x[1]*x[1]+13.043674557756805*x[0]+5.499540548653099*x[1]-51.63845088562964 <= 0) {
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
					if (x[0] <= 3.0) {
						return 0.0f;
					}
					else {
						if (x[1] <= 0.65) {
							if (-2.0089020809406546*x[0]*x[0]-0.4171704464640132*x[0]*x[1]-16.402596909053486*x[1]*x[1]-12.374836512060298*x[0]-0.6555010967227544*x[1]+64.24412549341362 <= 0) {
								return 0.0f;
							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[0] <= 3.08) {
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
			if (x[0] <= 2.76) {
				if (x[1] <= 0.85) {
					if (x[0] <= 2.52) {
						if (x[0] <= 2.44) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[0] <= 2.6) {
							return 0.0f;
						}
						else {
							if (x[0] <= 2.68) {
								return 0.0f;
							}
							else {
								return 0.0f;
							}

						}

					}

				}
				else {
					if (x[0] <= 2.52) {
						if (x[0] <= 2.44) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[0] <= 2.6) {
							return 0.0f;
						}
						else {
							if (x[0] <= 2.68) {
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
				if (x[1] <= 0.85) {
					if (x[0] <= 2.92) {
						if (x[0] <= 2.84) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[0] <= 3.0) {
							return 0.0f;
						}
						else {
							if (x[0] <= 3.08) {
								return 0.0f;
							}
							else {
								return -0.1f;
							}

						}

					}

				}
				else {
					if (x[0] <= 2.92) {
						return 0.0f;
					}
					else {
						if (x[0] <= 3.0) {
							return 0.0f;
						}
						else {
							if (x[0] <= 3.08) {
								return 0.0f;
							}
							else {
								return -2.2f;
							}

						}

					}

				}

			}

		}

	}
	else {
		if (x[1] <= -0.75) {
			if (x[1] <= -0.85) {
				if (x[0] <= 3.48) {
					if (x[0] <= 3.32) {
						return 0.0f;
					}
					else {
						if (x[0] <= 3.4) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}

				}
				else {
					if (x[0] <= 3.64) {
						if (x[0] <= 3.56) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[0] <= 3.72) {
							return 0.0f;
						}
						else {
							if (x[0] <= 3.8) {
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
				if (x[0] <= 3.48) {
					if (x[0] <= 3.32) {
						if (x[0] <= 3.24) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[0] <= 3.4) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}

				}
				else {
					if (x[0] <= 3.64) {
						if (x[0] <= 3.56) {
							return 0.0f;
						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[0] <= 3.72) {
							return 0.0f;
						}
						else {
							if (x[0] <= 3.8) {
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
			if (x[1] <= 0.35) {
				if (x[1] <= -0.15) {
					if (x[1] <= -0.65) {
						if (x[0] <= 3.32) {
							if (x[0] <= 3.24) {
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
					if (x[0] <= 3.64) {
						if (x[0] <= 3.48) {
							if (x[1] <= 0.15) {
								return 0.0f;
							}
							else {
								if (x[0] <= 3.4) {
									if (-1.8610522205924434*x[0]*x[0]-2.56377772068426*x[0]*x[1]-11.385690530463483*x[1]*x[1]-11.873476663274648*x[0]-5.692845434891744*x[1]+65.22226895362115 <= 0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[1] <= 0.25) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 0.05) {
								if (-1.7556191701856385*x[0]*x[0]-1.9207626971367207*x[0]*x[1]+65.42624302228032*x[1]*x[1]-12.500008290807077*x[0]-6.542624399720731*x[1]+66.75285210171097 <= 0) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								if (x[1] <= 0.25) {
									if (x[0] <= 3.56) {
										if (x[1] <= 0.15) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[1] <= 0.15) {
											return 0.0f;
										}
										else {
											return -0.6f;
										}

									}

								}
								else {
									if (x[0] <= 3.56) {
										return -0.5f;
									}
									else {
										return -3.0f;
									}

								}

							}

						}

					}
					else {
						if (x[1] <= 0.05) {
							if (x[1] <= -0.05) {
								if (x[0] <= 3.72) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								if (x[0] <= 3.72) {
									return 0.0f;
								}
								else {
									if (x[0] <= 3.8) {
										return -0.9f;
									}
									else {
										return -3.7f;
									}

								}

							}

						}
						else {
							if (x[0] <= 3.72) {
								if (x[1] <= 0.15) {
									return -0.7f;
								}
								else {
									return -3.2f;
								}

							}
							else {
								return -3.4f;
							}

						}

					}

				}

			}
			else {
				if (x[1] <= 0.55) {
					if (x[0] <= 3.4) {
						if (x[0] <= 3.24) {
							if (x[1] <= 0.45) {
								return 0.0f;
							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[0] <= 3.32) {
								if (x[1] <= 0.45) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								if (x[1] <= 0.45) {
									return 0.0f;
								}
								else {
									return -0.3f;
								}

							}

						}

					}
					else {
						if (x[0] <= 3.48) {
							if (x[1] <= 0.45) {
								return -0.4f;
							}
							else {
								return -2.6f;
							}

						}
						else {
							return -2.8f;
						}

					}

				}
				else {
					if (x[0] <= 3.24) {
						if (x[1] <= 0.65) {
							return 0.0f;
						}
						else {
							if (x[1] <= 0.75) {
								return -0.2f;
							}
							else {
								return -2.2f;
							}

						}

					}
					else {
						if (x[0] <= 3.32) {
							if (x[1] <= 0.65) {
								return -0.2f;
							}
							else {
								return -2.4f;
							}

						}
						else {
							return -2.5f;
						}

					}

				}

			}

		}

	}

}