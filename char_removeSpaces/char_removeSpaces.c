void removeSpaces(char* st) {
	for (int i = 0; i < strlen(st); ++i) {
		if (i == 0 && st[i] == ' ') {
			for (int j = i; j < strlen(st); ++j) {
				st[j] = st[j + 1];
			}
			--i;
		}

		if (i > 0) {
			if (st[i - 1] == ' ' && st[i] == ' ') {
				for (int j = i; j < strlen(st); ++j) {
					st[j] = st[j + 1];
				}
				--i;
			}
		}
	}

	if (st[strlen(st) - 1] == ' ')
		st[strlen(st) - 1] = '\0';
}