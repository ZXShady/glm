import os
import subprocess
import sys

# Function to recursively find all .hpp, .inl, and .cpp files
def find_hpp_files(directory):
    hpp_files = []
    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith((".hpp", ".inl", ".cpp")):
                hpp_files.append(os.path.join(root, file))
    return hpp_files

# Function to run clang-format on a given file
def run_clang_format(file_path):
    try:
        print(f"Running clang-format on: {file_path}")
        subprocess.run(
            ["clang-format", "-i", file_path], check=True, timeout=5  # Timeout after 60 seconds
        )
        print(f"Formatted: {file_path}")
    except subprocess.CalledProcessError as e:
        print(f"Error formatting {file_path}: {e}")
    except subprocess.TimeoutExpired:
        print(f"Timeout expired for {file_path}. Skipping.")
    except Exception as e:
        print(f"Unexpected error with file {file_path}: {e}")

def main():
    # Check if directory is provided as a command line argument
    if len(sys.argv) < 2:
        print("Usage: python run-clang-format.py <directory>")
        sys.exit(1)
    
    # Get the directory from command line argument, default to current directory
    directory = sys.argv[1]
    
    # Ensure the directory exists
    if not os.path.isdir(directory):
        print(f"The directory {directory} does not exist. Please check the path.")
        sys.exit(1)

    # Find all .hpp, .inl, and .cpp files in the given directory
    hpp_files = find_hpp_files(directory)
    
    # If no files were found, print a message and exit
    if not hpp_files:
        print(f"No .hpp, .inl, or .cpp files found in {directory}")
        sys.exit(0)
    
    # Run clang-format on each file found
    for hpp_file in hpp_files:
        run_clang_format(hpp_file)

if __name__ == "__main__":
    main()
