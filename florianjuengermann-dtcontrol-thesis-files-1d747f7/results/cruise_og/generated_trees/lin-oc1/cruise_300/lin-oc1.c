#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,10.f,-10.f,-2.f,-10.f,-2.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[3] <= -9.0) {
		if (1.00446427*x[2]+0.0227172505*x[3]+0.485491127*x[5]-2.4179163 <= 0) {
			return 0.0f;
		}
		else {
			return 0.0f;
		}

	}
	else {
		if (-0.0781771913*x[2]+0.902782798*x[3]-0.548984289*x[5]+0.974633694 <= 0) {
			if (x[3] <= 19.0) {
				if (0.0160492547*x[2]-0.206141159*x[3]+0.182494953*x[5]-0.694235802 <= 0) {
					if (1.19139791*x[2]-1.25079286*x[3]+0.0577806532*x[5]-36.9285355 <= 0) {
						if (-0.27599746*x[2]+1.31287611*x[3]-0.872614026*x[5]+4.66221142 <= 0) {
							if (0.750411928*x[2]-2.87514234*x[3]+1.36053395*x[5]-20.8957977 <= 0) {
								if (0.0147437891*x[2]+0.452874959*x[3]-0.466744214*x[5]-0.224727154 <= 0) {
									if (-0.0487669706*x[2]-0.64292109*x[3]+0.686341643*x[5]-0.567392349 <= 0) {
										if (x[2] <= 12.0) {
											return -2.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (-0.67274797*x[2]+1.03192687*x[3]+13.255415 <= 0) {
											if (x[2] <= 9.5) {
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
									if (-0.0524013638*x[2]+0.199441224*x[3]-0.0248557702*x[5]+1.98273647 <= 0) {
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

							}
							else {
								if (0.0398905128*x[2]-0.693220854*x[3]+0.474435836*x[5]-0.903585911 <= 0) {
									if (x[3] <= -5.0) {
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
								else {
									return 0.0f;
								}

							}

						}
						else {
							if (0.0111702047*x[2]-0.0406076908*x[3]+0.112754658*x[5]-0.173138618 <= 0) {
								if (-0.8480497*x[2]+0.111244664*x[3]+1.72499979*x[5]+25.1399555 <= 0) {
									return 0.0f;
								}
								else {
									if (-1.53571427*x[2]+1.0*x[5]+11.0 <= 0) {
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
						if (-0.0407298766*x[2]+0.995965123*x[3]-0.0600462146*x[5]-7.63274097 <= 0) {
							if (0.1104232*x[2]-0.858991742*x[3]+0.46709168*x[5]-3.16434431 <= 0) {
								if (-0.20498547*x[2]+0.000396923162*x[3]+0.999496579*x[5]+6.99655342 <= 0) {
									if (0.134629458*x[2]+0.433724761*x[3]-0.841653287*x[5]-6.57415533 <= 0) {
										return 0.0f;
									}
									else {
										if (0.106358655*x[2]+0.289754212*x[3]-0.790734351*x[5]-6.36893415 <= 0) {
											return 0.0f;
										}
										else {
											if (0.0912886113*x[2]+0.547919869*x[3]-0.89212358*x[5]-7.58238506 <= 0) {
												if (0.0677843392*x[2]-0.299556494*x[3]-0.614612103*x[5]-6.6926527 <= 0) {
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
							else {
								if (-0.0581338704*x[2]+1.00007713*x[3]-0.0843802243*x[5]-3.84318519 <= 0) {
									return 0.0f;
								}
								else {
									if (0.0518457443*x[2]-0.67417872*x[3]+0.331759095*x[5]+0.323940128 <= 0) {
										if (x[2] <= 117.0) {
											return 0.0f;
										}
										else {
											if (-0.00856822729*x[2]+0.566822827*x[3]-0.938652158*x[5]-1.98911107 <= 0) {
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
							if (0.12577939*x[2]-1.87475431*x[3]+0.894216835*x[5]+3.85136771 <= 0) {
								if (-0.0280853808*x[2]+0.964716136*x[3]-0.798095286*x[5]-3.84558725 <= 0) {
									if (x[2] <= 118.5) {
										if (x[2] <= 112.0) {
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
									if (0.998691916*x[2]+0.000426696613*x[3]+2.26744509*x[5]-234.430222 <= 0) {
										if (-0.0429897308*x[2]+0.637072802*x[3]-0.36404565*x[5]-0.954543829 <= 0) {
											if (0.00491687655*x[2]-0.453763425*x[3]+0.870776117*x[5]+0.323877782 <= 0) {
												if (x[2] <= 171.0) {
													if (x[2] <= 150.0) {
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
											if (-0.00364669226*x[2]+1.10262632*x[3]-0.00406923285*x[5]-16.9318943 <= 0) {
												if (-0.0746332407*x[2]+0.962699652*x[3]-0.616004705*x[5]+0.229552552 <= 0) {
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
										if (-0.046746321*x[2]+0.670011282*x[3]-0.176032335*x[5]-1.04213786 <= 0) {
											return 0.0f;
										}
										else {
											if (x[2] <= 237.5) {
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
								if (0.00731319189*x[2]-0.32977584*x[3]+0.761891484*x[5]+1.34898031 <= 0) {
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
					return 0.0f;
				}

			}
			else {
				return 0.0f;
			}

		}
		else {
			if (-0.0203636531*x[2]+0.226727754*x[3]-0.139542937*x[5]-0.144506574 <= 0) {
				if (-0.0330076814*x[2]+0.379147232*x[3]-0.126453608*x[5]+0.463885665 <= 0) {
					if (1.94808865*x[2]-6.40140343*x[3]-1.4072547*x[5]-101.973518 <= 0) {
						if (1.00288713*x[2]-1.11809075*x[3]-31.2085457 <= 0) {
							if (1.08067489*x[2]-0.914667368*x[3]-0.128620148*x[5]-26.2742062 <= 0) {
								return -2.0f;
							}
							else {
								if (0.00771071389*x[2]-1.33214891*x[3]+0.656414568*x[5]+1.07756519 <= 0) {
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
						else {
							if (0.0844128653*x[2]-0.998868704*x[3]-0.663455606*x[5]-10.5552788 <= 0) {
								return 0.0f;
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

					}
					else {
						if (-0.0222718269*x[2]+1.00009847*x[3]-0.0026162467*x[5]-11.0257683 <= 0) {
							if (-0.0480993092*x[2]+0.273386776*x[3]+0.24401924*x[5]+4.40711355 <= 0) {
								if (x[5] <= -3.0) {
									return 0.0f;
								}
								else {
									if (0.027389884*x[2]-0.406593293*x[3]+0.360118657*x[5]+1.38653183 <= 0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}

							}
							else {
								if (0.00410391018*x[2]-0.123130642*x[3]+0.224458516*x[5]+1.33241439 <= 0) {
									if (x[2] <= 73.0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									if (0.0164842904*x[2]+0.379357964*x[3]-0.689210117*x[5]-4.47988701 <= 0) {
										if (x[2] <= 68.5) {
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
							if (-0.0575655401*x[2]+0.895509124*x[3]-0.141459286*x[5]-2.25834012 <= 0) {
								if (x[2] <= 288.5) {
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
					if (-0.097296685*x[2]-0.0307421125*x[3]+0.930915773*x[5]-3.55267382 <= 0) {
						if (0.730949044*x[2]-10.4731522*x[3]+4.85143757*x[5]+37.4786682 <= 0) {
							if (0.0186653137*x[2]-0.7203722*x[3]+0.634182215*x[5]+4.20051003 <= 0) {
								if (0.0562333912*x[2]-0.675036728*x[3]+0.013443009*x[5]+0.199586213 <= 0) {
									if (-0.0722282827*x[2]+0.943933606*x[3]-0.637240529*x[5]-0.919144213 <= 0) {
										if (0.0624582171*x[2]-0.853769064*x[3]+0.797093928*x[5]-0.492837489 <= 0) {
											return -2.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (0.013589114*x[2]-0.191447392*x[3]+0.0883370042*x[5]+0.726963937 <= 0) {
											return -2.0f;
										}
										else {
											if (0.00296649337*x[2]-0.0811485797*x[3]-0.0807912946*x[5]+0.777764559 <= 0) {
												if (-0.0285380483*x[2]+0.388974816*x[3]-0.511893153*x[5]+0.75376302 <= 0) {
													if (x[2] <= 158.0) {
														return 0.0f;
													}
													else {
														if (x[2] <= 171.5) {
															if (x[2] <= 165.5) {
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
													if (0.0125033855*x[2]-0.177619755*x[3]-0.942622185*x[5]+0.636363745 <= 0) {
														return -2.0f;
													}
													else {
														if (x[2] <= 220.0) {
															return 0.0f;
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

									}

								}
								else {
									if (-0.0039761588*x[2]+1.0*x[3]-19.0 <= 0) {
										if (0.0100448728*x[2]-0.175465241*x[3]-0.794968128*x[5]-5.83749962 <= 0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (0.0425174311*x[2]-0.647174239*x[3]+0.864360452*x[5]+4.27673817 <= 0) {
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
							if (0.824365139*x[2]+0.119679183*x[3]+0.941376805*x[5]-35.9689865 <= 0) {
								if (-0.040553093*x[2]-1.01795602*x[3]+0.423885196*x[5]+3.17671394 <= 0) {
									if (-0.00841659307*x[2]-0.494762868*x[3]+0.265189379*x[5]+1.64911103 <= 0) {
										if (0.915941715*x[2]+1.14928126*x[3]-0.117524214*x[5]-34.1301842 <= 0) {
											return -2.0f;
										}
										else {
											if (0.00186328369*x[2]-0.682225108*x[3]+0.283178449*x[5]+2.41425729 <= 0) {
												if (x[3] <= 5.0) {
													return -2.0f;
												}
												else {
													if (x[2] <= 36.5) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (0.992152333*x[2]+0.263454676*x[3]-37.5 <= 0) {
													if (x[3] <= 3.0) {
														if (x[3] <= 1.0) {
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

										}

									}
									else {
										if (0.075987637*x[2]-0.22021082*x[3]-0.170884967*x[5]+0.713725328 <= 0) {
											return -2.0f;
										}
										else {
											return 0.0f;
										}

									}

								}
								else {
									if (-0.0359113514*x[2]-0.919522405*x[3]+0.57136482*x[5]+1.59496856 <= 0) {
										return -2.0f;
									}
									else {
										if (-0.0110281855*x[2]+0.645028591*x[3]-0.972318053*x[5]+0.847414672 <= 0) {
											return 0.0f;
										}
										else {
											return -2.0f;
										}

									}

								}

							}
							else {
								if (-0.202763766*x[2]+2.52264404*x[3]-0.588258266*x[5]+0.293933868 <= 0) {
									if (0.992710114*x[2]+0.00546997599*x[3]+0.011104391*x[5]-78.4103775 <= 0) {
										return 0.0f;
									}
									else {
										if (-0.0629046559*x[2]+0.82356751*x[3]+0.628423989*x[5]+4.51281643 <= 0) {
											if (x[2] <= 80.5) {
												return 0.0f;
											}
											else {
												return 0.0f;
											}

										}
										else {
											if (x[2] <= 174.5) {
												if (-0.0289076865*x[2]+0.305481791*x[3]-0.124356002*x[5]+0.439182699 <= 0) {
													if (0.056612432*x[2]-0.794968128*x[3]+0.522245169*x[5]+2.37255311 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (0.0151046664*x[2]-0.179950267*x[3]-0.0497684665*x[5]-0.510154784 <= 0) {
														return 0.0f;
													}
													else {
														if (x[2] <= 94.5) {
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
								else {
									if (-0.0744945854*x[2]-0.165632069*x[3]+1.07923472*x[5]-0.524591446 <= 0) {
										if (-0.0618248582*x[2]+0.951102376*x[3]-0.470628977*x[5]-2.2633543 <= 0) {
											if (1.00048268*x[2]-0.0587946996*x[3]-0.00107595068*x[5]-75.5021515 <= 0) {
												if (0.0319752991*x[2]-0.983864963*x[3]+0.885706007*x[5]+2.54900098 <= 0) {
													if (1.00009072*x[2]-0.00119067729*x[3]-3.99917221*x[5]-60.4983444 <= 0) {
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
												if (1.05425704*x[2]-0.0938769579*x[3]+6.86353874*x[5]-128.272919 <= 0) {
													if (0.0486425944*x[2]-0.73819077*x[3]+0.333537519*x[5]+1.04590642 <= 0) {
														return 0.0f;
													}
													else {
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

												}
												else {
													if (0.0278052688*x[2]-0.402533144*x[3]+0.0575105846*x[5]+0.810025752 <= 0) {
														if (0.0177012086*x[2]-0.442212045*x[3]+0.376742095*x[5]+0.677779198 <= 0) {
															if (0.0103580784*x[2]+0.998617172*x[3]-0.0328427814*x[5]-11.0 <= 0) {
																if (x[2] <= 98.5) {
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
														return 0.0f;
													}

												}

											}

										}
										else {
											if (-0.004454365*x[2]+1.0*x[3]-19.0 <= 0) {
												if (x[2] <= 55.5) {
													return -2.0f;
												}
												else {
													if (-0.050255388*x[2]+0.38870585*x[3]+0.0832469612*x[5]+1.2814765 <= 0) {
														return 0.0f;
													}
													else {
														if (0.0651082098*x[2]-0.769022167*x[3]+0.633671641*x[5]+0.151357546 <= 0) {
															if (x[2] <= 121.0) {
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

											}
											else {
												if (0.0249464512*x[2]-0.385870874*x[3]+0.793279707*x[5]-0.731853485 <= 0) {
													return -2.0f;
												}
												else {
													if (0.0263774395*x[2]-0.488027722*x[3]+0.803688467*x[5]-0.244704828 <= 0) {
														if (x[2] <= 204.0) {
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
										if (0.0161163211*x[2]-0.302077323*x[3]+0.339080155*x[5]-0.957541823 <= 0) {
											if (0.0666466206*x[2]-0.674239993*x[3]+0.329019308*x[5]-0.339578062 <= 0) {
												if (0.019841969*x[2]-0.544765115*x[3]+0.587299645*x[5]-0.774287999 <= 0) {
													return 0.0f;
												}
												else {
													if (x[2] <= 57.0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}
											else {
												if (x[2] <= 60.5) {
													return 0.0f;
												}
												else {
													if (0.0733595639*x[2]-0.948624372*x[3]+0.682761014*x[5]-0.845962405 <= 0) {
														return 0.0f;
													}
													else {
														return 0.0f;
													}

												}

											}

										}
										else {
											if (-0.104846552*x[2]+0.599345505*x[3]+0.0330153257*x[5]-0.531946719 <= 0) {
												if (x[2] <= 126.0) {
													if (0.0174102783*x[2]-0.442245841*x[3]+0.376847327*x[5]+0.677779198 <= 0) {
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
						if (-0.0524346605*x[2]+0.603603721*x[3]-0.467468768*x[5]+1.12468457 <= 0) {
							if (x[3] <= 19.0) {
								if (-0.0805524662*x[2]-5.75743034e-05*x[3]+1.000108*x[5]-9.0 <= 0) {
									if (0.0251543708*x[2]-0.535551846*x[3]+0.459794104*x[5]+0.00684568286 <= 0) {
										return 0.0f;
									}
									else {
										if (x[2] <= 22.5) {
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
						else {
							if (-0.0768303871*x[2]+0.124104731*x[3]+1.01026583*x[5]-11.0 <= 0) {
								if (x[2] <= 51.5) {
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
							else {
								if (-0.0583804026*x[2]+0.713006318*x[3]-0.426731348*x[5]-0.784486532 <= 0) {
									if (x[2] <= 26.5) {
										if (x[2] <= 17.0) {
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
									if (0.0172470231*x[2]+0.435783088*x[3]-0.527954638*x[5]+0.389730155 <= 0) {
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
				if (-0.0686704516*x[2]+0.748461246*x[3]-0.228641301*x[5]+0.266785383 <= 0) {
					if (-0.0775817037*x[2]+0.897714496*x[3]-0.114202783*x[5]+1.50492525 <= 0) {
						if (0.0208462346*x[2]-0.0654399469*x[3]-0.0764320642*x[5]-1.86685061 <= 0) {
							if (-0.0147374496*x[2]-0.204273164*x[3]+0.278023183*x[5]+2.80631542 <= 0) {
								if (0.0194121897*x[2]-0.125381604*x[3]+0.902344406*x[5]+8.23736954 <= 0) {
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
							if (0.0503684282*x[2]-0.737783253*x[3]+0.020839572*x[5]+0.497535676 <= 0) {
								return 0.0f;
							}
							else {
								if (0.0174541771*x[2]-0.1820876*x[3]+0.0179059207*x[5]-0.544854224 <= 0) {
									if (x[2] <= 103.0) {
										return 0.0f;
									}
									else {
										return 0.0f;
									}

								}
								else {
									if (1.0000701*x[2]-0.000740379095*x[3]+0.498554289*x[5]-79.5144577 <= 0) {
										if (-0.00218624156*x[2]+1.57378566*x[3]-0.186872527*x[5]-4.8687253 <= 0) {
											return 0.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (-0.0723524988*x[2]+0.954357922*x[3]+0.976974845*x[5]+8.77196217 <= 0) {
											return 0.0f;
										}
										else {
											if (x[2] <= 158.0) {
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
						if (-0.00443461165*x[2]+1.0*x[3]-17.0 <= 0) {
							if (x[2] <= 49.5) {
								return -2.0f;
							}
							else {
								if (0.0315914154*x[2]-0.564231753*x[3]-0.884697437*x[5]-7.86433649 <= 0) {
									if (0.046449393*x[2]-0.661417902*x[3]+0.147548556*x[5]+2.47221756 <= 0) {
										if (x[2] <= 231.0) {
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
									if (x[2] <= 114.0) {
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
				else {
					if (x[5] <= 13.0) {
						if (0.0627341121*x[2]-0.724876463*x[3]+0.125571787*x[5]+0.424792767 <= 0) {
							if (-0.107767724*x[2]-0.000454061548*x[3]+1.0*x[5]+1.0 <= 0) {
								if (0.0780019015*x[2]-0.943874717*x[3]+0.195173472*x[5]+1.66241837 <= 0) {
									if (-0.00262491452*x[2]-0.334288955*x[3]+0.252252638*x[5]+3.13581085 <= 0) {
										return -2.0f;
									}
									else {
										if (-0.0567510873*x[2]+0.565949678*x[3]-0.373157322*x[5]+0.18731755 <= 0) {
											if (0.110068403*x[2]-0.96880877*x[3]+0.513447702*x[5]-0.738641977 <= 0) {
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
									if (0.0312517658*x[2]-0.322548896*x[3]+0.0778693557*x[5]+0.0857569575 <= 0) {
										return -2.0f;
									}
									else {
										if (x[5] <= -1.0) {
											if (-0.00956219435*x[2]+0.0895455927*x[3]-0.544564366*x[5]-5.00673485 <= 0) {
												if (-0.034604758*x[2]+0.629291773*x[3]-0.514575303*x[5]-4.38904428 <= 0) {
													if (x[2] <= 132.5) {
														if (0.0537953004*x[2]-0.565004885*x[3]+0.160689846*x[5]+0.0540861487 <= 0) {
															return -2.0f;
														}
														else {
															if (x[2] <= 114.0) {
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

								}

							}
							else {
								if (0.0272363704*x[2]-0.32926631*x[3]+0.288266748*x[5]-0.261341274 <= 0) {
									if (0.0924318731*x[2]-0.27832368*x[3]-0.433873862*x[5]-0.335818499 <= 0) {
										if (-0.0684353709*x[2]+0.573824883*x[3]-0.278587162*x[5]-0.433873862 <= 0) {
											if (-0.0350006148*x[2]+0.515456378*x[3]-0.530380964*x[5]+0.429637283 <= 0) {
												if (x[2] <= 70.0) {
													if (x[2] <= 42.5) {
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
										else {
											return -2.0f;
										}

									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[2] <= 93.0) {
										if (-0.0125791142*x[2]+1.0*x[3]-15.0 <= 0) {
											if (0.136498928*x[2]-0.975949168*x[3]+0.552809358*x[5]-0.0888248011 <= 0) {
												if (0.0236937925*x[2]-0.214513451*x[3]+0.20879823*x[5]-0.53660357 <= 0) {
													if (0.0402837098*x[2]-0.853769064*x[3]+0.797093928*x[5]-0.492837489 <= 0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (x[2] <= 44.5) {
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
											return -2.0f;
										}

									}
									else {
										if (0.110643998*x[2]-0.96880877*x[3]+0.513447702*x[5]-0.738641977 <= 0) {
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
							if (0.97266078*x[2]-0.112078935*x[3]+1.63318694*x[5]-51.168129 <= 0) {
								if (-0.168504626*x[2]+0.0376466215*x[3]+1.0*x[5]+19.0 <= 0) {
									if (0.0316092819*x[2]-0.421941876*x[3]-0.357866049*x[5]-4.05601406 <= 0) {
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
								if (-0.0050125625*x[2]+1.0002954*x[3]-0.00493947417*x[5]-15.0493946 <= 0) {
									if (0.976503253*x[2]+0.131522208*x[3]+1.26726079*x[5]-72.7705841 <= 0) {
										if (-0.0318475738*x[2]+0.387390107*x[3]-0.0966546088*x[5]-0.289589942 <= 0) {
											if (0.995563447*x[2]-0.00092536211*x[3]+0.266983151*x[5]-64.8301697 <= 0) {
												if (-0.191565692*x[2]+3.21170759*x[3]-1.52257466*x[5]-9.63951397 <= 0) {
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
											if (x[2] <= 85.5) {
												return -2.0f;
											}
											else {
												return 0.0f;
											}

										}

									}
									else {
										if (-0.0702488273*x[2]+0.854001641*x[3]-0.0189990606*x[5]+0.253061563 <= 0) {
											return 0.0f;
										}
										else {
											if (0.0544902682*x[2]-0.671043992*x[3]+0.142314449*x[5]+1.02210569 <= 0) {
												if (0.0483802557*x[2]-0.577163756*x[3]+0.263701588*x[5]+1.74414659 <= 0) {
													if (-0.66091764*x[2]+18.4108047*x[3]+11.5828791*x[5]-51.1028366 <= 0) {
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
											else {
												if (1.0001266*x[2]-0.00151510537*x[3]+6.50000763*x[5]-69.499939 <= 0) {
													if (1.05593431*x[2]-1.17479682*x[3]+1.11722326*x[5]-90.5285339 <= 0) {
														return -2.0f;
													}
													else {
														return 0.0f;
													}

												}
												else {
													if (0.00660036504*x[2]-0.0724264905*x[3]+0.0294901654*x[5]+0.0992602259 <= 0) {
														if (x[2] <= 123.5) {
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
									if (-0.0693728179*x[2]+0.83153522*x[3]+0.0722433552*x[5]+1.67578864 <= 0) {
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
						if (-0.0370611325*x[2]+0.546476722*x[3]-0.488451928*x[5]+0.225672275 <= 0) {
							if (0.0597529933*x[2]-0.897049427*x[3]+0.649903178*x[5]+0.699708223 <= 0) {
								if (-0.0246951208*x[2]-0.000643634005*x[3]+1.0*x[5]-19.0 <= 0) {
									if (0.0677848682*x[2]-0.876465738*x[3]+0.721605778*x[5]-0.185167506 <= 0) {
										if (0.0303870887*x[2]-0.126968265*x[3]+0.0149344485*x[5]+0.692548215 <= 0) {
											return 0.0f;
										}
										else {
											if (x[2] <= 29.5) {
												return -2.0f;
											}
											else {
												if (-0.000806176569*x[2]+0.966896594*x[3]-0.0162549298*x[5]-18.9933453 <= 0) {
													return 0.0f;
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
									if (-0.171155214*x[2]+0.902019739*x[3]-0.502254367*x[5]-0.286411911 <= 0) {
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
							else {
								if (-0.0462474041*x[2]+1.81170797*x[3]-1.68869853*x[5]+3.05818868 <= 0) {
									if (0.0351309478*x[2]-0.000102669001*x[3]+1.0*x[5]-15.0 <= 0) {
										if (x[2] <= 17.0) {
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
									if (x[3] <= 15.0) {
										return 0.0f;
									}
									else {
										if (-0.0610307381*x[2]+0.91683048*x[3]-0.756647229*x[5]+0.963088691 <= 0) {
											if (x[2] <= 70.5) {
												if (0.0168079101*x[2]+1.0*x[5]-17.0 <= 0) {
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
							if (-0.0437467918*x[2]+0.629593134*x[3]-0.574272275*x[5]+0.458212525 <= 0) {
								if (-0.591511369*x[2]+0.710761547*x[3]+0.468299061*x[5]-0.802746952 <= 0) {
									if (0.0101617798*x[2]+1.0*x[5]-15.0 <= 0) {
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
								if (1.28021371*x[2]+0.135732248*x[3]-0.471072346*x[5]-0.838748038 <= 0) {
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

	}

}