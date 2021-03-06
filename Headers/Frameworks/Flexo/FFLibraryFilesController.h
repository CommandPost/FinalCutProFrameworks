//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFLibrary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FFLibraryFilesController : NSObject
{
    FFLibrary *_library;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)filesControllerForLibrary:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) FFLibrary *library; // @synthesize library=_library;
- (void)calcLibraryBundleSize:(CDUnknownBlockType)arg1;
- (void)calcCacheSizesByVolume:(CDUnknownBlockType)arg1;
- (void)calcMediaAndTemplateSizesByVolume:(CDUnknownBlockType)arg1;
- (void)visitEvents:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;

@end

