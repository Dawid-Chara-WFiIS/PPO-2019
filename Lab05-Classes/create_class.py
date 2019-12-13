import sys, os

def main():
    if len(sys.argv) != 3:
        return print("Usage: python3 create_class.py [class_name] [directory]\n")
    else:
        class_name, destination_dir = sys.argv[1:]
        os.system("touch {}/{}.cpp".format(destination_dir, class_name))
        f = open("{}/{}.h".format(destination_dir, class_name), 'w')
        f.write("class %s \n {};" % class_name)
        f.close()


if __name__ == '__main__':
    main()
