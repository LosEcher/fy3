inherit ROOM;			   
      
void create()
{
        set("short", "������");
        set("long",@LONG
�����Ǻ�ľ�µĵڶ����ð׻��õ������ҡ�������ש�̵ء�����ʯ��
���а�����ȥ�����з���һֻС���ӣ��и��������������淿���ϡ�.
LONG );		  
        set("exits", ([	
	    "west"      : __DIR__"qing",
	]));
	setup();
	replace_program(ROOM);
}
