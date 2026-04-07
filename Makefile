CC      = gcc
CFLAGS  = -Wall -Wextra -g -std=c11
SRCDIR  = src
BINDIR  = bin

SRCS    = $(wildcard $(SRCDIR)/*.c)
BINS    = $(patsubst $(SRCDIR)/%.c, $(BINDIR)/%, $(SRCS))

.PHONY: all clean run

all: $(BINDIR) $(BINS)

$(BINDIR):
	mkdir -p $(BINDIR)

$(BINDIR)/%: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<
	@echo "Built: $@"

# Run a specific target: make run TARGET=hello
run: all
	@if [ -z "$(TARGET)" ]; then \
		echo "Usage: make run TARGET=<filename_without_extension>"; \
	else \
		./$(BINDIR)/$(TARGET); \
	fi

clean:
	rm -rf $(BINDIR)
