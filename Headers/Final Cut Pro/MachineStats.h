//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MachineStats : NSObject
{
    double _captureTime;
    BOOL _complete;
    NSString *_statsText;
    NSString *_appString;
}

- (void)_parseData;
- (void)_statsThreadProc:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)waitUntilComplete;
@property(retain, nonatomic) NSString *statsText; // @synthesize statsText=_statsText;

@end
