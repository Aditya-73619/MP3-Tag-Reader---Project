# 🎵 MP3 Tag Reader and Editor in C

## 📌 Overview

This project implements an **MP3 Tag Reader and Editor** using the C programming language.

MP3 files contain metadata that stores information about a song, such as its title, artist, album, year, genre, and comments. This information is stored in metadata frames associated with the ID3 format.

This application allows users to **view and edit MP3 metadata through command-line arguments** without needing a graphical interface.

The project works directly with binary MP3 data to read metadata frames and update selected tag values while preserving the audio content.

---

## 🚀 Features

- **View MP3 Metadata** — Display the available metadata stored in an MP3 file.
- **Edit Song Title** — Modify the title of a song.
- **Edit Artist** — Update the artist name.
- **Edit Album** — Change the album name.
- **Edit Year** — Update the release year.
- **Edit Content Type** — Modify the genre or content-type metadata.
- **Edit Comment** — Update the comment associated with the MP3 file.
- **Command-Line Interface** — Perform operations using simple terminal commands.
- **Input Validation** — Validate operation types, editing options, and command-line arguments.
- **Binary File Processing** — Read and update metadata stored in MP3 files.
- **Modular Design** — Separate viewing and editing functionality into different source files.

---

## 🛠️ Technologies Used

- C Programming
- Structures and Enumerations
- Pointers
- Dynamic Memory Management
- Binary File Handling
- String Manipulation
- Command-Line Arguments (`argc` and `argv`)
- Bitwise Operations
- Endian Conversion
- Modular Programming

---

## 📂 Project Structure

```text
MP3-Tag-Reader---Project/
├── main.c       # Main function and operation selection
├── view.c       # Reads and displays MP3 metadata
├── view.h       # Viewing-related declarations
├── edit.c       # Edits MP3 metadata
├── edit.h       # Editing-related declarations
├── types.h      # Structures, enums, and type definitions
├── print.h      # Printing and menu-related declarations
├── song.mp3     # Sample MP3 file
└── README.md    # Project documentation
```

---

## ⚙️ How to Run

### Prerequisites

- GCC compiler
- Linux or macOS terminal
- An MP3 file to analyze

### 1. Clone the Repository

```bash
git clone https://github.com/Aditya-73619/MP3-Tag-Reader---Project.git
```

### 2. Navigate to the Project Directory

```bash
cd MP3-Tag-Reader---Project
```

### 3. Compile the Program

```bash
gcc main.c view.c edit.c -o mp3tag
```

### 4. View MP3 Metadata

```bash
./mp3tag -v song.mp3
```

This command reads and displays the available metadata from `song.mp3`.

### 5. Edit MP3 Metadata

The general command format is:

```bash
./mp3tag -e <tag_option> "new data" song.mp3
```

For example, to change the song title:

```bash
./mp3tag -e -t "Sunny Sunny" song.mp3
```

The program edits the selected metadata field in the specified MP3 file.

---

## 🧾 Command-Line Options

### General Operations

| Command | Description |
|---|---|
| `-v` | View MP3 metadata |
| `-e` | Edit MP3 metadata |
| `-h` | Display the help menu |

### Metadata Editing Options

| Option | Metadata Field | ID3 Frame |
|---|---|---|
| `-t` | Song Title | `TIT2` |
| `-a` | Artist Name | `TPE1` |
| `-A` | Album Name | `TALB` |
| `-m` | Content Type / Genre | `TCON` |
| `-y` | Year | `TYER` |
| `-c` | Comment | `COMM` |

### Example Commands

**View metadata**

```bash
./mp3tag -v song.mp3
```

**Edit the title**

```bash
./mp3tag -e -t "Sunny Sunny" song.mp3
```

**Edit the artist**

```bash
./mp3tag -e -a "Artist Name" song.mp3
```

**Edit the album**

```bash
./mp3tag -e -A "My Album" song.mp3
```

**Edit the content type**

```bash
./mp3tag -e -m "Pop" song.mp3
```

**Edit the year**

```bash
./mp3tag -e -y "2025" song.mp3
```

**Edit the comment**

```bash
./mp3tag -e -c "My favourite song" song.mp3
```

**Display the help menu**

```bash
./mp3tag -h
```

> **Note:** The editing commands modify the specified MP3 file. Keep a backup of the original file if you want to preserve its initial metadata.

---

## 🔄 How It Works

### Viewing Metadata

1. Accept the MP3 filename through command-line arguments.
2. Validate the viewing operation and input file.
3. Open the MP3 file in binary mode.
4. Read and process the metadata header and frames.
5. Identify supported ID3 frame identifiers.
6. Display the corresponding metadata values.

### Editing Metadata

1. Accept the editing option, new value, and MP3 filename.
2. Validate the requested metadata field.
3. Map the selected option to its corresponding ID3 frame.
4. Read the existing MP3 metadata and frame information.
5. Update the selected frame using binary file operations.
6. Write the updated content while preserving the audio data.

---

## 🎯 Concepts Practiced

- Binary File Input and Output
- Structures and Enumerations
- Pointers and Memory Management
- Command-Line Argument Processing
- String Manipulation
- ID3 Metadata and Frame Identifiers
- Big-Endian and Little-Endian Conversion
- File Validation and Error Handling
- Modular Programming
- Reading and Updating Binary File Formats

---

## 👨‍💻 Author

**Aditya Gupta**

This project helped me strengthen my understanding of C programming, binary file handling, pointers, and metadata processing by building a command-line application that reads and edits information stored inside MP3 files.
