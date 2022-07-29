/*
 * scrc_http.h
 *
 *  Created on: 12-May-2022
 *      Author: Ayu Parmar
 */

#ifndef INCLUDE_SCRC_HTTP_H_
#define INCLUDE_SCRC_HTTP_H_

void connect_setup_http();
bool connect_http();
void disconnect_http();

int post_request(String req);

#endif /* INCLUDE_SCRC_HTTP_H_ */
