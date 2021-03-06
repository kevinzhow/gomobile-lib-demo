// Objective-C API for talking to Hello/src/hello Go package.
//   gobind -lang=objc Hello/src/hello
//
// File is generated by gobind. Do not edit.

#ifndef __Hello_H__
#define __Hello_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@class HelloAPOD;
@class HelloNasaClient;

@interface HelloAPOD : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull date;
@property (nonatomic) NSString* _Nonnull explanation;
@property (nonatomic) NSString* _Nonnull hDurl;
@property (nonatomic) NSString* _Nonnull mediaType;
@property (nonatomic) NSString* _Nonnull serviceVersion;
@property (nonatomic) NSString* _Nonnull title;
@property (nonatomic) NSString* _Nonnull url;
@end

@interface HelloNasaClient : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull apiKey;
- (HelloAPOD* _Nullable)getAPOD:(NSError* _Nullable* _Nullable)error;
@end

FOUNDATION_EXPORT NSString* _Nonnull HelloGreetings(NSString* _Nullable name);

#endif
