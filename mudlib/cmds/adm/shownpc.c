#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	string *dir,name,msg="";
	object npc;
	int i,j;

	if(! arg)	return notify_fail("shownpc [area|npc]\n");
if( arg=="area")	{
	msg=sprintf(HIC"%-3s%-10s%-24s%20s%+8s%5s\n"NOR,
	"NO","������","StartRoom","������","��Դ","��ֵ");
	dir=get_dir("/data/npc/",0);
	if(! dir)	dir=({});
	npc=new("/obj/stand");
	j=1;
	for(i=0;i<sizeof(dir);i++)	{
	if(sscanf(dir[i],"%s.o",name)==1)	{
	npc->create(name);
	msg+=sprintf("%-3d%-10s%-24s%20s%+8s%5d\n",
	j++,
	name,
	(string)npc->query("startroom"),
	stringp(npc->query("area_name"))?npc->query("area_name"):"-",
	stringp(npc->query("ziyuan"))?npc->query("ziyuan"):"-",
	intp(npc->query("jizhi"))?npc->query("jizhi"):"-");
	}
	}
}
else if(arg=="npc")	{
	msg=sprintf(HIC"%-3s%-10s%-16s%10s%10s%16s\n"NOR,
	"NO","������","Ӣ����","�书�ȼ�","ս������","�������");
	dir=get_dir("/data/npc/",0);
	if(! dir)	dir=({});
	npc=new("/obj/stand");
	j=1;
	for(i=0;i<sizeof(dir);i++)	{
	if(sscanf(dir[i],"%s.o",name)==1)	{
	npc->create(name);
	msg+=sprintf("%-3d%-10s%-16s%10d%10d%16s\n",
	j++,
	name,npc->query("id"),npc->query("skills_lv"),npc->query("exp_lv"),
	npc->query("banghui")?npc->query("banghui"):"--");
	}
	}
}
else	return notify_fail("shownpc [area|npc]\n");

	destruct(npc);
	me->start_more(msg);

	return 1;
}


