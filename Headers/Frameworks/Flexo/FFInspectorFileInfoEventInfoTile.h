//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFInspectorFileInfoBaseTile.h>

#import <Flexo/FFInspectorFileInfoReferencesTile-Protocol.h>

@class FFProject, LKImageView, LKTextField, NSString, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorFileInfoEventInfoTile : FFInspectorFileInfoBaseTile <FFInspectorFileInfoReferencesTile>
{
    FFProject *_project;
    NSString *_report;
    NSView *_rowView;
    LKImageView *_imageView;
    LKTextField *_nameField;
}

@property(retain, nonatomic) NSString *report; // @synthesize report=_report;
@property(retain, nonatomic) FFProject *project; // @synthesize project=_project;
- (id)view;
- (void)updateWithItems:(id)arg1 references:(id)arg2 owner:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

