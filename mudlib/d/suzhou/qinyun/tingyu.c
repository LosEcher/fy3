// Room: /u/oldsix/room1/tingyu.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
����������ӡ������ˮ���Ӵ�������ȥ�������̲������۵ף��ع�ͷ����
��[1;32m����[2;37;0m�ϱ������Ǿ��µ�ϸ�ţ��������Ⱥ������ɡ�
LONG
	);
	set("objects",([
		__DIR__"npc/woman" :1,
		]));
	set("item_desc",([
	"����" : "һ�ź�ľ������(zhuozi)��������ͦ�صģ��ƺ������ƶ�(yi)��\n",
	"zhuozi":"һ�ź�ľ��������������ͦ�صģ��ƺ������ƶ�(yi)��\n",
		]));
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"ru4",
]));
	set("no_clean_up", 0);
	set("chuilang_dest","/d/suzhou/canhe/canhe.c");
	set("where","����");
	setup();
}
void init()
{
	add_action("do_move","yi");
}
int do_move(string str)
{
	object me,npc;
	me=this_player();
	if(!str)	{
		write("��Ҫ��ʲô������\n");
		return 1;
			}
	if(str!="zhuozi"&&str!="����")   {
		write("û������������\n");
		return 1;
			}
	if(this_object()->query("exits/down"))	{
		message_vision("$N�ƶ��������ӣ����ûʲô��Ӧ��\n",me);
		return 1;
	}
	if(!present("a zhu",this_object()))	{
	        message_vision("$Nʹ���˳��̵ľ���Ҳû�ܰ������ƶ��ֺ���\n"
        +"�ƺ����������а�����ʲô���ء�\n",me);
    return 1;
	}
            message_vision("����Ц�Ŷ�$N˵������������ɡ�\n"
                        +"˵�꣬������ǽ�ϲ�֪ʲô�ط�����һ�¡�\n"
                        +"����ֻ�������������������죬�������Ƶ�һ�ߡ�\n",me);

    this_object()->set("exits/down","/d/suzhou/taihu/shuilu1.c");
    return 1;
}
int valid_leave(object me,string str)
{
	if(str=="down") {
	write("ֻ���á��������������죬�����ѻص�ԭλ��\n");
		this_object()->delete("exits/down");
			}
	return 1;
}
