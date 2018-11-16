//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorFileInfoBaseTile.h>

#import "FFInspectorFileInfoReferencesTile.h"

@class LKTextField, NSString, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorFileInfoMissingInfoTile : FFInspectorFileInfoBaseTile <FFInspectorFileInfoReferencesTile>
{
    NSString *_report;
    long long _missingType;
    unsigned long long _missingCount;
    NSView *_rowView;
    LKTextField *_titleField;
    LKTextField *_reportField;
}

@property unsigned long long missingCount; // @synthesize missingCount=_missingCount;
@property long long missingType; // @synthesize missingType=_missingType;
@property(retain, nonatomic) NSString *report; // @synthesize report=_report;
- (id)view;
- (void)updateWithItems:(id)arg1 references:(id)arg2 owner:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

