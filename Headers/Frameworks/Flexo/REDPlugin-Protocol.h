//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol REDPlugin
+ (void)setHostFeatureSupport:(NSDictionary *)arg1;
+ (Class)gpuImageProcessingClass;
+ (Class)asyncDecodingClass;
+ (Class)rocketDecodingClass;
+ (Class)imageProcessingClass;
+ (Class)clipReadingClass;
+ (NSString *)uuid;
+ (NSString *)description;
+ (unsigned int)minorVersion;
+ (unsigned int)majorVersion;
@end

