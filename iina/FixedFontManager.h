#import <Cocoa/Cocoa.h>

@interface FixedFontManager : NSFontManager
NS_ASSUME_NONNULL_BEGIN

+ (nullable NSArray<NSArray*> *)typefacesForFontFamily:(NSString *)family;


NS_ASSUME_NONNULL_END
@end
