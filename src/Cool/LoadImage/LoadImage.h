#pragma once

namespace Cool::LoadImage {

/// <summary>
/// Loads an image from a file using stb_image (https://github.com/nothings/stb/blob/master/stb_image.h).
/// </summary>
/// <param name="filepath">The path to the image : something like "icons/myImage.png".</param>
/// <param name="p_width">A pointer to a variable that will get filled with the width of the loaded image.</param>
/// <param name="p_height">A pointer to a variable that will get filled with the height of the loaded image.</param>
/// <param name="bFlipVertically">By default we use the OpenGL convention : the first row will be the bottom of the image. You can set bFlipVertically to false if you want the first row to be the top of the image.</param>
/// <returns>An array of unsigned char (wrapped in a unique_ptr) representing the image, with 4 channels per pixel (RGBA). The pixels are written sequentially, row after row.
/// Something like [255, 200, 100, 255, 120, 30, 80, 255, ...] where (255, 200, 100, 255) would be the pixel on 1st row and 1st column and (120, 30, 80, 255) the pixel on 1st row and 2nd column and so on.</returns>
std::unique_ptr<unsigned char> Load(std::string_view filepath, int* p_width, int* p_height, bool bFlipVertically = true);

} // namespace Cool::LoadImage