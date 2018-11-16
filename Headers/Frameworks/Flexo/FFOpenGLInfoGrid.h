//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSColor, NSDictionary;

__attribute__((visibility("hidden")))
@interface FFOpenGLInfoGrid : NSObject
{
    NSColor *_backgroundColor;
    NSArray *_columnNames;
    NSArray *_columnHeaderColors;
    NSArray *_columnColors;
    NSArray *_columnWidths;
    NSDictionary *_textAttributes;
    NSDictionary *_headerTextAttributes;
    int _maxRows;
    int _rowGap;
    int _columnGap;
    int _maxRowIndicatorColumn;
    struct CGSize _charSize;
}

@property(retain, nonatomic) NSDictionary *headerTextAttributes; // @synthesize headerTextAttributes=_headerTextAttributes;
@property(retain, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(nonatomic) int columnGap; // @synthesize columnGap=_columnGap;
@property(nonatomic) int rowGap; // @synthesize rowGap=_rowGap;
@property(nonatomic) int maxRows; // @synthesize maxRows=_maxRows;
@property(retain, nonatomic) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property(retain, nonatomic) NSArray *columnColors; // @synthesize columnColors=_columnColors;
@property(retain, nonatomic) NSArray *columnHeaderColors; // @synthesize columnHeaderColors=_columnHeaderColors;
@property(retain, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id).cxx_construct;
- (void)createImage:(struct _CGLContextObject *)arg1 drawProperties:(id)arg2 rowData:(id)arg3 image:(id *)arg4;
- (void)dealloc;
- (id)initWithColumnNames:(id)arg1 columnHeaderColors:(id)arg2 columnColors:(id)arg3 columnWidths:(id)arg4 backgroundColor:(id)arg5 maxRows:(int)arg6 rowGap:(int)arg7 columnGap:(int)arg8 textAttributes:(id)arg9 headerTextAttributes:(id)arg10 maxRowIndicatorColumn:(int)arg11;

@end

