//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFShareDestination.h>

@interface FFShareYouTubeDestination : FFShareDestination
{
}

+ (BOOL)supportsSecureCoding;
+ (id)setting;
+ (id)defaultName;
+ (id)requiredMetatdataKeys;
- (id)currentUser;
- (BOOL)requiresLogin;
- (id)iconTitle;
- (id)lightImage;
- (id)smallImage;
- (id)largeImage;
- (id)pressedImage;
- (id)image;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)taskIdentifier;
- (unsigned long long)srtStyleSupport;
- (BOOL)supportsBatchExport;

@end

