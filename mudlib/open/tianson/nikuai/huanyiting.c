//taishan 
//huanyiting.c

inherit ROOM;

void create ()
{
        set ("short", "����ͤ");
        set ("long", @LONG

�����˸������ڵ�ɽ�����Сͤ�ӣ��Ѿ����۵�����Ҳ����������Ъ
һЪ�ţ���һ���죬����һ�¡���������������Ǹ߿����Ƶ�̩ɽ��
���������������ݳǣ���ɫʮ�ֲ���ͤ���Ա���һ��������бб
�����������⡣
LONG);

        set("exits", 
        ([ //sizeof() == 4
		"north" : "/d/taishan/yitian",
        ]));

        set("objects", 
        ([ //sizeof() == 1
                "/open/tianson/nikuai/nikuai.c" : 1,
        ]));


        set("outdoors", "changan");
      set("no_clean_up", 0);
        setup();
	replace_program(ROOM);
}

