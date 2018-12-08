# from .source_file_operations import Source_file_generator
from source_file_operations import Source_file_generator


class IndicatorBoxFunction_new:
    def __init__(self, lower_limit, upper_limit):
        self._lower_limit = lower_limit
        self._upper_limit = upper_limit
        self._dimension = 1

    def generate_c_code(self, location):
        source_file = Source_file_generator(location, "gproxg")
        source_file.open()

        """ what is the dimension? is this 2?? check this"""
        struct_values = ["2", str(self._lower_limit), str(self._upper_limit), "1e6"]
        source_file.write_instantiate_struct("data", "indicator_box", struct_values, indent=1)

        init_values = ["2", str(self._lower_limit), str(self._upper_limit)]
        source_file.write_function_call("init_indicator_box", init_values, indent=1)

        source_file.write_line("return prox_indicator_box(&data,input,gamma);", indent=1)
        source_file.close()

    def copy_static_files(self):
        print("Copying over static source files..")

        print("Static code files are ready")


def main():
    test = IndicatorBoxFunction_new(1, 2)
    test.generate_c_code("test.c")


if __name__ == "__main__":
    main()
