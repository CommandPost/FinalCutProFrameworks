//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class FFImportGoToFolderSheetController, NSURL;

__attribute__((visibility("hidden")))
@interface FFGoToOperation : NSOperation
{
    NSURL *_url;
    FFImportGoToFolderSheetController *_controller;
}

- (void)main;
- (void)dealloc;
- (id)initWithURL:(id)arg1 controller:(id)arg2;

@end

