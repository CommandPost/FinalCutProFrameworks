//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MachineStats : NSObject
{
    double _captureTime;
    BOOL _complete;
    NSString *_statsText;
    NSString *_appString;
}

@property(retain, nonatomic) NSString *statsText; // @synthesize statsText=_statsText;
- (void)waitUntilComplete;
- (void)dealloc;
- (id)init;
- (void)_statsThreadProc:(id)arg1;
- (void)_parseData;

@end

