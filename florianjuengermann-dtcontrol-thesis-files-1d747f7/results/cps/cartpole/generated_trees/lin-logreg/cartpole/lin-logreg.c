#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {3.12f,-0.9f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 3.16) {
		if (1.0054753087411223*x[0]+0.8970757391673287*x[1]-2.6335468519951863 <= 0) {
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
						if (291.75330744629844*x[0]+237.40163457294997*x[1]-755.7223380124726 <= 0) {
							if (-230.90011266103753*x[0]-691.4580734241284*x[1]+277.64786387868816 <= 0) {
								return 0.0f;
							}
							else {
								return 0.3f;
							}

						}
						else {
							return 0.0f;
						}

					}

				}

			}
			else {
				if (x[1] <= -0.25) {
					if (x[0] <= 2.76) {
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
						if (251.82259632296532*x[0]+199.78040287006772*x[1]-655.2343747953881 <= 0) {
							if (-276.56675896024143*x[0]-1327.6328538595399*x[1]+255.0602983236115 <= 0) {
								return 0.0f;
							}
							else {
								return 0.5f;
							}

						}
						else {
							return 0.0f;
						}

					}

				}
				else {
					if (35.62238600217792*x[0]+26.419399803273954*x[1]-89.71112963991244 <= 0) {
						if (x[0] <= 2.52) {
							if (x[0] <= 2.44) {
								if (x[1] <= 0.05) {
									return 3.9f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								if (x[1] <= -0.05) {
									return 3.6f;
								}
								else {
									return 0.9f;
								}

							}

						}
						else {
							if (x[0] <= 2.6) {
								if (x[1] <= -0.15) {
									return 3.3f;
								}
								else {
									return 0.8f;
								}

							}
							else {
								return 0.7f;
							}

						}

					}
					else {
						if (x[0] <= 2.44) {
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
			if (-0.8482140358105458*x[0]-5.59821532269031*x[1]+6.381062309317261 <= 0) {
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
					if (x[0] <= 3.0) {
						if (x[0] <= 2.92) {
							if (x[1] <= 0.85) {
								if (x[0] <= 2.84) {
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
							if (x[1] <= 0.75) {
								return 0.0f;
							}
							else {
								if (x[1] <= 0.85) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}

						}

					}
					else {
						if (x[1] <= 0.85) {
							if (-248.82803430416794*x[0]-2244.7420400907404*x[1]+2337.8812166305843 <= 0) {
								if (-227.2719302021235*x[0]-1634.3266743472366*x[1]+2007.4178652327869 <= 0) {
									return -0.1f;
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
			else {
				if (-175.9938140645286*x[0]-146.68516353963506*x[1]+464.0638886599644 <= 0) {
					if (-1485.933611465204*x[0]-1384.0036223227164*x[1]+3932.484032882788 <= 0) {
						if (-1753.8731786586764*x[0]-1600.9617328130441*x[1]+4660.019730588315 <= 0) {
							if (-277.3636002538499*x[0]-227.0925247175535*x[1]+990.1735272248555 <= 0) {
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
					if (x[0] <= 2.76) {
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
		if (-1.130057071980278*x[0]-1.0086101864182055*x[1]+4.043122844511446 <= 0) {
			if (x[1] <= 0.35) {
				if (x[0] <= 3.64) {
					if (-170.93424991042772*x[0]-4350.46642333585*x[1]+1043.5527349550428 <= 0) {
						if (-657.1637636378645*x[0]-214.23194358806657*x[1]+2313.843618606923 <= 0) {
							if (-343.3712743890399*x[0]-238.00344735943804*x[1]+1270.1382766116606 <= 0) {
								if (x[0] <= 3.56) {
									return -0.5f;
								}
								else {
									if (x[1] <= 0.25) {
										return -0.6f;
									}
									else {
										return -3.0f;
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
						return 0.0f;
					}

				}
				else {
					if (x[1] <= 0.05) {
						if (x[1] <= -0.15) {
							return 0.0f;
						}
						else {
							if (-232.06156344189677*x[0]-1793.7510053030228*x[1]+683.7628140405731 <= 0) {
								if (-254.8753784638615*x[0]-5601.154535159207*x[1]+948.4296875288942 <= 0) {
									if (x[0] <= 3.8) {
										return -0.9f;
									}
									else {
										return -3.7f;
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
			else {
				if (x[1] <= 0.55) {
					if (x[0] <= 3.4) {
						if (-333.27089932737306*x[0]-222.88951778515343*x[1]+1192.5467766380718 <= 0) {
							if (-217.92415058932275*x[0]-2727.744341263092*x[1]+2087.436543101468 <= 0) {
								return -0.3f;
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
		else {
			if (272.49590197655647*x[0]+1479.9211361776765*x[1]+128.81701404148163 <= 0) {
				if (x[0] <= 3.48) {
					if (x[0] <= 3.32) {
						if (x[1] <= -0.85) {
							return 0.0f;
						}
						else {
							if (x[0] <= 3.24) {
								if (x[1] <= -0.75) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								if (x[1] <= -0.75) {
									return 0.0f;
								}
								else {
									return 0.0f;
								}

							}

						}

					}
					else {
						if (x[0] <= 3.4) {
							if (x[1] <= -0.85) {
								return 0.0f;
							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[1] <= -0.85) {
								return 0.0f;
							}
							else {
								return 0.0f;
							}

						}

					}

				}
				else {
					if (x[1] <= -0.85) {
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
				return 0.0f;
			}

		}

	}

}