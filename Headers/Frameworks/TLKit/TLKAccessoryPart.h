//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TLKit/TLKPartInfo-Protocol.h>

@class NSMenu, NSString;

@interface TLKAccessoryPart : NSObject <TLKPartInfo>
{
    int _partCode;
    id _representedObject;
    NSMenu *_contextMenu;
}

+ (id)partWithPartCode:(int)arg1 representedObject:(id)arg2;
@property(retain) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property int partCode; // @synthesize partCode=_partCode;
- (id)partIdentifier;
- (id)subpartAtPoint:(struct CGPoint)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAccessoryPart:(id)arg1;
- (void)dealloc;
- (id)initWithPartCode:(int)arg1 representedObject:(id)arg2;

// Remaining properties
@property(readonly) Class superclass;

@end

