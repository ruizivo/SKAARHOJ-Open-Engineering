#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 32	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 1560 814\" width=\"90%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"1184\" height=\"780\" x=40 y=17 style=\"fill:url(#grad1);\" /><rect width=\"1184\" height=\"10\" x=40 y=85 style=\"fill:rgb(0,0,100);\" /><rect width=\"1184\" height=\"10\" x=40 y=729 style=\"fill:rgb(0,0,100);\" /><rect width=\"90\" height=\"814\" x=0 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /><rect width=\"90\" height=\"814\" x=1174 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16840, GZIP size: 5495 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0x6D, 0x73, 0x9B, 0x48, 0x93, 0xDF, 0x9F, 0x5F, 
	0xC1, 0x92, 0x5A, 0x5B, 0x9C, 0x90, 0x0C, 0x08, 0x24, 0x2C, 
	0x2C, 0xE7, 0x6C, 0x27, 0x59, 0xBB, 0x36, 0xCE, 0xBA, 0x56, 
	0xD9, 0x64, 0xEF, 0x54, 0xAA, 0x14, 0x86, 0x91, 0x45, 0x82, 
	0x41, 0x07, 0xC8, 0x8E, 0xCF, 0xF1, 0x7F, 0xBF, 0xEE, 0x9E, 
	0x01, 0x0D, 0x48, 0x72, 0x94, 0xEC, 0x73, 0x49, 0x45, 0xC3, 
	0x4C, 0xCF, 0xF4, 0xFB, 0xF4, 0xF4, 0x34, 0xE4, 0xCE, 0xCF, 
	0x94, 0xF3, 0x8F, 0xC1, 0x68, 0x32, 0x71, 0x75, 0xBB, 0x67, 
	0xE8, 0xA6, 0x61, 0xE8, 0xEA, 0x1F, 0xCB, 0xC2, 0x54, 0x5A, 
	0x0B, 0xAB, 0xA7, 0xA9, 0xBA, 0x6D, 0x4C, 0xF5, 0x12, 0x66, 
	0x73, 0x98, 0x85, 0x30, 0xAB, 0x01, 0x73, 0x39, 0xAC, 0x87, 
	0x30, 0xB3, 0x0E, 0xB3, 0x2C, 0x0E, 0xB3, 0x11, 0x66, 0x34, 
	0x60, 0x7D, 0x0E, 0x73, 0x00, 0x66, 0x1E, 0xD6, 0x61, 0x3D, 
	0xC1, 0x4B, 0x1F, 0x61, 0x6E, 0x03, 0x26, 0x78, 0x19, 0x20, 
	0x6C, 0xD0, 0x80, 0x09, 0x5E, 0x5C, 0x84, 0xF5, 0x4B, 0x98, 
	0x49, 0x30, 0xDB, 0x01, 0xD8, 0x45, 0x82, 0xE2, 0x99, 0x46, 
	0x03, 0x74, 0x48, 0x20, 0x94, 0xEE, 0xB0, 0x0E, 0x71, 0x7A, 
	0x04, 0x41, 0xD9, 0xDC, 0x06, 0x64, 0x40, 0x10, 0x94, 0x6C, 
	0x50, 0x87, 0xF4, 0x4D, 0x82, 0xA0, 0x5C, 0x0D, 0x16, 0xFA, 
	0x9C, 0x05, 0x94, 0xCA, 0x69, 0x40, 0x38, 0x07, 0x28, 0x93, 
	0x5D, 0x87, 0x0C, 0x38, 0x07, 0x28, 0x91, 0x64, 0x14, 0x57, 
	0x32, 0xD8, 0x61, 0xC3, 0x60, 0xAE, 0x64, 0x30, 0xD3, 0x68, 
	0x58, 0xCC, 0x95, 0x2C, 0x66, 0x9A, 0x0D, 0x93, 0xB9, 0x92, 
	0xC9, 0x4C, 0xAB, 0x61, 0x33, 0x57, 0xB2, 0x99, 0xD9, 0x6B, 
	0x18, 0xCD, 0x95, 0x8C, 0x66, 0xDA, 0x0D, 0xAB, 0xB9, 0x92, 
	0xD5, 0x4C, 0xA7, 0x61, 0x36, 0x57, 0x32, 0x9B, 0xD9, 0x6F, 
	0xD8, 0xCD, 0x5D, 0xD9, 0xED, 0xB0, 0x61, 0x37, 0x77, 0x65, 
	0x37, 0x12, 0xF2, 0xB0, 0x0E, 0x12, 0x86, 0x23, 0x11, 0xDD, 
	0x06, 0x88, 0x5B, 0x8E, 0x04, 0x1C, 0xD4, 0x41, 0xC2, 0x74, 
	0x24, 0x5E, 0x83, 0x0D, 0x61, 0x3B, 0x12, 0xCE, 0x69, 0x80, 
	0x04, 0x1B, 0x4E, 0xDD, 0x7A, 0xEE, 0xCA, 0x7A, 0x24, 0x98, 
	0x30, 0xD1, 0xD4, 0xFB, 0xD7, 0x1D, 0x6C, 0xBD, 0x90, 0xDD, 
	0xBD, 0xCD, 0x0B, 0xD8, 0x7D, 0xA6, 0xAE, 0x9E, 0xBC, 0x7F, 
	0x7D, 0xA9, 0xEA, 0x26, 0xAE, 0x72, 0x74, 0x75, 0xFC, 0x90, 
	0x17, 0xEC, 0x56, 0x95, 0x26, 0xBE, 0x59, 0x26, 0xB8, 0x4F, 
	0x27, 0x26, 0xCC, 0xBD, 0xCA, 0xD2, 0x9B, 0xCC, 0xBF, 0x55, 
	0xC6, 0x59, 0xA0, 0xEA, 0x1D, 0x53, 0xEF, 0x58, 0xFA, 0x44, 
	0x55, 0x75, 0xF5, 0x3C, 0x8D, 0x43, 0xE5, 0x55, 0x7A, 0x9F, 
	0xC0, 0xF3, 0xFB, 0xF4, 0xE6, 0x26, 0x66, 0xF0, 0x70, 0xF6, 
	0x10, 0x40, 0x3B, 0x45, 0xC4, 0xB4, 0x94, 0xDD, 0x45, 0xEC, 
	0x7E, 0x6D, 0x69, 0x73, 0xD6, 0xDD, 0xC1, 0x55, 0x76, 0xF3, 
	0x9D, 0x59, 0x27, 0x7F, 0xFD, 0xAD, 0x80, 0xC5, 0x16, 0xCB, 
	0x42, 0x4C, 0xEC, 0x3D, 0xCF, 0x09, 0x0D, 0xFE, 0x96, 0xA5, 
	0xCB, 0x85, 0x72, 0x52, 0xEF, 0x9E, 0xAE, 0xE1, 0xFE, 0x6B, 
	0x91, 0x17, 0x19, 0x03, 0x19, 0x7F, 0x67, 0x0F, 0x2C, 0xE3, 
	0x4C, 0xD8, 0x7A, 0xC7, 0xD9, 0x08, 0x56, 0xDE, 0x44, 0x71, 
	0x5C, 0xCD, 0xB1, 0x36, 0xCF, 0x81, 0xDF, 0xB5, 0x29, 0xC8, 
	0x61, 0x83, 0x4E, 0x7F, 0x45, 0xA4, 0x09, 0x2D, 0xC9, 0xF4, 
	0xB7, 0x23, 0x10, 0x54, 0xA4, 0x19, 0x97, 0x57, 0xCA, 0xB8, 
	0xE0, 0xEB, 0x06, 0xE8, 0x11, 0x3D, 0x04, 0xEC, 0x62, 0x2C, 
	0xCB, 0xD5, 0xD5, 0x56, 0xB9, 0x5A, 0x21, 0x80, 0xB6, 0x42, 
	0x02, 0x2E, 0x52, 0xF8, 0x59, 0xA1, 0x4E, 0xCB, 0xEE, 0xEB, 
	0x24, 0xC4, 0x0E, 0xEC, 0x6C, 0xDC, 0xBC, 0x27, 0xCB, 0x22, 
	0x55, 0x2E, 0x92, 0x82, 0x65, 0x77, 0x7E, 0xAC, 0x0A, 0x8A, 
	0x7F, 0xFA, 0x49, 0x98, 0xDE, 0x52, 0xAF, 0x22, 0xF8, 0x07, 
	0x92, 0xFF, 0x63, 0x36, 0xAB, 0x31, 0x54, 0xA3, 0x7F, 0x16, 
	0x47, 0x0B, 0x4E, 0xD8, 0xAA, 0x0D, 0xA7, 0x49, 0x91, 0xA5, 
	0x31, 0x87, 0x74, 0x5C, 0x21, 0xED, 0xD9, 0xB2, 0x40, 0x25, 
	0x97, 0x0E, 0x02, 0x5C, 0x48, 0xDD, 0x37, 0xEF, 0x4F, 0xA5, 
	0xDE, 0xFB, 0xCC, 0x4F, 0xF2, 0xA8, 0x88, 0xD2, 0x04, 0x44, 
	0x7C, 0x40, 0x66, 0xD0, 0x38, 0x87, 0x44, 0xA3, 0x06, 0xBD, 
	0x4A, 0x73, 0x69, 0xD9, 0x55, 0xEC, 0x3F, 0x28, 0x97, 0x7E, 
	0x90, 0x01, 0x66, 0x10, 0xDD, 0xC4, 0x7D, 0x46, 0x83, 0x2A, 
	0xAA, 0x24, 0x5D, 0xAC, 0x39, 0x9C, 0x50, 0xB1, 0xD0, 0x2C, 
	0xD7, 0xC4, 0xDB, 0x14, 0x26, 0xAE, 0xA4, 0xFC, 0x93, 0x05, 
	0x69, 0x16, 0x72, 0xAC, 0x1A, 0xA1, 0xB5, 0x8C, 0x15, 0x74, 
	0x9C, 0x2E, 0xB3, 0x80, 0x55, 0x16, 0x98, 0xA8, 0x97, 0x07, 
	0xAF, 0x15, 0x13, 0xB0, 0x60, 0x6B, 0xA9, 0x7C, 0x1F, 0x98, 
	0xA2, 0x2D, 0xFB, 0x3D, 0xD1, 0xDA, 0xA2, 0x75, 0x44, 0xDB, 
	0x47, 0x16, 0x3A, 0xB2, 0xF9, 0x3A, 0x3F, 0x6C, 0x3C, 0xE8, 
	0x7D, 0xF0, 0xB3, 0x07, 0xA5, 0x88, 0x6E, 0xA3, 0xE4, 0x46, 
	0xB1, 0x8C, 0x5F, 0x1B, 0x23, 0x0E, 0x8C, 0xEC, 0x68, 0x65, 
	0xB2, 0x52, 0x18, 0x91, 0x99, 0x0C, 0xF8, 0x67, 0xEE, 0xE4, 
	0x9C, 0x03, 0xB1, 0x4A, 0xF9, 0x90, 0xC6, 0xCB, 0x5B, 0x32, 
	0x9D, 0x21, 0x0F, 0x9F, 0xFA, 0xB1, 0x9F, 0x04, 0xD5, 0xB8, 
	0x65, 0x97, 0x80, 0xB7, 0xEC, 0x8E, 0xC5, 0xB9, 0x34, 0x5F, 
	0xB2, 0xF3, 0x9F, 0x7E, 0xC1, 0x9D, 0x60, 0x22, 0x28, 0x81, 
	0x86, 0xA3, 0xAF, 0xF0, 0xFB, 0x2A, 0x42, 0xAB, 0x7E, 0x8C, 
	0x16, 0x38, 0xF4, 0xEA, 0xC3, 0x6B, 0x95, 0xBB, 0x12, 0xB9, 
	0xBE, 0xE5, 0x40, 0xB4, 0x7C, 0x03, 0xC1, 0x90, 0xE5, 0x92, 
	0x41, 0x35, 0x8E, 0x67, 0x1B, 0xB8, 0x11, 0x19, 0xAE, 0x7C, 
	0x98, 0x80, 0x4B, 0x20, 0x32, 0x98, 0x2B, 0x27, 0x5F, 0xDB, 
	0xDB, 0xD5, 0xBC, 0xBE, 0x98, 0xD7, 0x03, 0xDC, 0x69, 0xB0, 
	0x24, 0x79, 0x7A, 0x5C, 0x9E, 0x8B, 0x2C, 0xAA, 0xBA, 0x00, 
	0x1E, 0xB3, 0x24, 0x4F, 0x33, 0xE5, 0x37, 0x3F, 0x4A, 0x68, 
	0x54, 0x92, 0xCD, 0x08, 0xAF, 0xE1, 0xB7, 0x4F, 0xBF, 0xA6, 
	0xC5, 0x1B, 0x17, 0x9A, 0xA9, 0x58, 0x39, 0x5F, 0x16, 0x05, 
	0x8F, 0x7C, 0xF2, 0x2A, 0xF3, 0xC0, 0x31, 0xA8, 0xE9, 0xF3, 
	0x66, 0xE0, 0x50, 0x73, 0xC8, 0x7B, 0x90, 0x0E, 0xF0, 0xD6, 
	0x12, 0xAD, 0x98, 0x0C, 0xA7, 0x3D, 0xB5, 0x96, 0xE8, 0xF7, 
	0xC4, 0x6A, 0x47, 0xCC, 0x1F, 0x58, 0x4E, 0xB9, 0x5E, 0x2C, 
	0xB0, 0xC5, 0x4C, 0x0B, 0x47, 0x04, 0x4B, 0x1F, 0xE7, 0x51, 
	0xC1, 0x64, 0xDB, 0xCA, 0x8C, 0x01, 0x6A, 0xE3, 0x77, 0x6C, 
	0x5D, 0xDE, 0x42, 0x26, 0xC0, 0x5B, 0x4B, 0xB4, 0xB6, 0x68, 
	0xFB, 0xBC, 0xB5, 0x05, 0xDC, 0x16, 0xEB, 0x6C, 0xB1, 0xCE, 
	0x11, 0xE3, 0x8E, 0x58, 0xE7, 0x88, 0x75, 0x8E, 0x58, 0xD7, 
	0x17, 0xF0, 0xBE, 0x58, 0x37, 0x10, 0xFD, 0x81, 0xE8, 0xBB, 
	0xD4, 0x17, 0x4E, 0xFA, 0x36, 0x9A, 0x51, 0x3C, 0xB2, 0x57, 
	0x06, 0xFA, 0xCD, 0xBF, 0xBD, 0xF5, 0xD7, 0xC6, 0xB8, 0x79, 
	0xA4, 0xA1, 0xF3, 0x25, 0x93, 0xAC, 0x4A, 0xC1, 0xCE, 0xCF, 
	0x0B, 0x69, 0x68, 0xEC, 0x17, 0xCB, 0xCC, 0x47, 0xC7, 0x2D, 
	0x35, 0xF1, 0x2E, 0xCD, 0x6E, 0x61, 0xBF, 0x82, 0x8B, 0xB2, 
	0x9C, 0x03, 0x59, 0x28, 0x39, 0xDD, 0xA9, 0x9F, 0xE5, 0x14, 
	0x3E, 0xBE, 0xBF, 0x2B, 0x0F, 0x61, 0x3B, 0x47, 0x21, 0x4B, 
	0x95, 0xF7, 0x7E, 0x1C, 0xE3, 0x79, 0x82, 0xA7, 0xAA, 0x38, 
	0xF4, 0xD5, 0xEA, 0x0C, 0x57, 0x79, 0x22, 0x70, 0x80, 0xDD, 
	0x72, 0x19, 0xDF, 0x65, 0xE5, 0x32, 0xDA, 0x64, 0x9C, 0xFA, 
	0xD9, 0x3C, 0x4B, 0x6F, 0x7D, 0x74, 0x64, 0x65, 0xCC, 0x8A, 
	0x02, 0xA2, 0x04, 0x67, 0x06, 0x23, 0x0B, 0x0B, 0x7C, 0x3C, 
	0x9F, 0x40, 0xA4, 0x3B, 0x8C, 0x90, 0xB0, 0x0D, 0x60, 0xE7, 
	0xF4, 0x75, 0xF5, 0xD4, 0x4F, 0xBE, 0x48, 0x02, 0x9C, 0x9D, 
	0xFD, 0xF5, 0xFD, 0xB5, 0xA8, 0x89, 0x4D, 0x8B, 0xAF, 0x2E, 
	0xAE, 0x68, 0x53, 0x3A, 0xDC, 0x95, 0x68, 0x17, 0xF3, 0xC3, 
	0x18, 0x24, 0x4B, 0x79, 0x04, 0x40, 0x34, 0x80, 0x0E, 0xF0, 
	0x97, 0x61, 0x0E, 0xFC, 0xF1, 0xD7, 0x0E, 0x38, 0xC2, 0xAF, 
	0xCA, 0x7F, 0xA7, 0x18, 0xFC, 0x10, 0x1F, 0xD9, 0x03, 0x9D, 
	0x0E, 0x8E, 0x0D, 0x8A, 0x18, 0x10, 0x36, 0x41, 0xF2, 0x4B, 
	0xFF, 0xAB, 0x18, 0x28, 0xE3, 0x1A, 0xF0, 0x5A, 0x9F, 0x22, 
	0xC0, 0x5B, 0x23, 0x9C, 0x70, 0x73, 0x81, 0x7C, 0x0E, 0xBE, 
	0xC3, 0xE3, 0x95, 0xCA, 0x23, 0x33, 0xA7, 0x11, 0xD3, 0x48, 
	0x8D, 0xC6, 0x86, 0x99, 0xBC, 0xF7, 0x3C, 0xA9, 0x72, 0xFD, 
	0x25, 0xBB, 0x4D, 0xB3, 0x07, 0x54, 0x28, 0x66, 0x45, 0x94, 
	0x0A, 0xA1, 0x13, 0xC1, 0x6A, 0x8C, 0x5E, 0x5B, 0x31, 0x70, 
	0xC8, 0x15, 0xCB, 0xF2, 0x08, 0x1C, 0x53, 0x38, 0x3C, 0xE7, 
	0x7D, 0x3B, 0x46, 0x60, 0x4F, 0x84, 0x44, 0x7E, 0x96, 0x88, 
	0xEE, 0xFB, 0x74, 0x47, 0xD8, 0x09, 0x3F, 0xA8, 0x9A, 0x94, 
	0xE9, 0x74, 0x8F, 0xFD, 0x1B, 0x92, 0xBF, 0xDF, 0x13, 0x9D, 
	0x1D, 0x8E, 0x20, 0x61, 0xE6, 0xDB, 0x9C, 0x8C, 0x2D, 0x1A, 
	0xDE, 0x3A, 0xA2, 0x35, 0xF1, 0xC7, 0xCA, 0x39, 0x13, 0x84, 
	0x9B, 0xB1, 0xF0, 0xDA, 0x0F, 0xBE, 0x28, 0x9C, 0x08, 0x8D, 
	0xAB, 0x1F, 0xFD, 0xA8, 0x50, 0x30, 0x80, 0xE5, 0x4A, 0x0E, 
	0xA7, 0x39, 0xB0, 0x89, 0x67, 0x38, 0x81, 0xCE, 0x96, 0x79, 
	0x91, 0xDE, 0x2A, 0xE7, 0x70, 0x80, 0xC6, 0x10, 0x50, 0xF9, 
	0xE0, 0xBB, 0x54, 0x39, 0x09, 0xC8, 0xE9, 0x78, 0x9F, 0x27, 
	0xDC, 0x70, 0xEA, 0xCE, 0x48, 0x5C, 0x14, 0xE8, 0x22, 0xF1, 
	0x61, 0xC6, 0x1D, 0x77, 0xA0, 0x1D, 0xCF, 0x52, 0xCC, 0x40, 
	0x14, 0x20, 0x9F, 0xB0, 0x80, 0x0E, 0xF7, 0x01, 0xBA, 0xBE, 
	0x9F, 0xB0, 0x58, 0x39, 0xCD, 0xA2, 0x9B, 0x79, 0x91, 0xB0, 
	0x1C, 0xF7, 0x8E, 0x29, 0x58, 0xBB, 0x8C, 0xB2, 0x2C, 0xC5, 
	0x2B, 0xF8, 0xD9, 0x0B, 0x1C, 0x34, 0x04, 0x96, 0xD6, 0x5B, 
	0x38, 0xC7, 0x8B, 0x9C, 0xC6, 0xB5, 0x1A, 0xE0, 0x4D, 0x94, 
	0x30, 0x38, 0x28, 0x93, 0x1B, 0x26, 0x03, 0xCB, 0x6B, 0x02, 
	0xA4, 0x0B, 0x70, 0x9F, 0xC8, 0xE1, 0x9A, 0xD0, 0xC8, 0x51, 
	0x50, 0xCF, 0xA7, 0x31, 0xE8, 0x0C, 0xE6, 0xEB, 0x96, 0xDE, 
	0xD3, 0x6D, 0xDD, 0x81, 0x4D, 0x3A, 0xD0, 0x5D, 0xD8, 0x17, 
	0x70, 0xEE, 0x03, 0x6E, 0xF0, 0x5A, 0xD8, 0xBB, 0x10, 0x02, 
	0xE1, 0xFA, 0x61, 0xF6, 0x75, 0x73, 0x00, 0x57, 0x44, 0xDD, 
	0x3C, 0xD4, 0x31, 0x21, 0xC1, 0xD0, 0x85, 0x4E, 0x94, 0xC6, 
	0x69, 0x66, 0x96, 0x0F, 0x98, 0xE9, 0x5C, 0x5E, 0x11, 0x8D, 
	0x2B, 0x7C, 0x1E, 0x2F, 0x17, 0x70, 0x46, 0xF2, 0x64, 0x09, 
	0xE7, 0xC4, 0xCC, 0x4F, 0x88, 0x05, 0xFE, 0xF4, 0xE3, 0x89, 
	0x12, 0x20, 0x7E, 0x6D, 0x2A, 0x70, 0x0D, 0xA9, 0x9E, 0xEE, 
	0xE8, 0xC9, 0xAA, 0xC6, 0xAC, 0x72, 0xEC, 0x03, 0x58, 0x5E, 
	0xB4, 0x96, 0x68, 0x7B, 0xA2, 0xB5, 0x45, 0xEB, 0x88, 0xB6, 
	0x2F, 0xDA, 0x81, 0x68, 0x5D, 0x6A, 0x2D, 0xB1, 0xDE, 0x12, 
	0xEB, 0x2D, 0xB1, 0xDE, 0x12, 0xEB, 0x2D, 0xB1, 0xDE, 0x12, 
	0xEB, 0x2D, 0xB1, 0xDE, 0xE2, 0xEB, 0xC1, 0x73, 0x4E, 0x44, 
	0x7B, 0x2A, 0xDA, 0x33, 0xD1, 0xD2, 0xAE, 0xFB, 0xF1, 0x14, 
	0x51, 0xE5, 0x29, 0x07, 0xAE, 0xE1, 0x4F, 0x56, 0xF5, 0xD4, 
	0xAB, 0x9E, 0xEC, 0x1D, 0xB6, 0x98, 0xC8, 0xC2, 0x71, 0xE2, 
	0xAB, 0xF1, 0xEF, 0x84, 0x10, 0x5B, 0xEE, 0x13, 0x90, 0xC7, 
	0x73, 0x03, 0x8A, 0x3E, 0xE5, 0xD1, 0xD3, 0xE7, 0x13, 0xB0, 
	0x31, 0x1E, 0x00, 0x98, 0x98, 0x50, 0x10, 0xE7, 0x49, 0xD8, 
	0x0F, 0x7B, 0xD4, 0xDF, 0x6F, 0xFF, 0x44, 0xCE, 0x5E, 0x8F, 
	0xF1, 0x0C, 0x39, 0x3B, 0x69, 0xB8, 0xD2, 0x25, 0x1C, 0xB5, 
	0x44, 0xE1, 0x32, 0x4D, 0xA2, 0x22, 0xCD, 0x76, 0x52, 0x31, 
	0x49, 0x7F, 0xF2, 0xE6, 0x03, 0xB2, 0x08, 0xFE, 0x29, 0x54, 
	0x83, 0x8C, 0x9F, 0xA6, 0x05, 0x04, 0x00, 0x15, 0xA3, 0x32, 
	0xA6, 0x03, 0xEA, 0x9F, 0xB8, 0x13, 0xA1, 0xFD, 0x1B, 0xFE, 
	0xFD, 0x17, 0x09, 0x16, 0x16, 0x73, 0x54, 0x1A, 0x13, 0x00, 
	0x58, 0x76, 0x50, 0x5B, 0x74, 0x50, 0x2D, 0x39, 0xA8, 0x16, 
	0x1C, 0x88, 0xE9, 0xA4, 0x2E, 0xC8, 0x11, 0xC9, 0xD5, 0xA1, 
	0xB5, 0x44, 0xDB, 0x13, 0xAD, 0x2D, 0x5A, 0x47, 0xB4, 0x7D, 
	0xD1, 0x0E, 0x44, 0xEB, 0x8A, 0xF6, 0x50, 0xB4, 0xA6, 0xB1, 
	0x93, 0xB8, 0xC8, 0x07, 0xEA, 0xF0, 0x37, 0x8A, 0xF0, 0xB2, 
	0xCD, 0xDE, 0xA6, 0xF7, 0xE0, 0x1B, 0x25, 0xC7, 0xFC, 0x44, 
	0xC8, 0xA3, 0xFF, 0xA5, 0x0C, 0xD8, 0xFB, 0xD7, 0x6C, 0x99, 
	0x50, 0xDC, 0x53, 0x6E, 0x5E, 0x9F, 0x5E, 0xB4, 0x98, 0xF6, 
	0x98, 0x31, 0xC8, 0x55, 0x12, 0x25, 0x84, 0x44, 0xF6, 0x96, 
	0x25, 0x45, 0xF7, 0x86, 0x15, 0xAF, 0x63, 0x86, 0x8F, 0xA7, 
	0x0F, 0x17, 0x21, 0xCC, 0x78, 0xAA, 0x96, 0xE4, 0xAC, 0x38, 
	0x69, 0x31, 0xBD, 0xD0, 0x1E, 0x67, 0x69, 0xD6, 0xC2, 0x88, 
	0x93, 0x28, 0x51, 0xA2, 0x14, 0x1A, 0xEB, 0x22, 0xA8, 0x28, 
	0xB2, 0xE8, 0x7A, 0x59, 0xB0, 0x56, 0xA2, 0x17, 0x93, 0x64, 
	0xAA, 0x79, 0x02, 0x35, 0xAB, 0x61, 0x78, 0xCB, 0x31, 0x08, 
	0x98, 0x40, 0xF9, 0x98, 0x26, 0x41, 0x1C, 0x05, 0x5F, 0x86, 
	0xFB, 0xC4, 0x96, 0x3A, 0x4B, 0xF6, 0xDB, 0x45, 0x7B, 0x5F, 
	0xD5, 0xBA, 0x39, 0xDC, 0xC9, 0xE2, 0x18, 0x6E, 0x43, 0xE9, 
	0x07, 0xC8, 0x79, 0x5A, 0x9A, 0xB7, 0xAF, 0x07, 0xCB, 0x0C, 
	0x92, 0xEA, 0xA1, 0xBA, 0x48, 0x23, 0xBC, 0x24, 0xA9, 0x4F, 
	0x12, 0x8B, 0x0B, 0x48, 0xE5, 0x8A, 0x4B, 0x49, 0xAE, 0x92, 
	0xC0, 0x0C, 0x6E, 0xD1, 0x43, 0xF5, 0x45, 0x48, 0x7F, 0x54, 
	0x1D, 0x12, 0xFB, 0xF4, 0x0B, 0x83, 0x01, 0x9E, 0xF1, 0xF2, 
	0x6E, 0xE7, 0x9E, 0x3C, 0x61, 0xA8, 0x5A, 0xEB, 0x38, 0xC7, 
	0xDB, 0x71, 0x06, 0xF4, 0x47, 0xC2, 0xD9, 0xEF, 0xF7, 0xD7, 
	0x71, 0x9A, 0x35, 0x9C, 0x41, 0xF6, 0x7A, 0x5D, 0x0F, 0x95, 
	0x0D, 0x02, 0xB8, 0x75, 0x14, 0x4C, 0x98, 0x01, 0x08, 0xC3, 
	0x44, 0x79, 0xE9, 0x78, 0xE7, 0xB5, 0xEF, 0xC6, 0x2D, 0x75, 
	0x5E, 0x14, 0x8B, 0xE1, 0xC1, 0xC1, 0xFD, 0xFD, 0x7D, 0xF7, 
	0xBE, 0xD7, 0x4D, 0xB3, 0x1B, 0x4A, 0xEA, 0x0F, 0xF2, 0x3B, 
	0x08, 0xA2, 0x0D, 0xD4, 0x3E, 0x62, 0xD6, 0x1E, 0xFD, 0xB3, 
	0x16, 0x37, 0x43, 0x50, 0x64, 0x71, 0x74, 0x7B, 0xA3, 0x6A, 
	0xBA, 0xEC, 0x06, 0x00, 0x26, 0xF2, 0xAC, 0xEB, 0x2F, 0x16, 
	0x2C, 0x09, 0xCF, 0xE6, 0x51, 0x1C, 0xB6, 0x64, 0x3C, 0x79, 
	0xF1, 0xCE, 0xBF, 0x7D, 0x13, 0x87, 0xF9, 0xCA, 0x5B, 0x58, 
	0x37, 0x82, 0x53, 0x31, 0x3B, 0x7F, 0x7F, 0xF9, 0x76, 0x04, 
	0x67, 0xFE, 0xE7, 0x91, 0xE1, 0x7D, 0x3E, 0x32, 0xE1, 0xA7, 
	0xDD, 0xD6, 0x8A, 0xE3, 0xCF, 0x7B, 0x7B, 0x2D, 0x42, 0x8B, 
	0x7A, 0x51, 0xA3, 0x64, 0x81, 0x75, 0x84, 0xC7, 0x28, 0x1C, 
	0xAA, 0x84, 0xEA, 0x93, 0xDA, 0xFE, 0xAC, 0x27, 0x70, 0x8B, 
	0x93, 0xFB, 0x39, 0x56, 0x0D, 0x86, 0x2A, 0xE9, 0x77, 0x08, 
	0x22, 0x2D, 0xBE, 0x7A, 0xAA, 0x0E, 0x47, 0xE0, 0x92, 0x0D, 
	0x73, 0xCC, 0xF4, 0xF2, 0xC9, 0xE7, 0xE9, 0xCB, 0xEA, 0x69, 
	0xA8, 0x82, 0xFE, 0x41, 0x8E, 0x15, 0x1B, 0xED, 0x91, 0x7A, 
	0x74, 0x9D, 0x1D, 0x1C, 0xAB, 0x12, 0xE3, 0xD9, 0xDB, 0xEB, 
	0x58, 0x32, 0x34, 0xEB, 0x66, 0x6C, 0x01, 0xE7, 0x26, 0x6B, 
	0xA9, 0xDF, 0xC0, 0xA2, 0x30, 0xBD, 0x36, 0xFB, 0x3E, 0x1B, 
	0x9F, 0x72, 0x09, 0x83, 0x11, 0x57, 0x58, 0x7E, 0x3A, 0x57, 
	0xDB, 0xAC, 0xAD, 0x02, 0x83, 0x85, 0xA6, 0x07, 0x75, 0x99, 
	0x83, 0x2E, 0xB1, 0xDC, 0x25, 0x8E, 0x47, 0x97, 0x7E, 0x31, 
	0xEF, 0xCE, 0xE2, 0x14, 0x74, 0x63, 0xA2, 0x39, 0x88, 0xD1, 
	0x6E, 0xCC, 0x92, 0x9B, 0x62, 0xDE, 0x31, 0xB5, 0xB6, 0xFA, 
	0xAB, 0xEA, 0xD1, 0x16, 0x1B, 0x91, 0x4E, 0xE6, 0xB6, 0xAA, 
	0x79, 0xB5, 0x49, 0xC7, 0x26, 0x28, 0x2D, 0x91, 0x48, 0xD4, 
	0xA1, 0x46, 0x29, 0x7B, 0x31, 0x5D, 0x3D, 0x0D, 0x8D, 0xD1, 
	0xA8, 0x78, 0x59, 0x5E, 0x55, 0x86, 0x3C, 0x25, 0x56, 0x80, 
	0x59, 0x50, 0x8F, 0xA6, 0x83, 0x05, 0x02, 0x3D, 0xA1, 0x36, 
	0xA9, 0x5B, 0xA2, 0xDC, 0x9E, 0x6A, 0x18, 0x83, 0xC8, 0x24, 
	0xA2, 0x0E, 0xAB, 0xDA, 0xC0, 0x93, 0xAA, 0x17, 0x0F, 0x0B, 
	0xB0, 0x03, 0xEC, 0xFC, 0x02, 0x73, 0x78, 0x6E, 0x01, 0xB5, 
	0x03, 0xE3, 0x51, 0x81, 0x06, 0x7A, 0xC5, 0x62, 0x86, 0x39, 
	0x94, 0x1A, 0xC4, 0x7E, 0x9E, 0x03, 0x51, 0x16, 0x16, 0x64, 
	0x8B, 0x67, 0xC8, 0x04, 0x8B, 0x87, 0x1D, 0xE9, 0x9C, 0x5D, 
	0x55, 0x84, 0xCE, 0xD2, 0xC5, 0xC3, 0x8F, 0x91, 0x89, 0x92, 
	0x7C, 0x47, 0x32, 0x17, 0xEF, 0xC6, 0x15, 0x9D, 0x8B, 0x24, 
	0x67, 0x59, 0x21, 0x51, 0x02, 0x34, 0x8A, 0xA0, 0xE6, 0x95, 
	0x91, 0x31, 0x1B, 0x19, 0x7A, 0x04, 0x4E, 0x1E, 0x1D, 0x8D, 
	0x7F, 0xFF, 0x74, 0x79, 0xF2, 0xF7, 0xC9, 0xD9, 0xFB, 0x8B, 
	0x3F, 0xDE, 0x8D, 0xBD, 0x08, 0xFC, 0x3D, 0x9A, 0xB5, 0x48, 
	0xD5, 0xC4, 0x54, 0xBE, 0xF0, 0x13, 0xE1, 0xEB, 0xB3, 0x24, 
	0x20, 0x5E, 0x3A, 0xC4, 0x0B, 0xFC, 0x46, 0x82, 0xFF, 0xF5, 
	0xA9, 0x58, 0x19, 0x5A, 0x9F, 0x0A, 0xD6, 0x8D, 0xF6, 0xF6, 
	0xD0, 0xC6, 0xDF, 0xBE, 0x9D, 0x7F, 0xBC, 0x9B, 0xB0, 0xE9, 
	0xDE, 0x1E, 0x6F, 0xC1, 0xF6, 0xD2, 0xE3, 0x24, 0x82, 0x9E, 
	0xF1, 0xCB, 0xA8, 0x65, 0x3A, 0xB5, 0xC1, 0x89, 0x31, 0xD5, 
	0xB4, 0x30, 0x7B, 0x93, 0x8C, 0xD1, 0xAD, 0xF5, 0x48, 0xF3, 
	0x58, 0x9C, 0x33, 0x05, 0xF8, 0xFD, 0x25, 0x83, 0x4D, 0x31, 
	0x32, 0xC9, 0x23, 0xFD, 0x51, 0x19, 0xA4, 0x9B, 0xEC, 0x6A, 
	0x1E, 0x30, 0xEB, 0x6F, 0x73, 0x1D, 0xC2, 0x2B, 0x29, 0x1B, 
	0x7E, 0xA3, 0x67, 0x54, 0xDE, 0x46, 0x7D, 0x3E, 0x49, 0x71, 
	0x8F, 0x7C, 0xA2, 0x7E, 0xFC, 0x8C, 0xAA, 0xB0, 0xF7, 0x3F, 
	0x4B, 0x96, 0x3D, 0x8C, 0xC1, 0xD5, 0x02, 0x48, 0x18, 0x4E, 
	0xE2, 0xB8, 0xA5, 0xC2, 0xCE, 0xC8, 0xC1, 0xA9, 0xC1, 0x10, 
	0x5E, 0x76, 0x94, 0x88, 0x6D, 0xE1, 0x65, 0xA0, 0xFF, 0x64, 
	0x92, 0x4D, 0xC5, 0x5E, 0xBC, 0x8B, 0xF2, 0xE8, 0x3A, 0x8A, 
	0xA3, 0xE2, 0x61, 0xA4, 0xD2, 0x33, 0x1C, 0xA1, 0x5E, 0x94, 
	0x67, 0xC1, 0x88, 0xE9, 0x9F, 0xB1, 0x29, 0x56, 0x0C, 0x70, 
	0x6F, 0x21, 0x06, 0xB8, 0xD2, 0xBE, 0x7D, 0x6B, 0xF1, 0x87, 
	0xD1, 0x64, 0xAA, 0xE9, 0x95, 0x22, 0x47, 0xF8, 0x84, 0x38, 
	0x84, 0xCA, 0xE9, 0x71, 0x82, 0xD8, 0xA6, 0x2F, 0x1B, 0xFD, 
	0xE1, 0x64, 0xAA, 0x57, 0x51, 0xC4, 0xFB, 0xFF, 0x11, 0x6B, 
	0x1E, 0x85, 0x21, 0x4B, 0xD4, 0x95, 0x1C, 0xB4, 0x87, 0x25, 
	0x31, 0x20, 0x8C, 0xAC, 0x78, 0x47, 0x49, 0x2A, 0x8E, 0x64, 
	0xD9, 0xA3, 0xA2, 0xA5, 0x3D, 0xDE, 0x67, 0x51, 0xC1, 0xCE, 
	0xC6, 0xE3, 0xD6, 0x8A, 0x59, 0x56, 0x7A, 0x03, 0x4C, 0x05, 
	0xBE, 0x0A, 0xE0, 0xAB, 0x38, 0x3A, 0xFF, 0x18, 0x94, 0x9C, 
	0x15, 0xC0, 0xD9, 0x23, 0x97, 0xEA, 0xD1, 0x1C, 0x4E, 0xB0, 
	0xC2, 0x69, 0xE2, 0xD5, 0xCC, 0x82, 0x67, 0x07, 0x9E, 0x1D, 
	0x78, 0xEE, 0xC1, 0xF3, 0x00, 0x12, 0xC5, 0x81, 0x3D, 0xD5, 
	0x6D, 0x69, 0x8E, 0x33, 0x9C, 0xB8, 0x86, 0xEE, 0xC2, 0x53, 
	0x7F, 0x38, 0xE9, 0xC3, 0xF5, 0x0F, 0x9E, 0x06, 0x00, 0xEF, 
	0xD3, 0xDB, 0xAD, 0x29, 0x24, 0x9A, 0xC3, 0x09, 0x44, 0x7E, 
	0xC8, 0x2A, 0xB1, 0x83, 0xD8, 0x0F, 0xE1, 0xA2, 0x8A, 0xD7, 
	0x25, 0xD3, 0xA1, 0x69, 0xF0, 0x00, 0x2B, 0x2D, 0x9A, 0x0B, 
	0x0B, 0x6D, 0x02, 0x1D, 0x0A, 0x90, 0x85, 0xAB, 0x81, 0x6C, 
	0x0F, 0x9F, 0x61, 0x31, 0xBE, 0xDC, 0x42, 0x0E, 0x2C, 0x60, 
	0xCD, 0xB1, 0x0C, 0x3E, 0xDE, 0xA3, 0x71, 0x87, 0x38, 0x06, 
	0xD6, 0xFA, 0x03, 0x87, 0x8F, 0x3B, 0x34, 0x0E, 0x5D, 0x78, 
	0x26, 0xE6, 0x60, 0x92, 0x0B, 0xCF, 0x40, 0xC5, 0x71, 0x81, 
	0x51, 0x9C, 0xE3, 0x02, 0x7E, 0x5A, 0x08, 0x14, 0x9D, 0x5E, 
	0x0F, 0xE4, 0x44, 0x8A, 0x36, 0xA4, 0xC9, 0x30, 0xB3, 0x07, 
	0x14, 0x2D, 0x48, 0x93, 0x07, 0xEE, 0x00, 0x3A, 0x40, 0x12, 
	0x1E, 0x80, 0x0D, 0x13, 0x3A, 0xA8, 0x0E, 0x1B, 0xB2, 0x67, 
	0x0B, 0x97, 0x00, 0x51, 0xC7, 0x80, 0xC4, 0xD9, 0xB6, 0xA0, 
	0xE3, 0x22, 0x84, 0xDE, 0xA4, 0x41, 0xE7, 0x10, 0x85, 0x07, 
	0x85, 0x21, 0x52, 0xD0, 0x24, 0x8E, 0x39, 0xF0, 0x4C, 0x2F, 
	0x56, 0x91, 0x47, 0x07, 0x29, 0xE0, 0x2B, 0x32, 0xEA, 0x00, 
	0x9E, 0xDE, 0x60, 0x00, 0x83, 0xD8, 0x01, 0x8E, 0x5D, 0xC7, 
	0xD4, 0x7B, 0x7D, 0x20, 0xD7, 0x87, 0x35, 0xF8, 0x6A, 0xCE, 
	0xB4, 0x41, 0xF6, 0xBE, 0xC9, 0x3B, 0x96, 0x05, 0xE4, 0x06, 
	0x00, 0x39, 0x14, 0x5A, 0xC7, 0x71, 0x50, 0x3B, 0x2A, 0x7A, 
	0x80, 0xA6, 0xB3, 0x40, 0x0A, 0x78, 0x76, 0x91, 0x20, 0x64, 
	0xF7, 0x16, 0xF2, 0xEA, 0xC2, 0x24, 0x77, 0x60, 0xE9, 0xB6, 
	0xDB, 0x9F, 0x3E, 0x79, 0xF9, 0x7D, 0x54, 0x04, 0x73, 0x70, 
	0xAD, 0x00, 0x83, 0x8B, 0x3D, 0xD5, 0x1E, 0x43, 0x36, 0xF3, 
	0x97, 0x71, 0x31, 0x84, 0x78, 0x92, 0x4C, 0xAA, 0xF1, 0xE9, 
	0xC4, 0x9C, 0x6A, 0x3C, 0x64, 0x52, 0x6A, 0xA3, 0x66, 0x78, 
	0x79, 0xD6, 0x1F, 0xBF, 0x0E, 0xC5, 0x14, 0x73, 0xDA, 0xA9, 
	0x4D, 0x37, 0xA6, 0x07, 0x96, 0xFE, 0x50, 0x42, 0xAD, 0x06, 
	0xD4, 0x44, 0x68, 0xF6, 0x75, 0x08, 0x97, 0x90, 0xEC, 0x01, 
	0x7F, 0x79, 0x82, 0xD0, 0xC0, 0xA0, 0xCF, 0x29, 0x7B, 0x1F, 
	0x36, 0x96, 0x3E, 0x89, 0x88, 0x27, 0xB3, 0x13, 0x44, 0x19, 
	0x25, 0xD6, 0x8F, 0x81, 0xC4, 0x91, 0x1E, 0x48, 0x0C, 0xE8, 
	0x59, 0x13, 0xFD, 0x81, 0x05, 0xC9, 0x9E, 0x50, 0x00, 0x26, 
	0x55, 0x94, 0xF7, 0x8A, 0xDC, 0x34, 0xC3, 0x9C, 0x0B, 0xC3, 
	0x45, 0xA5, 0x97, 0xC0, 0x07, 0x92, 0xE0, 0xCB, 0xF5, 0x99, 
	0xE3, 0xD6, 0x56, 0x75, 0xB4, 0x1A, 0xE4, 0x3A, 0x3D, 0x43, 
	0x6B, 0xE8, 0xA4, 0xA9, 0xE1, 0x8E, 0x43, 0x53, 0xBE, 0xAB, 
	0x18, 0x40, 0xB5, 0x45, 0x37, 0x80, 0x01, 0xCF, 0x18, 0xE0, 
	0xDD, 0xBB, 0x86, 0x1C, 0xF3, 0x8B, 0x47, 0x6C, 0xC3, 0x26, 
	0xE2, 0xAD, 0x25, 0x5A, 0x7B, 0x77, 0x31, 0x9A, 0x4A, 0xEB, 
	0xD5, 0x24, 0xE8, 0x5B, 0x5D, 0x47, 0xF0, 0x88, 0xAF, 0xB9, 
	0x05, 0x53, 0xA6, 0xE5, 0x6C, 0xE2, 0xC2, 0x14, 0xD4, 0x7B, 
	0xA2, 0x75, 0x76, 0xE7, 0x82, 0xE8, 0x48, 0x84, 0xDB, 0x4D, 
	0x77, 0xEA, 0x81, 0xE4, 0x25, 0x23, 0x96, 0x53, 0x31, 0x62, 
	0x6C, 0x54, 0xC7, 0x60, 0x77, 0xC2, 0x16, 0xD8, 0xE0, 0x39, 
	0xBA, 0x76, 0x67, 0xE0, 0x56, 0x2A, 0xB0, 0xAD, 0x95, 0x0A, 
	0x9C, 0xC1, 0x26, 0xCA, 0x87, 0x5B, 0x28, 0xEF, 0xE4, 0xBF, 
	0xE6, 0xC0, 0x15, 0x38, 0xF5, 0x7F, 0x82, 0xC5, 0xE8, 0xFF, 
	0x1B, 0xB0, 0xF4, 0xEC, 0x4D, 0xE2, 0xB9, 0xFF, 0x44, 0xBC, 
	0x43, 0x77, 0x03, 0xCA, 0xDE, 0x36, 0x94, 0x1B, 0x6C, 0xE5, 
	0xD4, 0x4C, 0xD5, 0x31, 0x2B, 0x8F, 0x58, 0x6D, 0x97, 0x5E, 
	0xE5, 0x10, 0x5B, 0x84, 0x5F, 0x47, 0xDB, 0x76, 0x0C, 0xDC, 
	0x6F, 0xBB, 0x63, 0x96, 0xD9, 0x77, 0xB6, 0x05, 0x8C, 0x8D, 
	0x1A, 0x69, 0x9B, 0xE0, 0x6D, 0x0D, 0xAD, 0xB8, 0x3F, 0xCC, 
	0x30, 0x16, 0xE3, 0x6B, 0xEC, 0x1E, 0x3A, 0x1B, 0x42, 0x8A, 
	0x25, 0x6D, 0xD7, 0xC3, 0x9F, 0xA2, 0xD1, 0x36, 0x6B, 0x5B, 
	0xB2, 0x33, 0x30, 0x36, 0x90, 0x31, 0x07, 0x2B, 0x32, 0xF6, 
	0x46, 0x0D, 0x99, 0x3F, 0xED, 0x33, 0xA4, 0xAE, 0x9F, 0xD2, 
	0x90, 0xD9, 0xD0, 0x10, 0x2A, 0xE3, 0xDF, 0xAE, 0x22, 0xB7, 
	0x1E, 0xB1, 0x2C, 0x67, 0x0B, 0x99, 0xEF, 0xAB, 0xE8, 0x07, 
	0xC2, 0xB5, 0xD9, 0xDC, 0x04, 0x87, 0x74, 0x9E, 0x38, 0x48, 
	0xD1, 0xA9, 0x9C, 0x76, 0xE5, 0xB5, 0xAE, 0xFD, 0xE3, 0xCA, 
	0xAB, 0x87, 0xC4, 0xCE, 0xA0, 0xDF, 0x75, 0xD6, 0x68, 0x58, 
	0x72, 0x28, 0xEC, 0x6D, 0x12, 0xAA, 0xBF, 0xBB, 0x50, 0x76, 
	0xC3, 0x5C, 0x03, 0x73, 0x8D, 0x1E, 0xA6, 0x5F, 0x95, 0x12, 
	0xAD, 0x9F, 0x08, 0x70, 0xED, 0x9E, 0x55, 0xDF, 0x7B, 0x1D, 
	0xD7, 0xDA, 0xC1, 0xB9, 0x76, 0xC3, 0xD5, 0xAE, 0xE3, 0x7A, 
	0x2A, 0xF3, 0xF2, 0x60, 0x24, 0xA6, 0xF4, 0xE0, 0x52, 0xB0, 
	0x80, 0xAB, 0x00, 0xD6, 0x30, 0x34, 0x71, 0x27, 0xAD, 0xB2, 
	0xF3, 0xA8, 0xCC, 0xCE, 0xCB, 0x6C, 0xA7, 0x60, 0x5F, 0x1B, 
	0x2A, 0xAA, 0x79, 0x9A, 0xDD, 0x6B, 0xF7, 0x8D, 0xFF, 0x88, 
	0x3A, 0xF0, 0x53, 0xE2, 0x80, 0xAC, 0x82, 0x56, 0x75, 0xFC, 
	0x24, 0x98, 0xA7, 0x19, 0xDC, 0x87, 0x6F, 0xE1, 0xC6, 0x81, 
	0x8C, 0x8B, 0xFA, 0x18, 0x2F, 0xB1, 0xCD, 0xD2, 0xA4, 0xE8, 
	0xDC, 0xF3, 0x9A, 0x29, 0xDC, 0xF5, 0xD2, 0x38, 0x2C, 0x07, 
	0xB1, 0x38, 0x09, 0x43, 0x3D, 0x07, 0x2E, 0x7C, 0x5E, 0xD6, 
	0x45, 0x5C, 0xF8, 0xC2, 0x15, 0xAE, 0x3F, 0xA3, 0x00, 0x2E, 
	0xA5, 0x2B, 0xED, 0x64, 0x24, 0xE0, 0xF3, 0xDC, 0xAE, 0xA7, 
	0x8A, 0x6D, 0xFB, 0xD9, 0xC4, 0xE8, 0x65, 0xA3, 0xDF, 0x4C, 
	0x88, 0x20, 0x6B, 0x6A, 0x83, 0xCA, 0xD7, 0x65, 0x11, 0x6C, 
	0xE3, 0xAB, 0xF6, 0xAA, 0xF2, 0x57, 0x96, 0x17, 0x9B, 0xC5, 
	0xBF, 0xFE, 0x02, 0xEB, 0xE8, 0x64, 0xDD, 0x4E, 0x9A, 0x85, 
	0x0C, 0xB5, 0xC4, 0xA7, 0xAC, 0xCB, 0x5C, 0xB4, 0xCD, 0x86, 
	0xC8, 0x5E, 0x29, 0x32, 0x48, 0x1C, 0x46, 0x77, 0x55, 0xB5, 
	0x00, 0x6E, 0xD1, 0x4F, 0x74, 0xE5, 0x66, 0x7A, 0xA6, 0x89, 
	0xAB, 0x39, 0x2F, 0x16, 0xF5, 0xE0, 0x5A, 0x8D, 0x55, 0x06, 
	0xA9, 0x3A, 0xB4, 0x7F, 0x84, 0xE5, 0x03, 0x85, 0xEE, 0x87, 
	0xA3, 0x95, 0x04, 0x90, 0xD2, 0x2C, 0xBE, 0x7A, 0x92, 0x71, 
	0x86, 0x09, 0x15, 0x87, 0xBC, 0x3B, 0x96, 0x15, 0x51, 0xE0, 
	0xC7, 0x1D, 0x3F, 0x8E, 0x6E, 0x92, 0x61, 0x91, 0x2E, 0x3C, 
	0xF5, 0xF8, 0xC5, 0x7E, 0xBB, 0x05, 0xFC, 0x69, 0xED, 0x7D, 
	0x65, 0x2F, 0xB9, 0xCE, 0x17, 0x9E, 0x72, 0x74, 0x80, 0x68, 
	0x8F, 0x95, 0x23, 0x60, 0x4C, 0x89, 0xC2, 0x91, 0x1A, 0x5F, 
	0xC7, 0xE1, 0x27, 0x5E, 0xBD, 0x55, 0xA8, 0x40, 0x82, 0x43, 
	0xEA, 0xF1, 0x7E, 0x9B, 0x6A, 0x6B, 0x95, 0x4F, 0x6A, 0x6D, 
	0xF5, 0xE8, 0x00, 0xD6, 0x1C, 0xAB, 0x7A, 0x9A, 0xC4, 0x51, 
	0xC2, 0xB8, 0x1B, 0xE6, 0xA3, 0xB5, 0x0A, 0x20, 0x20, 0xC4, 
	0x72, 0x9A, 0xA8, 0xFF, 0x95, 0x3D, 0x5E, 0x32, 0xE0, 0xF6, 
	0xE7, 0x05, 0x83, 0x0A, 0x75, 0x59, 0x19, 0x9C, 0xC5, 0xA9, 
	0x5F, 0x0C, 0xE9, 0xBD, 0x9B, 0xFA, 0x24, 0x4A, 0x13, 0xB9, 
	0xA6, 0xE7, 0xF5, 0x62, 0xB5, 0x9A, 0x26, 0x5F, 0xD8, 0xC3, 
	0x12, 0x5F, 0x14, 0xD0, 0x45, 0x76, 0x9F, 0x04, 0xA0, 0x02, 
	0xC5, 0xBE, 0x26, 0xE9, 0x8F, 0xD8, 0x2F, 0xE6, 0x51, 0xDE, 
	0x25, 0x72, 0x9A, 0xA7, 0x6A, 0x4F, 0x80, 0x32, 0xD3, 0xFD, 
	0xD5, 0x5D, 0x38, 0x86, 0xCD, 0x15, 0x1F, 0xD5, 0xEA, 0x70, 
	0x5E, 0x5C, 0xEE, 0x30, 0x5F, 0x36, 0x60, 0x55, 0x3B, 0x9A, 
	0x9D, 0xA9, 0x3A, 0xD5, 0x39, 0xB1, 0x72, 0x58, 0x50, 0xE5, 
	0x30, 0xE6, 0xCC, 0x22, 0x66, 0x7E, 0x15, 0x2F, 0xF4, 0x58, 
	0xD0, 0x22, 0x0C, 0xD7, 0x99, 0x8C, 0x20, 0x88, 0x33, 0x2A, 
	0x94, 0xC8, 0x77, 0x71, 0xE2, 0x00, 0x36, 0x7B, 0xC8, 0x49, 
	0xE6, 0x54, 0x3F, 0x58, 0x15, 0x54, 0x97, 0xB7, 0xEA, 0xAA, 
	0x9A, 0x0A, 0x9D, 0x27, 0x4D, 0x4F, 0x9B, 0xDE, 0x95, 0x17, 
	0xAF, 0x50, 0x69, 0x28, 0x19, 0x4A, 0x65, 0x1A, 0xC7, 0x31, 
	0x89, 0x02, 0x6C, 0x84, 0x7A, 0xC2, 0xEE, 0x95, 0x3F, 0x16, 
	0x58, 0x18, 0x68, 0xF1, 0x12, 0x62, 0x3E, 0x54, 0x80, 0x6F, 
	0x3D, 0xD6, 0x0D, 0xBD, 0x26, 0xFD, 0x68, 0x14, 0xBF, 0x34, 
	0x87, 0x86, 0xB6, 0xA1, 0x74, 0xB9, 0xAA, 0x11, 0xA7, 0xF5, 
	0x35, 0x54, 0xF1, 0x62, 0x7A, 0x28, 0xDA, 0x14, 0xC4, 0x58, 
	0xB3, 0x58, 0x30, 0xC7, 0x77, 0xA0, 0xB4, 0xCF, 0x4A, 0x2C, 
	0xDC, 0x78, 0xC0, 0xF6, 0x3E, 0xC4, 0xC1, 0x9A, 0x99, 0x3C, 
	0x59, 0x35, 0xD1, 0x02, 0x70, 0x61, 0xAD, 0xB3, 0xDA, 0x29, 
	0xB2, 0x2E, 0x8B, 0x2C, 0x2E, 0xA5, 0x96, 0xF7, 0x8E, 0x2A, 
	0xBE, 0x76, 0x8B, 0x59, 0xA6, 0x5C, 0x5C, 0x55, 0x5F, 0x41, 
	0xA8, 0x9C, 0x43, 0x7F, 0xBD, 0xAC, 0x7C, 0x7C, 0x71, 0x35, 
	0x84, 0xAD, 0x71, 0x7D, 0xCC, 0x2B, 0xCC, 0x3A, 0xAA, 0xD0, 
	0x5E, 0x69, 0x70, 0x43, 0x9D, 0x1B, 0x49, 0x5F, 0x5C, 0xA1, 
	0xF5, 0x85, 0x69, 0xA4, 0x81, 0x5A, 0xA5, 0xDB, 0x91, 0x0B, 
	0xDD, 0x38, 0xE9, 0x6C, 0x76, 0x03, 0x61, 0x6A, 0x12, 0x4F, 
	0xD7, 0xEA, 0xDB, 0xBD, 0xE3, 0xF8, 0xA5, 0xAA, 0x74, 0x15, 
	0x90, 0x4C, 0xF5, 0x1A, 0x45, 0xF8, 0xB2, 0xFA, 0x2D, 0x7E, 
	0x8E, 0xC7, 0xCB, 0xEB, 0x04, 0x3F, 0x46, 0xF0, 0xF3, 0x2F, 
	0xC3, 0x1F, 0x62, 0x3C, 0xA7, 0x85, 0x12, 0xE3, 0xD2, 0xC0, 
	0xF7, 0x19, 0x37, 0x77, 0x63, 0x1C, 0x2D, 0xC8, 0x2B, 0x4B, 
	0xFC, 0x9B, 0x59, 0xB9, 0xB8, 0x04, 0x71, 0x8E, 0x0F, 0xE2, 
	0xEE, 0x37, 0xA6, 0xC7, 0x23, 0x70, 0x2E, 0x79, 0xE0, 0x68, 
	0x64, 0xDA, 0xB5, 0x1D, 0x48, 0xD1, 0x51, 0x36, 0xEF, 0x6A, 
	0x36, 0x9C, 0x76, 0xC2, 0xA4, 0x72, 0x38, 0x95, 0xC5, 0x85, 
	0xB9, 0xAF, 0x13, 0x29, 0x1E, 0xAD, 0xFA, 0x3C, 0x22, 0x05, 
	0x73, 0x16, 0x7C, 0xB9, 0x4E, 0xBF, 0x62, 0x58, 0x13, 0x85, 
	0x4F, 0xEE, 0x99, 0x30, 0xF1, 0xE2, 0xEA, 0xBA, 0x0A, 0x2C, 
	0x6B, 0x75, 0x3A, 0x1E, 0x5B, 0x68, 0x39, 0x0B, 0x5F, 0xEE, 
	0x8B, 0x62, 0xE4, 0xFE, 0x70, 0x9F, 0xD7, 0xEF, 0xF6, 0xC1, 
	0x93, 0x31, 0x2E, 0x94, 0x33, 0x90, 0x69, 0x54, 0x20, 0xD6, 
	0x75, 0xAB, 0x47, 0x2C, 0x6C, 0xC8, 0xFC, 0xDF, 0x35, 0x77, 
	0xF5, 0x8A, 0x89, 0xD2, 0x36, 0x61, 0x04, 0xC9, 0x81, 0xFF, 
	0x30, 0x54, 0x22, 0x8A, 0xC2, 0x9D, 0xEB, 0x38, 0x0D, 0xBE, 
	0x78, 0xCA, 0x8A, 0x31, 0xDC, 0xD9, 0xAD, 0x2D, 0xC4, 0x5E, 
	0xAA, 0xF9, 0x3C, 0xBD, 0x07, 0x2B, 0x89, 0x1A, 0x23, 0x04, 
	0x75, 0xE2, 0x92, 0x9B, 0x84, 0x4F, 0x43, 0xFB, 0x98, 0x23, 
	0x49, 0xC7, 0xD6, 0x54, 0x23, 0x93, 0xD6, 0x7C, 0x51, 0x59, 
	0x73, 0xB5, 0xBB, 0x75, 0x57, 0x23, 0xEE, 0x3F, 0x95, 0xD5, 
	0xE6, 0x78, 0x65, 0x81, 0xDA, 0xE8, 0x76, 0xA7, 0x5B, 0xB1, 
	0x1E, 0xB7, 0x4D, 0xF2, 0xBA, 0xBB, 0xAD, 0x5E, 0xC7, 0xCB, 
	0x40, 0x75, 0x1E, 0x5B, 0x63, 0x96, 0x45, 0x7E, 0xAC, 0xA9, 
	0xFC, 0xCC, 0xBD, 0x93, 0xAB, 0xD3, 0xAB, 0xAA, 0x79, 0x52, 
	0x26, 0x54, 0x5B, 0xAA, 0xE4, 0x09, 0xE9, 0x27, 0xAB, 0xBF, 
	0x1B, 0x32, 0x7E, 0x19, 0xC1, 0xBA, 0xAC, 0xBE, 0x3F, 0xE7, 
	0xB8, 0x05, 0x3D, 0x9E, 0xCC, 0x6D, 0x08, 0xE4, 0x2C, 0x8E, 
	0x6F, 0xA2, 0xE0, 0x53, 0xF5, 0xC2, 0x89, 0x7E, 0x93, 0x72, 
	0x17, 0x6E, 0x81, 0x96, 0xB1, 0x73, 0xA8, 0x62, 0xCD, 0x97, 
	0xA0, 0xD3, 0x09, 0x81, 0xB1, 0x49, 0xB0, 0x31, 0xA6, 0xA3, 
	0xD6, 0x33, 0xC0, 0x3D, 0xD3, 0xD1, 0xBE, 0x49, 0x27, 0xE1, 
	0xB1, 0xF1, 0xD2, 0xEC, 0x43, 0x8C, 0xF7, 0xD4, 0xF2, 0xDC, 
	0x0A, 0xCA, 0x57, 0x49, 0xD2, 0x31, 0xE1, 0xE3, 0x27, 0x39, 
	0x06, 0xFC, 0x7D, 0xF6, 0xBD, 0x44, 0x02, 0x3D, 0xB3, 0x5F, 
	0x1B, 0x40, 0x37, 0x33, 0x86, 0xA6, 0xB6, 0x01, 0x67, 0x9A, 
	0x29, 0xAD, 0x1C, 0xBF, 0xBE, 0xC2, 0xEF, 0x60, 0x7E, 0x12, 
	0x35, 0x9D, 0x4E, 0x74, 0x78, 0x46, 0x9B, 0x75, 0x0C, 0xF6, 
	0xDB, 0xAE, 0xE2, 0x0D, 0xC0, 0x52, 0x09, 0x91, 0xE6, 0x11, 
	0xBE, 0x94, 0x98, 0xC5, 0x7C, 0xAC, 0xEB, 0x87, 0x61, 0x4B, 
	0xE6, 0x1F, 0xCE, 0x2F, 0x55, 0x7A, 0x65, 0xE4, 0x8F, 0x26, 
	0xA0, 0x20, 0x48, 0x5F, 0x60, 0x23, 0xE4, 0x8D, 0x40, 0x97, 
	0xC3, 0xA6, 0xA8, 0x67, 0x19, 0xE2, 0xFF, 0x04, 0x4C, 0xF2, 
	0xA9, 0x9C, 0x69, 0xF0, 0x9D, 0x27, 0x00, 0x10, 0x5A, 0xD1, 
	0x5E, 0x98, 0x18, 0x31, 0x7C, 0xFA, 0xF6, 0xCD, 0xA0, 0x8D, 
	0x58, 0x03, 0x73, 0x6F, 0x0D, 0x47, 0xDF, 0x55, 0x5E, 0xFD, 
	0x65, 0x11, 0x69, 0x4F, 0xAB, 0xF6, 0x75, 0x4E, 0x94, 0xEA, 
	0x70, 0x73, 0x2A, 0x8E, 0x7F, 0x2F, 0xC4, 0xD7, 0xBB, 0xA3, 
	0x89, 0x3C, 0x57, 0x8F, 0xA7, 0x64, 0xD1, 0x48, 0xB6, 0xE8, 
	0x6A, 0x02, 0x5C, 0x74, 0x54, 0x8C, 0x3C, 0x75, 0x6E, 0x21, 
	0x3C, 0xCB, 0x38, 0x78, 0xB6, 0x04, 0x86, 0x0F, 0xC1, 0x84, 
	0x61, 0xF6, 0x21, 0x1E, 0x7F, 0xE4, 0x3B, 0x50, 0xF7, 0x29, 
	0x12, 0x62, 0x61, 0x59, 0x8F, 0xB6, 0x27, 0x0F, 0xB4, 0xA4, 
	0xF1, 0x46, 0x2A, 0xA1, 0x37, 0x52, 0x9A, 0xBC, 0xB1, 0x71, 
	0xD2, 0x86, 0x8D, 0xBD, 0xD9, 0xFC, 0x9A, 0x1E, 0x8C, 0xB2, 
	0x2E, 0x37, 0x7A, 0x3E, 0xC9, 0xBA, 0xDC, 0x9D, 0x58, 0x78, 
	0x91, 0x84, 0xEC, 0xEB, 0x94, 0xEF, 0x98, 0xF2, 0x3E, 0xF6, 
	0x09, 0x48, 0x3D, 0xFB, 0x26, 0xA9, 0x1A, 0x2E, 0xDF, 0xCC, 
	0xC8, 0xFA, 0x95, 0x81, 0xD0, 0x5D, 0x83, 0xE3, 0x3E, 0x06, 
	0x93, 0x05, 0x68, 0xF8, 0x56, 0xC5, 0xF2, 0xA6, 0xA0, 0xA0, 
	0xED, 0xED, 0x3D, 0x0F, 0xAF, 0x6F, 0x74, 0xBD, 0x69, 0xE5, 
	0x00, 0x7E, 0x3C, 0xBE, 0x85, 0xB6, 0xC4, 0xBC, 0x56, 0x02, 
	0x97, 0x06, 0xD8, 0x02, 0x7B, 0x7B, 0xBF, 0x44, 0xAB, 0x18, 
	0xB7, 0xB7, 0x47, 0x0E, 0xB0, 0xFB, 0xEB, 0x42, 0x42, 0xF3, 
	0xBD, 0x57, 0x86, 0xFA, 0xEA, 0x45, 0xA1, 0x5E, 0x73, 0x0A, 
	0xD4, 0x84, 0x8E, 0xBC, 0x36, 0xAD, 0xCB, 0x27, 0x40, 0xDC, 
	0x82, 0x4D, 0xFB, 0x28, 0xBF, 0xE1, 0x5C, 0x7B, 0xCB, 0x9A, 
	0xD5, 0x13, 0x07, 0x29, 0x3B, 0xD9, 0xB6, 0x69, 0x61, 0x43, 
	0x06, 0xF5, 0x5D, 0xC2, 0x5F, 0x5F, 0x26, 0x23, 0xCB, 0x4B, 
	0xA4, 0x4D, 0x0C, 0x17, 0xDD, 0x72, 0x59, 0xB2, 0xB6, 0x8F, 
	0x23, 0xD4, 0x34, 0x67, 0x2D, 0xDE, 0x1C, 0xA5, 0x80, 0xD3, 
	0x86, 0xD5, 0xB2, 0x66, 0xAC, 0xDA, 0x3E, 0xE5, 0xF9, 0x33, 
	0x21, 0x5B, 0x45, 0xFF, 0xD1, 0x2A, 0xEA, 0x7B, 0x9B, 0x5E, 
	0xD1, 0x97, 0xB7, 0xAC, 0x98, 0xA7, 0x1F, 0xE1, 0xE8, 0x24, 
	0xCB, 0xFC, 0x87, 0x6E, 0x94, 0x53, 0xBB, 0x2E, 0x11, 0x5C, 
	0x3B, 0xC2, 0x97, 0xCD, 0x51, 0x50, 0xD1, 0xB0, 0x39, 0xA6, 
	0xDF, 0x8D, 0x3A, 0x69, 0xC7, 0xC4, 0x83, 0x13, 0xEF, 0xCD, 
	0xF8, 0x89, 0xF0, 0x68, 0x84, 0x2E, 0x90, 0xCE, 0x94, 0xB4, 
	0x0A, 0x8C, 0xE7, 0x60, 0x83, 0xF3, 0xA3, 0xE6, 0xDA, 0x52, 
	0xAD, 0xE7, 0x3C, 0xAF, 0x88, 0x1B, 0x01, 0xA7, 0x4E, 0xFB, 
	0x7C, 0xAA, 0x9F, 0x7F, 0xEF, 0x24, 0xC9, 0x1A, 0x3D, 0xDC, 
	0x7C, 0xA3, 0x73, 0x71, 0xCF, 0xC1, 0xBC, 0x81, 0x0C, 0xF5, 
	0x71, 0x04, 0x51, 0x6F, 0x8D, 0xD9, 0x35, 0x82, 0x5B, 0xB8, 
	0xED, 0x98, 0x3C, 0xD5, 0xDA, 0x75, 0xF2, 0xBA, 0x16, 0xB7, 
	0xCF, 0xA5, 0xC8, 0x0A, 0x39, 0x8E, 0xBE, 0xC0, 0x5A, 0xD0, 
	0xAC, 0x65, 0x1C, 0xA7, 0x7B, 0x7B, 0xE2, 0xDB, 0xD1, 0xC9, 
	0xDD, 0xB4, 0xA1, 0xCE, 0x15, 0xE0, 0x39, 0x45, 0x7E, 0x6C, 
	0xAF, 0xE6, 0xFD, 0x63, 0x25, 0x02, 0x63, 0xE7, 0x6D, 0x32, 
	0x76, 0x7A, 0x6C, 0x7C, 0xFB, 0x16, 0x6E, 0xD0, 0x04, 0xA4, 
	0xF5, 0x6B, 0x63, 0xA6, 0xCC, 0xFA, 0x66, 0xBF, 0x42, 0x81, 
	0x46, 0xAD, 0x0D, 0x30, 0x73, 0x3A, 0x4C, 0xB5, 0x2D, 0x92, 
	0x9D, 0xFF, 0xBB, 0xA4, 0x09, 0x25, 0xFE, 0xD2, 0xE3, 0x91, 
	0xF1, 0xD2, 0x1A, 0x9A, 0xDB, 0x1D, 0x16, 0xDC, 0x7D, 0x57, 
	0x97, 0x5D, 0xFC, 0x14, 0x7F, 0x8B, 0x92, 0xBF, 0x76, 0xFB, 
	0xE9, 0x89, 0xCA, 0xA7, 0x4F, 0xF2, 0xB7, 0x4D, 0xE5, 0x9B, 
	0xFE, 0xC7, 0xB2, 0xA6, 0x40, 0x1F, 0x20, 0xC9, 0xD1, 0xEF, 
	0x3A, 0x0D, 0x1F, 0x1E, 0xA9, 0x74, 0x34, 0xF3, 0x6F, 0xA3, 
	0xF8, 0x61, 0x78, 0x82, 0xE9, 0xB1, 0x7E, 0x0E, 0xB1, 0x86, 
	0x61, 0xED, 0x48, 0xCF, 0xFD, 0x24, 0xEF, 0xE4, 0x90, 0x34, 
	0xCF, 0xBC, 0xCE, 0x3D, 0xBB, 0xFE, 0x12, 0x15, 0x9D, 0x45, 
	0x86, 0x35, 0xB0, 0x00, 0xBF, 0x20, 0xEE, 0xF8, 0xE1, 0xE7, 
	0x65, 0x5E, 0x0C, 0xD9, 0x57, 0x3F, 0x28, 0xBC, 0x27, 0x2C, 
	0xA3, 0xD5, 0xF2, 0xDF, 0x79, 0x4F, 0x79, 0x54, 0xAE, 0xA9, 
	0x5C, 0x36, 0x54, 0x5E, 0xF4, 0xE8, 0x8F, 0x92, 0xA7, 0x71, 
	0x14, 0x2A, 0x26, 0x64, 0xF5, 0xCA, 0x02, 0xF2, 0x29, 0xD8, 
	0x5C, 0x43, 0x07, 0x3B, 0xB7, 0x7E, 0x76, 0x13, 0x25, 0x43, 
	0xC5, 0x72, 0x14, 0x43, 0x81, 0x7F, 0x9E, 0x82, 0xDF, 0x88, 
	0xDF, 0x64, 0xE9, 0x32, 0x09, 0x39, 0xB9, 0xE1, 0x8B, 0xEB, 
	0x43, 0xFC, 0xEB, 0x09, 0x9C, 0x9D, 0xCC, 0x0F, 0xA3, 0x65, 
	0xCE, 0x97, 0xAF, 0x53, 0xEF, 0xC6, 0xD7, 0xCA, 0x63, 0x49, 
	0x1D, 0xE8, 0x09, 0xCA, 0xF8, 0x71, 0x1F, 0xFC, 0x69, 0x22, 
	0xE9, 0x21, 0x92, 0x35, 0x8A, 0xCA, 0x0B, 0x46, 0x7F, 0x56, 
	0xBC, 0x02, 0x6B, 0xF4, 0x77, 0xC5, 0x70, 0x39, 0xB0, 0xE5, 
	0x22, 0xC6, 0x2B, 0xAB, 0x54, 0x82, 0x0B, 0x18, 0x7E, 0xEE, 
	0x08, 0x2B, 0xA3, 0x84, 0x17, 0x16, 0x61, 0x31, 0x5E, 0x6F, 
	0x36, 0xF0, 0x8E, 0xD7, 0x6B, 0x54, 0xDE, 0x9A, 0x0A, 0xFC, 
	0x30, 0x98, 0x85, 0xEE, 0x46, 0x79, 0x67, 0x67, 0xB0, 0x82, 
	0xD7, 0xCC, 0x62, 0x36, 0x2B, 0xBC, 0x95, 0xEA, 0x0F, 0xE9, 
	0xCF, 0x26, 0xD5, 0x5B, 0x1B, 0xC5, 0xAE, 0xA4, 0xDE, 0xA0, 
	0xA3, 0x4D, 0xCC, 0xC6, 0x19, 0x50, 0x0E, 0x62, 0xE6, 0x67, 
	0x82, 0xF2, 0x93, 0xB2, 0x91, 0xBD, 0xB9, 0x0D, 0xF3, 0x2A, 
	0x43, 0x13, 0xB6, 0xF5, 0x89, 0x2F, 0xD0, 0x85, 0xAB, 0x79, 
	0x9D, 0x22, 0x5D, 0x80, 0xF9, 0xE8, 0xEB, 0xC0, 0x0D, 0x93, 
	0xE7, 0x16, 0xCA, 0x5C, 0xD5, 0x42, 0x15, 0x1B, 0xE7, 0xC9, 
	0x3A, 0x57, 0x2A, 0xA5, 0x97, 0x64, 0x0D, 0xF0, 0x2F, 0xC0, 
	0x87, 0x1E, 0x56, 0x6A, 0xC1, 0x74, 0x36, 0xAB, 0xC1, 0x60, 
	0x76, 0x78, 0x6D, 0x7B, 0x0A, 0xEF, 0xDE, 0xE3, 0x7F, 0x9F, 
	0xDA, 0xD5, 0xF9, 0xF2, 0xD3, 0x65, 0xA1, 0x3C, 0x2E, 0xC4, 
	0xFF, 0x8C, 0x19, 0x2A, 0xB3, 0xE8, 0x2B, 0x0B, 0x71, 0x31, 
	0x7E, 0x95, 0x3C, 0x54, 0x88, 0x4D, 0xAA, 0x6C, 0x8A, 0xE7, 
	0x0D, 0xAE, 0x67, 0x9F, 0x9D, 0xBC, 0x71, 0x8C, 0x92, 0xBA, 
	0x22, 0xC8, 0x57, 0x8E, 0x68, 0xC2, 0x3A, 0x85, 0x73, 0xBE, 
	0x49, 0x5E, 0x1A, 0x0B, 0xF1, 0x3F, 0x46, 0xFA, 0x9C, 0x83, 
	0x24, 0x4D, 0x60, 0xF9, 0x16, 0x2F, 0x2D, 0xB5, 0x63, 0x03, 
	0x4E, 0x32, 0x8C, 0xF8, 0x46, 0x57, 0x11, 0xDF, 0xE8, 0x36, 
	0xC5, 0xC6, 0x89, 0x9B, 0xFC, 0x16, 0xBF, 0xA4, 0x7B, 0x94, 
	0x6A, 0x0F, 0xBC, 0xAE, 0x00, 0x96, 0xEB, 0xB2, 0xB0, 0x78, 
	0x94, 0x0A, 0xBA, 0xDE, 0x4A, 0x60, 0x10, 0x75, 0x36, 0x9B, 
	0x79, 0xA5, 0x60, 0x86, 0x62, 0x81, 0x85, 0x2C, 0x4F, 0xB0, 
	0x54, 0x76, 0x37, 0x6D, 0x57, 0xEE, 0xDF, 0xD2, 0xDE, 0xE6, 
	0x8E, 0xBE, 0xC9, 0x94, 0x62, 0xDF, 0x6C, 0xDA, 0x36, 0x0B, 
	0xE5, 0xB1, 0x54, 0x79, 0xB9, 0x5E, 0xF2, 0x28, 0x73, 0xF3, 
	0x0E, 0xFD, 0xCF, 0x5B, 0x16, 0x46, 0xBE, 0x42, 0xD1, 0x10, 
	0x5C, 0x50, 0xD8, 0xBB, 0xD2, 0x2E, 0x2A, 0x5B, 0xF9, 0x25, 
	0xBA, 0x5D, 0xA4, 0x59, 0xE1, 0x27, 0x10, 0x1C, 0x9F, 0x54, 
	0x7E, 0x47, 0xC5, 0x4F, 0xD2, 0x3A, 0x26, 0xFF, 0x34, 0x0D, 
	0xF3, 0x21, 0xFA, 0x2C, 0xCB, 0xFB, 0x3F, 0xD2, 0x68, 0x93, 
	0x3F, 0xC8, 0x41, 0x00, 0x00, 
};

	// Default Controller Configuration (len=147)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x00, 0x81, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 
	0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 
	0xFF, 0xC0, 0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 0x05, 
	0x01, 0xC0, 0xA8, 0x0A, 0xF0, 0x00, 0x00, 
};

#endif


#define SK_HWEN_GPIO 1
SkaarhojGPIO2x8 GPIOboard2;