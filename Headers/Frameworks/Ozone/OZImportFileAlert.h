//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Ozone/NSWindowDelegate-Protocol.h>

@class LKPanel, NSArray, NSString;

@interface OZImportFileAlert : NSObject <NSWindowDelegate>
{
    LKPanel *_pPanel;
    NSArray *_pFilenames;
}

- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;
- (int)numberOfRowsInTableView:(id)arg1;
- (void)okNotify:(id)arg1;
- (void)openWithFilenames:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

