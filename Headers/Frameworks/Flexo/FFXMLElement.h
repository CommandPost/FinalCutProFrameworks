//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSXMLElement.h"

@class FFXMLRootElement, NSMutableArray;

@interface FFXMLElement : NSXMLElement
{
    FFXMLRootElement *_rootElement;
    NSMutableArray *_errorsArray;
}

+ (id)escapeInvalidCharacters:(id)arg1 forAttribute:(BOOL)arg2;
+ (Class)replacementClassForClass:(Class)arg1;
+ (id)elementWithName:(id)arg1 doubleValue:(double)arg2;
+ (id)elementWithName:(id)arg1 intValue:(int)arg2;
+ (id)elementWithName:(id)arg1 boolValue:(BOOL)arg2;
+ (id)elementWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithXmlValue:(id)arg1;
+ (id)elementWithName:(id)arg1 cDataValue:(id)arg2;
+ (id)elementWithName:(id)arg1;
+ (id)nilElementWithName:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isLeaf;
- (id)rootNode;
- (id)rootElement;
- (void)setRootNode:(id)arg1;
- (void)addChild:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)attributeValueForName:(id)arg1;
- (void)addAttributeWithName:(id)arg1 stringValue:(id)arg2;
- (void)replaceAttributeWithName:(id)arg1 stringValue:(id)arg2;
- (id)initWithKind:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)initWithName:(id)arg1;
- (id)dataValue;
- (double)doubleValue;
- (BOOL)boolValueWithDefaultValue:(BOOL)arg1;
- (void)addError:(id)arg1;
- (id)parent;
- (id)firstAncestorNamed:(id)arg1 orNamed:(id)arg2;
- (id)firstNodeForName:(id)arg1;
- (id)stringValueForName:(id)arg1;
- (BOOL)boolValueForName:(id)arg1 defaultValue:(BOOL)arg2;
- (long long)integerValueForName:(id)arg1 defaultValue:(long long)arg2;
- (double)doubleValueForName:(id)arg1 defaultValue:(double)arg2;
- (void)replaceFirstNodeForName:(id)arg1 withElement:(id)arg2;
- (id)firstNodeForXPath:(id)arg1;
- (id)nodesForXPath:(id)arg1;
- (id)nodesForXPath:(id)arg1 error:(id *)arg2;
- (id)stringValueForXPath:(id)arg1;
- (BOOL)boolValueForXPath:(id)arg1 defaultValue:(BOOL)arg2;
- (long long)integerValueForXPath:(id)arg1 defaultValue:(long long)arg2;
- (double)doubleValueForXPath:(id)arg1 defaultValue:(double)arg2;
- (void)replaceFirstNodeForXPath:(id)arg1 withElement:(id)arg2;
- (id)elementsForName:(id)arg1;
- (void)detach;
- (BOOL)isEqualToElement:(id)arg1;
- (id)xmlIDRef;
- (id)xmlID;
- (id)xmlIDOrIDRef;
- (void)setStringValue:(id)arg1;
- (BOOL)isNil;
- (void)setNil:(BOOL)arg1;
- (BOOL)containsValueForKey:(id)arg1;

@end
