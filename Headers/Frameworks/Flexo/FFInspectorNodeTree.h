//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTreeNode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorNodeTree : NSTreeNode
{
    NSString *_nodeIdentifier;
    NSString *_cellIdentifier;
    NSString *_accessoryViewIdentifier;
    unsigned long long _backgroundFillType;
    double _height;
    unsigned long long _accessoryViewSpacing;
    long long _trailingSpace;
}

@property(nonatomic) long long trailingSpace; // @synthesize trailingSpace=_trailingSpace;
@property(nonatomic) unsigned long long accessoryViewSpacing; // @synthesize accessoryViewSpacing=_accessoryViewSpacing;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) unsigned long long backgroundFillType; // @synthesize backgroundFillType=_backgroundFillType;
@property(copy, nonatomic) NSString *accessoryViewIdentifier; // @synthesize accessoryViewIdentifier=_accessoryViewIdentifier;
@property(copy, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(copy, nonatomic) NSString *nodeIdentifier; // @synthesize nodeIdentifier=_nodeIdentifier;
- (void)dealloc;

@end

