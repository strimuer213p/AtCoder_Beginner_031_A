/*
��蕶
�����N�͐V�����Q�[���𔃂����B
�����N�̃Q�[���L�����N�^�[�ɂ͍U���͂Ɩh��͂���܂��Ă���A���x�����オ��ƍU���͂Ɩh��͂̂����D���ȂЂƂ� 1 �����グ�邱�Ƃ��ł���B
�����N�̓Q�[���L�����N�^�[�̍U���͂Ɩh��͂̐ς��ő�ƂȂ�悤�ɍU���͂��h��͂̂����ЂƂ�I��ŏグ��B�������ǂ����I��ł����x���A�b�v��̍U���͂Ɩh��͂̐ς��������Ȃ�ꍇ�A�U���͂�I��ŏ㏸������B
�����N���Q�[���L�����N�^�[�����x���A�b�v�������ꍇ�́A���x���A�b�v��̍U���͂Ɩh��͂̐ς����߂�B
*/

#include<iostream>

int main() {
	int attack, defense;
	std::cin >> attack>>defense;

	if (attack <= defense) {
		attack++;
	}
	else {
		defense++;
	}

	std::cout << attack*defense << std::endl;

	return 0;
}