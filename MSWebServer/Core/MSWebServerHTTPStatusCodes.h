/*
 Copyright (c) 2012-2019, Pierre-Olivier Latour
 All rights reserved.
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright
 notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
 notice, this list of conditions and the following disclaimer in the
 documentation and/or other materials provided with the distribution.
 * The name of Pierre-Olivier Latour may not be used to endorse
 or promote products derived from this software without specific
 prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL PIERRE-OLIVIER LATOUR BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// http://www.w3.org/Protocols/rfc2616/rfc2616-sec10.html
// http://www.iana.org/assignments/http-status-codes/http-status-codes.xhtml

#import <Foundation/Foundation.h>

/**
 *  Convenience constants for "informational" HTTP status codes.
 */
typedef NS_ENUM(NSInteger, MSWebServerInformationalHTTPStatusCode) {
  kMSWebServerHTTPStatusCode_Continue = 100,
  kMSWebServerHTTPStatusCode_SwitchingProtocols = 101,
  kMSWebServerHTTPStatusCode_Processing = 102
};

/**
 *  Convenience constants for "successful" HTTP status codes.
 */
typedef NS_ENUM(NSInteger, MSWebServerSuccessfulHTTPStatusCode) {
  kMSWebServerHTTPStatusCode_OK = 200,
  kMSWebServerHTTPStatusCode_Created = 201,
  kMSWebServerHTTPStatusCode_Accepted = 202,
  kMSWebServerHTTPStatusCode_NonAuthoritativeInformation = 203,
  kMSWebServerHTTPStatusCode_NoContent = 204,
  kMSWebServerHTTPStatusCode_ResetContent = 205,
  kMSWebServerHTTPStatusCode_PartialContent = 206,
  kMSWebServerHTTPStatusCode_MultiStatus = 207,
  kMSWebServerHTTPStatusCode_AlreadyReported = 208
};

/**
 *  Convenience constants for "redirection" HTTP status codes.
 */
typedef NS_ENUM(NSInteger, MSWebServerRedirectionHTTPStatusCode) {
  kMSWebServerHTTPStatusCode_MultipleChoices = 300,
  kMSWebServerHTTPStatusCode_MovedPermanently = 301,
  kMSWebServerHTTPStatusCode_Found = 302,
  kMSWebServerHTTPStatusCode_SeeOther = 303,
  kMSWebServerHTTPStatusCode_NotModified = 304,
  kMSWebServerHTTPStatusCode_UseProxy = 305,
  kMSWebServerHTTPStatusCode_TemporaryRedirect = 307,
  kMSWebServerHTTPStatusCode_PermanentRedirect = 308
};

/**
 *  Convenience constants for "client error" HTTP status codes.
 */
typedef NS_ENUM(NSInteger, MSWebServerClientErrorHTTPStatusCode) {
  kMSWebServerHTTPStatusCode_BadRequest = 400,
  kMSWebServerHTTPStatusCode_Unauthorized = 401,
  kMSWebServerHTTPStatusCode_PaymentRequired = 402,
  kMSWebServerHTTPStatusCode_Forbidden = 403,
  kMSWebServerHTTPStatusCode_NotFound = 404,
  kMSWebServerHTTPStatusCode_MethodNotAllowed = 405,
  kMSWebServerHTTPStatusCode_NotAcceptable = 406,
  kMSWebServerHTTPStatusCode_ProxyAuthenticationRequired = 407,
  kMSWebServerHTTPStatusCode_RequestTimeout = 408,
  kMSWebServerHTTPStatusCode_Conflict = 409,
  kMSWebServerHTTPStatusCode_Gone = 410,
  kMSWebServerHTTPStatusCode_LengthRequired = 411,
  kMSWebServerHTTPStatusCode_PreconditionFailed = 412,
  kMSWebServerHTTPStatusCode_RequestEntityTooLarge = 413,
  kMSWebServerHTTPStatusCode_RequestURITooLong = 414,
  kMSWebServerHTTPStatusCode_UnsupportedMediaType = 415,
  kMSWebServerHTTPStatusCode_RequestedRangeNotSatisfiable = 416,
  kMSWebServerHTTPStatusCode_ExpectationFailed = 417,
  kMSWebServerHTTPStatusCode_UnprocessableEntity = 422,
  kMSWebServerHTTPStatusCode_Locked = 423,
  kMSWebServerHTTPStatusCode_FailedDependency = 424,
  kMSWebServerHTTPStatusCode_UpgradeRequired = 426,
  kMSWebServerHTTPStatusCode_PreconditionRequired = 428,
  kMSWebServerHTTPStatusCode_TooManyRequests = 429,
  kMSWebServerHTTPStatusCode_RequestHeaderFieldsTooLarge = 431
};

/**
 *  Convenience constants for "server error" HTTP status codes.
 */
typedef NS_ENUM(NSInteger, MSWebServerServerErrorHTTPStatusCode) {
  kMSWebServerHTTPStatusCode_InternalServerError = 500,
  kMSWebServerHTTPStatusCode_NotImplemented = 501,
  kMSWebServerHTTPStatusCode_BadGateway = 502,
  kMSWebServerHTTPStatusCode_ServiceUnavailable = 503,
  kMSWebServerHTTPStatusCode_GatewayTimeout = 504,
  kMSWebServerHTTPStatusCode_HTTPVersionNotSupported = 505,
  kMSWebServerHTTPStatusCode_InsufficientStorage = 507,
  kMSWebServerHTTPStatusCode_LoopDetected = 508,
  kMSWebServerHTTPStatusCode_NotExtended = 510,
  kMSWebServerHTTPStatusCode_NetworkAuthenticationRequired = 511
};
