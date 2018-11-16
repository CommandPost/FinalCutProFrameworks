//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString, NSXMLParser;

@interface TBXMLHelper : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *_parser;
    NSMutableDictionary *_settings;
    BOOL _interested;
    BOOL _successfullyEndedParsing;
    NSString *_key;
    int _depth;
}

@property(readonly, nonatomic) NSDictionary *sceneSettings; // @synthesize sceneSettings=_settings;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (BOOL)parse;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

