//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface FFNumericEntry : NSObject
{
    id <FFNumericEntrySource> _sourceModule;
    id <FFNumericEntryDelegate> _delegate;
    id _eventMonitor;
    int _type;
    long long _direction;
    NSMutableString *_numericEntryString;
    BOOL _showsSubframes;
    BOOL _modified;
}

@property(nonatomic) id <FFNumericEntryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)beginEntry:(int)arg1 direction:(long long)arg2 showsSubframes:(BOOL)arg3;
- (void)beginEntry:(int)arg1 initialTime:(CDStruct_1b6d18a9)arg2 direction:(long long)arg3 showsSubframes:(BOOL)arg4;
- (void)updateNumericEntryWithEvent:(id)arg1;
- (void)endNumericEntry:(BOOL)arg1;
- (id)timecodeFormatter;
@property long long numericEntryDirection;
@property(readonly) BOOL numericEntryModified;
@property BOOL showsSubframes;
@property long long numericEntryType;
- (void)setNumericEntryValue:(id)arg1;
- (void)numericEntryDidEnd;
- (void)numericEntryWillBegin;
- (void)dealloc;
- (id)initWithSourceModule:(id)arg1;

@end

