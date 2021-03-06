//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSPasteboardReading-Protocol.h>
#import <Flexo/NSPasteboardWriting-Protocol.h>
#import <Flexo/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _FFInspectorPasteboardItem : NSObject <NSSecureCoding, NSPasteboardWriting, NSPasteboardReading>
{
    NSString *_identifier;
}

+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

