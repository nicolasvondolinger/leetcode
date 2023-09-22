#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Uso: $0 nome_do_arquivo.cpp"
    exit 1
fi

template_file="main.cpp"
output_file="$1"

cp "$template_file" "$output_file"

echo "Arquivo $output_file criado com base no template."
