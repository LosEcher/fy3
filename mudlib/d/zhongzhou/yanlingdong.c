//yanlingdong
inherit ROOM;
void create()
{
  set ("short", "���궫·");
  set ("long", @LONG
�������������߾͵������궫·���������ݵ�һ���Ͻ֡����ߵķ�
�ݿ���ȥ�Ѿ��ܳ¾��ˡ�·����һ�����ֺŵ������������������⵽��
�ֵط���תһתҲ����һ����ζ��
LONG);

set("outdoors","/d/zhongzhou");

  set("exits", ([  
    "west" : __DIR__"shizhongxin",
    "north" : __DIR__"biwuchangmen.c",
    "south" : __DIR__"canting",
    "east"  : __DIR__"yanlingdong1",
]));
       
	set("objects", ([
	__DIR__"npc/liumang" : 1,
	__DIR__"npc/yahuan" : 1,
	]));
	 setup();
        replace_program(ROOM);
}
int valid_leave(object who,string dir)
{
        object npc;
        npc=present("guard man",this_object());
        if(dir=="east") {
                who->delete_temp("rent_paid");
                return ::valid_leave(who,dir);
        }
        if(dir=="north"&& ! (int)who->query_temp("rent_paid")
                && objectp(npc))        {
        return notify_fail("������Ц����û�����Ӿ����ȥ��������\n");
                        }
        return ::valid_leave(who,dir);
}

