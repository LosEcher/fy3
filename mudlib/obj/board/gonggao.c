inherit BULLETIN_BOARD;

void create()
{
	set_name("������",({ "board"}));
	set("location","/d/zhongzhou/gonggao");
	set("read_only",1);
	set("board_id", "gonggao");
        set("long",
		"����Ѫ����������ͨ�����������Ϸ��������б䶯�������ڴ��ҵ���\n");
        setup();
	set("capacity",100);
        replace_program(BULLETIN_BOARD);
}
